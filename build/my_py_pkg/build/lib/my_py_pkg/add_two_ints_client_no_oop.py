#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts  # MODIFY NAME


def main(args=None):
    rclpy.init(args=args)
    node = Node("add_two_ints_client_no_oop") # MODIFY NAME
    
    client = node.create_client(AddTwoInts, "add_two_ints")  
    while not client.wait_for_service(1.0):
        node.get_logger().info("Waiting for Add two ints server")
        
    request = AddTwoInts.Request()
    request.a = 3 
    request.b = 8
    
    future = client.call_async(request)
    rclpy.spin_until_future_complete(node, future)
    
    response = future.result()
    node.get_logger().info(
        f"Result of add_two_ints: {request.a} + {request.b} = {response.sum}"
    )
    
    rclpy.shutdown()


if __name__ == "__main__":
    main()
