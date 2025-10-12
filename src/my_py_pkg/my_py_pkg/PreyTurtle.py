#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose
from my_robot_interfaces.msg import PredTurtleLocation
from my_robot_interfaces.srv import PreyTurtleLocation
from my_robot_interfaces.action import PredatorMovement


class SpawnPreyTurtle(Node): # MODIFY NAME
    def __init__(self):
        super().__init__("spawn_prey_turtle") # MODIFY NAME
        self.eat_turtle_client_ = self.create_client(PreyTurtleLocation , "prey_turtle_location")
        self.timer_ = self.create_timer(1.0 , self.location_publisher)
        self.get_logger().info("Prey Location Publisher Started")
        self.pred_status_suscriber_ = self.create_subscription(PredatorMovement, "predator_movement", self.pred_status_suscriber, 10)
        
    def pred_status_suscriber(self, msg):

        pred_location_x = msg.current_x_position
        pred_location_y = msg.current_y_position
        self.get_logger().info(f"Predator at X Coordinate of {pred_location_x} ")
        self.get_logger().info(f"Predator at X Coordinate of {pred_location_y} ")
        if (pred_location_x == prey_location_x   & pred_location_y == prey_location_y ):
            self.get_logger.info("Predator has eaten Prey spawn another one")
            msg.success = True 
            #logic for spawning another prey turtle and to continue the Process again
            
    
        else :
            self.get_logger.info("Predator is approaching the Prey")
            request = PreyTurtleLocation.Request()
            
            
            
            
        
        
                
         
        

def main(args=None):
    rclpy.init(args=args)
    node = MovePredatorTurtle() # MODIFY NAME
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
