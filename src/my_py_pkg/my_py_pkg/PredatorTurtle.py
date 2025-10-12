#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose
from my_robot_interfaces.msg import PredTurtleLocation
from my_robot_interfaces.srv import PreyTurtleLocation
from my_robot_interfaces.action import PredatorMovement


class MovePredatorTurtle(Node): # MODIFY NAME
    def __init__(self):
        super().__init__("move_predator_turtle") # MODIFY NAME
        self.location_publisher_ = self.create_publisher(PredTurtleLocation, "pred_turtle_location", 10)
        self.location_subscriber_ = self.create_service(PreyTurtleLocation, "prey_turtle_location", self.move_to_prey)
        self.timer_ = self.create_timer(1.0 , self.location_publisher)
        self.get_logger().info("Predator Location Publisher Started")
        
         
        
    def location_publisher():
        msg=PredTurtleLocation
        msg.x_coordinate = 
        msg.y_coordinate = 
        msg.status_message = 
        self.location_publisher_.publish(msg)
        
    def move_to_prey():
        
        


def main(args=None):
    rclpy.init(args=args)
    node = MovePredatorTurtle() # MODIFY NAME
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
