#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

from example_interfaces.msg import String
class SmartphoneNode(Node): # MODIFY NAME
    def __init__(self):
        super().__init__("smartphone") # MODIFY NAME
        self.subscriber_ = self.create_subscription(
            String,
            "robot_news", self.callback_robot_news, 10)
        self.get_logger().info("Smartphone has been started.")
            
    def callback_robot_news(self, msg):
        self.get_logger().info("I heard: " + msg.data)
        # Here you can add code to process the message and send it to the smartphone
        # For example, you could use a library like requests to send an HTTP request to the smartphone app


def main(args=None):
    rclpy.init(args=args)
    node = SmartphoneNode() # MODIFY NAME
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
