from ament_index_python import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node
import os




def generate_launch_description():
    ld = LaunchDescription()
    
    param_config = os.path.join(get_package_share_directory("my_robot_bringup"),
                                "config", "number_app.yaml")
    
    number_publisher = Node(
        package="my_py_pkg", 
        executable= "number_publisher"
        ,name = "my_number_publisher",
        remappings=[("/number","/my_number")],
        # parameters=[
        #     {"number": 12}
        #     {"timer_period": 1.3}       
        # ]
    )
    
    number_counter = Node(
        package="my_py_pkg",
        executable="number_counter"
    )
    
    ld.add_action(number_publisher)
    ld.add_action(number_counter)
    return ld
    