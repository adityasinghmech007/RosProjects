#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32  # Ensure correct message import

class number_publisher(Node): # MODIFY NAME
    def __init__(self):
        super().__init__("node_name") # MODIFY NAME
        self.publisher_ = self.create_publisher(Int32, "number", 10)
        self.timer_ = self.create_timer(1.0, self.publish_number)
        self.get_logger().info("Number Publisher has been started.")
    def publish_number(self):
        msg = Int32()
        msg.data = 42
        self.publisher_.publish(msg)


def main(args=None):
    rclpy.init(args=args)
    node = number_publisher() # MODIFY NAME
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
