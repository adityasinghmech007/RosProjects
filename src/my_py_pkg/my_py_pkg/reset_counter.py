#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts # MODIFY NAME

class ResetCounter(Node): # MODIFY NAME
    def __init__(self):
        super().__init__("reset_c") # MODIFY NAME
        self.server_ = self.create_service(AddTwoInts, "add_two_ints", self.callback_reset_counter ) # MODIFY NAME
        self.get_logger().info("Ready to add two ints.")
        
    def callback_reset_counter(self, request: AddTwoInts.Request, response: AddTwoInts. Response):
        response.counter = 0
        self.get_logger().info(f"Set the Counter to Zero: {response.counter}")
        return response

def main(args=None):
    rclpy.init(args=args)
    node = ResetCounter() # MODIFY NAME
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()