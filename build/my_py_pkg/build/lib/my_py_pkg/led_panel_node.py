#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from my_robot_interfaces.srv import SetLedStatus


class LedPanelNode(Node): # MODIFY NAME
    def __init__(self):
        super().__init__("led_panel_node") # MODIFY NAME
        self.server  = self.create_service(SetLedStatus, "set_led_state", self.handle_set_led_status)
        self.get_logger().info("LED Panel Node has been started.")
        
    def handle_set_led_status(self, request, response):
        led_state = request.number_to_blink
        self.get_logger().info(f"Received request to set {led_state} LEDs to blink.")
        # Here you would add the actual logic to control the LED hardware
        if led_state == 1:
            self.get_logger().info("Setting LED 1 to blink.")
            response.success = True
            response.message = "LED 1 set to blink."
        elif led_state == 2:
            self.get_logger().info("Setting LED 1 and 2 to blink.")
            response.success = True
            response.message = "LED 1 and 2 set to blink."
        elif led_state == 3:
            self.get_logger().info("Setting LED 1, 2, and 3 to blink.")
            response.success = True
            response.message = "LED 1, 2, and 3 set to blink."
        else:
            self.get_logger().info("Turning off all LEDs.") 
            response.success = True
            response.message = "All LEDs turned off."    
        return response

def main(args=None):
    rclpy.init(args=args)
    node = LedPanelNode() # MODIFY NAME
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
