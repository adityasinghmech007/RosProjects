#!/usr/bin/env python3
import random
import rclpy
import math
from rclpy.node import Node
from rclpy.action import ActionServer
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose
from turtlesim.srv import Spawn, Kill
from my_robot_interfaces.action import PredatorMovement
from rclpy.executors import MultiThreadedExecutor
import time

class MovePredatorTurtle(Node): # MODIFY NAME
    def __init__(self):
        super().__init__("PredatorTurtle") # MODIFY NAME
        self._action_server = ActionServer(
            self, 
            PredatorMovement,
            "predatorMovement",
            self.move_to_prey
        )
        self.pred_location_subscriber_ = self.create_subscription( Pose, "/turtle1/pose", self.callback_predator_pose,10)
        self.predator_pose_ = None
        self.cmd_vel_publisher_= self.create_publisher(
            Twist,
            "/turtle1/cmd_vel",
            10
        )
        self.get_logger().info("Predator has started")

                   
    def callback_predator_pose(self, msg: Pose):
        self.predator_pose_ = msg

  
         
    def move_to_prey(self, goal_handle):
        while True:    
            if self.predator_pose_ is None :
                continue
            prey_x = goal_handle.request.target_x
            prey_y = goal_handle.request.target_y
            predator_x =  self.predator_pose_.x
            predator_y = self.predator_pose_.y
            delta_x = prey_x - predator_x
            delta_y = prey_y - predator_y
        
            if abs(delta_x) < 0.5  and abs(delta_y) < 0.5 :
                self.get_logger().info("Prey has been eaten . Generate a New prey")
                stop_msg = Twist()
                self.cmd_vel_publisher_.publish(stop_msg)
                goal_handle.succeed()
                
                result = PredatorMovement.Result()
                result.success = True
                return result

                
            
            target_theta = math.atan2(delta_y,delta_x)
            
            current_theta = self.predator_pose_.theta
            
            error_theta = target_theta - current_theta
            
            if error_theta > math.pi:
                error_theta -= 2*math.pi
            elif error_theta < -math.pi:
                error_theta += 2*math.pi
                
            msg = Twist()
            
            msg.linear.x = 1.0
            msg.angular.z = 1.2 * error_theta
            self.cmd_vel_publisher_.publish(msg) 
            time.sleep(0.01) 
              
        
def main(args=None):
    rclpy.init(args=args)
    node = MovePredatorTurtle() # MODIFY NAME
    executor = MultiThreadedExecutor()
    executor.add_node(node)
    
    try:
        # Spin the node using the Multi-Threaded Executor
        executor.spin()
    finally:
        executor.shutdown()
        node.destroy_node()
        rclpy.shutdown()



if __name__ == "__main__":
    main()
