<!--- This file is generated from the ComponentRosJoystick.componentDocumentation model --->
<!--- do not modify this file manually as it will by automatically overwritten by the code generator, modify the model instead and re-generate this file --->

# ComponentRosJoystick Component

![ComponentRosJoystick-ComponentImage](model/ComponentRosJoystickComponentDefinition.jpg)

This component is a so called Mixed-Port component that interacts with two different frameworks. 
On the one side, this component provides a JoystickServiceOut service that pushes Joystick messages to other components.
On the other side, this component interacts with a ROS system to access the Joystick driver implement as a ROS node.



For using the component, the ROS Joystick node needs to be started as follows:

> rosrun joy joy_node

for further details o how to operate the ROS Joystick, see: http://wiki.ros.org/joy/Tutorials/ConfiguringALinuxJoystick

| Metaelement | Documentation |
|-------------|---------------|
| License | BSD-3 License |
| Hardware Requirements |  |
| Purpose | Bridges between ROS and SeRoNet by proving a Joystick driver implement in ROS as a SeRoNet component |



## Service Ports

### JoystickServiceOut

Service regularly providing Joystick values


