#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32  # Ensure correct message import
from example_interfaces.srv import SetBool



class number_counter(Node):
    
    def __init__(self):
        super().__init__("number_counter") # MODIFY NAME
        self.i=0
        self.subscriber_ = self.create_subscription(
            Int32,
            "number", self.number_callback, 10)
        self.publisher_ = self.create_publisher(Int32, 
                                                "number_counter",
                                                10)
        self.server_ = self.create_service(SetBool, "reset_counter", self.callback_reset_counter)
        


    def number_callback(self, msg):
        # Handle the received message here
        self.i += 1
        self.get_logger().info(f"Received on 'number': {msg.data}")
        msg= Int32()
        msg.data = self.i
        self.publisher_.publish(msg)
        
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
    node = number_counter() # MODIFY NAME
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
