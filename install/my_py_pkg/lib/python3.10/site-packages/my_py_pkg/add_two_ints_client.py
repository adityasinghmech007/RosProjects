#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts  # MODIFY NAME
from functools import partial  # Optional, for cleaner callback handling


class AddTwoIntsClient(Node): # MODIFY NAME
    def __init__(self):
        super().__init__("add_two_ints_client") # MODIFY NAME
        self.client_ = self.create_client(AddTwoInts, "add_two_ints")
        
    def call_add_two_ints(self, a, b):
        while not self.client_.wait_for_service(1.0):
            self.get_logger().info("Waiting for Add two ints server")
            
        request = AddTwoInts.Request()
        request.a = a
        request.b = b

        # Store the values for use in the callback
        self._last_a = a
        self._last_b = b
        
        future = self.client_.call_async(request)
        future.add_done_callback(partial(self.callback_add_two_ints))
        
    def callback_add_two_ints(self, future):
        try:
            response = future.result()
            self.get_logger().info(
        f"Result of add_two_ints: {self._last_a} + {self._last_b} = {response.sum}")
        except Exception as e:
            self.get_logger().error(f"Service call failed: {e}")
            
def main(args=None):
    rclpy.init(args=args)
    node = AddTwoIntsClient()
    node.call_add_two_ints(2,7)# MODIFY NAME
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
