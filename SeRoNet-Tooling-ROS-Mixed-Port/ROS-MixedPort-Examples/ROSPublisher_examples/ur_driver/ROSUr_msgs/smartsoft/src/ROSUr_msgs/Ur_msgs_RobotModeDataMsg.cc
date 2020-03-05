//--------------------------------------------------------------------------
// Code generated by the SmartSoft MDSD Toolchain
// The SmartSoft Toolchain has been developed by:
//  
// Service Robotics Research Center
// University of Applied Sciences Ulm
// Prittwitzstr. 10
// 89075 Ulm (Germany)
//
// Information about the SmartSoft MDSD Toolchain is available at:
// www.servicerobotik-ulm.de
//
// This file is generated once. Modify this file to your needs. 
// If you want the toolchain to re-generate this file, please 
// delete it before running the code generator.
//--------------------------------------------------------------------------

#include "ROSUr_msgs/Ur_msgs_RobotModeDataMsg.hh"

using namespace ROSUr_msgs;

Ur_msgs_RobotModeDataMsg::Ur_msgs_RobotModeDataMsg()
:	Ur_msgs_RobotModeDataMsgCore()
{  }


/**
 * Constructor to set all values.
 * NOTE that you have to keep this constructor consistent with the model!
 * Use  at your own choice.
 *
 * The preferred way to set values for initialization is:
 *      CommRepository::MyCommObject obj;
 *      obj.setX(1).setY(2).setZ(3)...;
Ur_msgs_RobotModeDataMsg::Ur_msgs_RobotModeDataMsg(const unsigned long int &timestamp, const bool &is_robot_connected, const bool &is_real_robot_enabled, const bool &is_power_on_robot, const bool &is_emergency_stopped, const bool &is_protective_stopped, const bool &is_program_running, const bool &is_program_paused)
:	Ur_msgs_RobotModeDataMsgCore() // base constructor sets default values as defined in the model
{
	setTimestamp(timestamp);
	setIs_robot_connected(is_robot_connected);
	setIs_real_robot_enabled(is_real_robot_enabled);
	setIs_power_on_robot(is_power_on_robot);
	setIs_emergency_stopped(is_emergency_stopped);
	setIs_protective_stopped(is_protective_stopped);
	setIs_program_running(is_program_running);
	setIs_program_paused(is_program_paused);
}
 */

Ur_msgs_RobotModeDataMsg::Ur_msgs_RobotModeDataMsg(const Ur_msgs_RobotModeDataMsgCore &ur_msgs_RobotModeDataMsg)
:	Ur_msgs_RobotModeDataMsgCore(ur_msgs_RobotModeDataMsg)
{  }

Ur_msgs_RobotModeDataMsg::Ur_msgs_RobotModeDataMsg(const DATATYPE &ur_msgs_RobotModeDataMsg)
:	Ur_msgs_RobotModeDataMsgCore(ur_msgs_RobotModeDataMsg)
{  }

Ur_msgs_RobotModeDataMsg::~Ur_msgs_RobotModeDataMsg()
{  }