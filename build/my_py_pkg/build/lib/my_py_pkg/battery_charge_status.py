#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from my_robot_interfaces.msg import BatteryStatus

class BatteryStatusNode(Node): # MODIFY NAME
    def __init__(self):
        super().__init__("Battery_Status_Publisher") # MODIFY NAME
        self.bt_status_publisher_= self.create_publisher(BatteryStatus, "battery_status", 10)
        self.timer_ = self.create_timer(1.0, self.publish_bt_status)
        self.get_logger().info("Hardware Status Publisher has been started.")
        
    def publish_bt_status(self):
        msg = BatteryStatus()
        msg.batterylevel = 55.5
        msg.status_message= "All systems operational."
        self.bt_status_publisher_.publish(msg)


def main(args=None):
    rclpy.init(args=args)
    node = BatteryStatusNode() # MODIFY NAME
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()