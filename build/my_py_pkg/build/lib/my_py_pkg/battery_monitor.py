#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from my_robot_interfaces.msg import BatteryStatus
from my_robot_interfaces.srv import SetLedStatus


class BatteryMonitor(Node): # MODIFY NAME
    def __init__(self):
        super().__init__("battery_monitor") # MODIFY NAME
        self.last_commanded_state_ = -1
        self.set_led_client_ = self.create_client(SetLedStatus, "set_led_state")
        while not self.set_led_client_.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("Waiting for LED service to be available...")
        self.bt_status_suscriber_ = self.create_subscription(BatteryStatus, "battery_status", self.bt_status_callback, 10)
        self.get_logger().info("Battery Monitoring has been started.")
    
    
    def bt_status_callback(self, msg):
        batterylevel = msg.batterylevel
        self.get_logger().info(f"Battery Level: {batterylevel}%")
        desired_state = 0
        if batterylevel < 33.0 :
            desired_state = 1
        elif batterylevel >= 33.0 and batterylevel < 66.0 :
            
            desired_state = 2
        elif batterylevel >= 66.0 :
            
            desired_state = 3
        else:
            self.get_logger().info("Battery level is sufficient. No action needed.")
            
        if desired_state != self.last_commanded_state_:
            self.get_logger().info(f"Changing LED state to {desired_state}")
            self.last_commanded_state_ = desired_state
            request = SetLedStatus.Request()
            request.number_to_blink = desired_state
            future = self.set_led_client_.call_async(request)
            future.add_done_callback(self.led_response_callback)
            
    def led_response_callback(self, future):
        try:
            response = future.result()
        except Exception as e:
            self.get_logger().info(f"Service call failed {e}")
        else:
            if response.success:
                self.get_logger().info(f"LED Service Response: {response.message}")
            else:
                self.get_logger().info("LED Service reported failure")

def main(args=None):
    rclpy.init(args=args)
    node = BatteryMonitor() # MODIFY NAME
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()