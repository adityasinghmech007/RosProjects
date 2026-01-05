from launch import LaunchDescription
import os
from launch_ros.parameter_descriptions import ParameterValue
from launch_ros.actions import Node
from launch.substitutions import Command
from ament_index_python.packages import get_package_share_path
from launch.actions import TimerAction



def generate_launch_description():
    urdf_path = os.path.join(get_package_share_path('my_robot_description'),
                             'urdf', 'my_robot.urdf.xacro')
    
    rviz_config_path = os.path.join(get_package_share_path('my_robot_description'), 'rviz','urdf_config.rviz')
    print("RVIZ CONFIG PATH =", rviz_config_path)

    robot_description = ParameterValue(Command(['xacro ', urdf_path]),value_type=str) #xacro Spacing is very Important took almost 2 hrs t spot this one

    robot_state_publisher_node = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        parameters=[{'robot_description': robot_description}]
    )

    joint_state_publisher_gui_node = Node(
        package="joint_state_publisher_gui",
        executable="joint_state_publisher_gui"
    )

    rviz2_node = Node(
        package="rviz2",
        executable="rviz2",
        arguments=['-d', rviz_config_path],
        output='screen'
    )
    print("RVIZ CONFIG PATH =", rviz_config_path)

    delayed_rviz = TimerAction(
    period=2.0,
    actions=[rviz2_node]
)

    return LaunchDescription([
        robot_state_publisher_node,
        joint_state_publisher_gui_node,
        delayed_rviz

    ])



                                                