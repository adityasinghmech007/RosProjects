#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.srv import SetBool
from example_interfaces.srv import AddTwoInts # MODIFY NAME


class ResetCounter(Node): # MODIFY NAME
    def __init__(self):
        super().__init__("reset_counter") # MODIFY NAME
        self.server_ = self.create_service(SetBool, "reset_counter", self.callback_reset_counter)
        self.get_logger().info("Reset Counter Service has been started.")
        
        
    def callback_reset_counter(self, request:SetBool.Request, response:SetBool.Response):
        if request.data:
            self.i = 0
            response.success = True
            response.message = "Counter reset to Zero successfully."
            self.get_logger().info("Counter reset to Zero successfully.")
            
        else:
            response.success = False
            response.message = "Counter reset failed."
            self.get_logger().info("Counter reset failed.")
        
        return response

def main(args=None):
    rclpy.init(args=args)
    node = ResetCounter() # MODIFY NAME
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()