#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32  # Ensure correct message import


class number_counter(Node):
    
    def __init__(self):
        super().__init__("node_name") # MODIFY NAME
        self.i=0
        self.subscriber_ = self.create_subscription(
            Int32,
            "number", self.number_callback, 10)
        self.publisher_ = self.create_publisher(Int32, "number_counter", 10)
    
    def publish_number(self):
        self.i += 1
        msg= Int32()
        msg.data = self.i
        self.publisher_.publish(msg)

    def number_callback(self, msg):
        # Handle the received message here
        self.get_logger().info(f"Received on 'number': {msg.data}")
        self.publish_number()

def main(args=None):
    rclpy.init(args=args)
    node = number_counter() # MODIFY NAME
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
