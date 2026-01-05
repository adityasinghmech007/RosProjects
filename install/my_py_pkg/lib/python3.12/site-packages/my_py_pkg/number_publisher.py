#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from rclpy.parameter import Parameter
from std_msgs.msg import Int32  # Ensure correct message import

class NumberPublisherNode(Node): # MODIFY NAME
    def __init__(self):
        super().__init__("number_publisher") # MODIFY NAME
        self.declare_parameter("number", 2)
        self.declare_parameter("timer_period", 1.0)
        self.number_ = self.get_parameter("number").value
        self.timer_period_ = self.get_parameter("timer_period").value
        self.add_on_set_parameters_callback(self.parameter_callback)
        
        self.publisher_ = self.create_publisher(Int32, "number", 10) #Leading Slash Makes the Code Unchangeable "/number"
        self.timer_ = self.create_timer(self.timer_period_, self.publish_number)
        self.get_logger().info("Number Publisher has been started.")
    def publish_number(self):
        msg = Int32()
        msg.data = self.number_
        self.publisher_.publish(msg)
        
    def parameter_callback(self, params: list[Parameter]):
        for param in params:
            if param.name == "number" and param.type_ == Parameter.Type.INTEGER:
                self.number_ = param.value
                self.get_logger().info(f"Parameter 'number' changed to: {self.number_}")
            elif param.name == "timer_period" and param.type_ == Parameter.Type.DOUBLE:
                self.timer_period_ = param.value
                self.timer_.cancel()
                self.timer_ = self.create_timer(self.timer_period_, self.publish_number)
                self.get_logger().info(f"Parameter 'timer_period' changed to: {self.timer_period_}")


def main(args=None):
    rclpy.init(args=args)
    node = NumberPublisherNode() # MODIFY NAME
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
