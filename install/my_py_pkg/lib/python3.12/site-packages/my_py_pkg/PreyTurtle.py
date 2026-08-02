#!/usr/bin/env python3

import rclpy
import random
import math
from rclpy.node import Node
from rclpy.action import ActionClient
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose
from my_robot_interfaces.action import PredatorMovement
from turtlesim.srv import Spawn, Kill

class SpawnPreyTurtle(Node): # MODIFY NAME
    def __init__(self):
        super().__init__("spawn_prey_turtle") # MODIFY NAME
        self._action_client =  ActionClient(
            self,
            PredatorMovement,
            "predatorMovement"
        )
        self.spawn_a_prey_client_ = self.create_client(Spawn,"/spawn")
        self.kill_client_ = self.create_client(Kill, "/kill")
        self.prey_location_subscriber_ = self.create_subscription( Pose, "/turtle2/pose", self.callback_prey_pose,10)
        while not self.spawn_a_prey_client_.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("Waiting for Spawn Service")
        while not self.kill_client_.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("Waiting for Kill Service")
        self.spawn_new_prey()
        self.prey_pose_ = None 
        
        
    def callback_prey_pose(self, msg: Pose):
        self.prey_pose_ = msg 
          
    def kill_old_prey(self):
        self.get_logger().info("Killing Old Prey")
        request = Kill.Request()
        request.name = "turtle2"
        future = self.kill_client_.call_async(request) 
        
        future.add_done_callback(self.callback_kill_response)

        
    def callback_kill_response(self,future):
        try:
            future.result()
            self.get_logger().info("Kill Successfull. Now Spawning . ..")
            self.spawn_new_prey()
            
        except Exception as e:
            self.get_logger().error(f"kill Failed:{e}")
    def spawn_new_prey(self):
        self.prey_pose_ = None
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
            
        
           
    def callback_spawn_response(self, future):
        try:
            response =  future.result()
            self.get_logger().info(f"Spawned new prey: {response.name}")
            self.goal_timer_ = self.create_timer(0.5,self.send_goal)
        except Exception as e:
            self.get_logger().error(f"Service Call Back: {e}")
            
    def send_goal(self):
        if self.prey_pose_ is None:
            self.get_logger().info("Waiting for Pose Data  . . . ")
            return
        
        self.goal_timer_.cancel()
        
        goal_msg = PredatorMovement.Goal()
        goal_msg.target_x = self.prey_pose_.x
        goal_msg.target_y = self.prey_pose_.y 
        
        
        
        self.get_logger().info(f"Sending Goal: Go to ({goal_msg.target_x},{goal_msg.target_y})")
        
        
        self._action_client.wait_for_server()
        
        future = self._action_client.send_goal_async(goal_msg)
        
        future.add_done_callback(self.goal_response_callback)
        
    def goal_response_callback(self,future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal Rejected:()')
            return
        self.get_logger().info("Goal accepted! Wating for result . . . . ")
        
        
        get_result_future = goal_handle.get_result_async()
        get_result_future.add_done_callback(self.get_result_callback)
        
    def get_result_callback(self,future):
        result = future.result().result
        
        if result.success:
            self.get_logger().info("Predator Reported Success! Killing Prey")
            self.kill_old_prey()

def main(args=None):
    rclpy.init(args=args)
    node = SpawnPreyTurtle() # MODIFY NAME
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
