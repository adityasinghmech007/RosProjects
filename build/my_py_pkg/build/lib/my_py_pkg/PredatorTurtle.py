#!/usr/bin/env python3
import random
import rclpy
import math
from rclpy.node import Node
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose
from turtlesim.srv import Spawn, Kill

class MovePredatorTurtle(Node): # MODIFY NAME
    def __init__(self):
        super().__init__("PredatorTurtle") # MODIFY NAME
        self.spawn_a_prey_client_ = self.create_client(Spawn,"/spawn")
        self.kill_client_ = self.create_client(Kill, "/kill")
        while not self.spawn_a_prey_client_.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("Waiting for Spawn Service")
        while not self.kill_client_.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("Waiting for Kill Service")
        
        self.pred_location_subscriber_ = self.create_subscription( Pose, "/turtle1/pose", self.callback_predator_pose,10)
        self.prey_location_subscriber_ = self.create_subscription( Pose, "/turtle2/pose", self.callback_prey_pose,10)

        self.predator_pose_ = None
        self.prey_pose_ = None 
        self.cmd_vel_publisher_= self.create_publisher(
            Twist,
            "/turtle1/cmd_vel",
            10
        )
        self.spawn_new_prey()
        self.get_logger().info("Predator has started")
        self.timer_ = self.create_timer(1.0 , self.move_to_prey)
    def spawn_new_prey(self):
        if not self.spawn_a_prey_client_.wait_for_service(timeout_sec=1.0):
            self.get_logger().warn("Spawn Service not Available yet")
            return
        request = Spawn.Request()
        
        request.x = random.uniform(1.0,10.0)
        request.y = random.uniform(1.0,10.0)
        
        request.theta = 0.0 
        request.name = "turtle2"
        
        future = self.spawn_a_prey_client_.call_async(request)
        
        future.add_done_callback(self.callback_spawn_response)
    def kill_old_prey(self):
        self.get_logger().info("Killing Old Prey")
        request = Kill.Request()
        request.name = "turtle2"
        future = self.kill_client_.call_async(request) 
        
        future.add_done_callback(self.callback_kill_response)
        
    def callback_kill_response(self,future):
        try:
            future.result()
            self.get_logger().info("Kill Successfull. Now Spawing . ..")
            
            self.spawn_new_prey()
            
        except Exception as e:
            self.get_logger().error(f"kill Failed:{e}")
            
        
           
    def callback_spawn_response(self, future):
        try:
            response =  future.result()
            self.get_logger().info(f"Spawned new prey: {response.name}")
        except Exception as e:
            self.get_logger().error(f"Service Call Back: {e}")
            
        
        
    def callback_predator_pose(self, msg: Pose):
        self.predator_pose_ = msg
        
    def callback_prey_pose(self, msg: Pose):
        self.prey_pose_ = msg 
        
            
    def calculate_theta_for_hunt(self):
  
        
        
        prey_x = self.prey_pose_.x 
        prey_y = self.prey_pose_.y 
        
        predator_x =  self.predator_pose_.x
        predator_y = self.predator_pose_.y
        
        
        
        delta_x = prey_x - predator_x
        delta_y = prey_y - predator_y
        
        if abs(delta_x) < 0.5  and abs(delta_y) < 0.5 :

            return "Prey has Been Eaten"
        
        theta = math.atan2(delta_y,delta_x)
        
        return theta    
         
    def move_to_prey(self):
        if self.predator_pose_ is None or self.prey_pose_ is None:
            return 0.0
        
        target_theta = self.calculate_theta_for_hunt()
        
        if target_theta == "Prey has Been Eaten":
            self.get_logger().info("Prey has been eaten . Generate a New prey")
            stop_msg = Twist()
            self.cmd_vel_publisher_.publish(stop_msg)
            self.kill_old_prey()
            self.prey_pose_ = None
            return
        
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
        
def main(args=None):
    rclpy.init(args=args)
    node = MovePredatorTurtle() # MODIFY NAME
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
