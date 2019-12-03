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
#include "JoystickActivity.hh"
#include "ComponentRosJoystick.hh"

#include <iostream>

JoystickActivity::JoystickActivity(SmartACE::SmartComponent *comp) 
:	JoystickActivityCore(comp)
{
	std::cout << "constructor JoystickActivity\n";
}
JoystickActivity::~JoystickActivity() 
{
	std::cout << "destructor JoystickActivity\n";
}

void JoystickActivity::update_joystrick_msg(const sensor_msgs::Joy::ConstPtr &msg)
{
	std::unique_lock<std::mutex> lck (mtx);
	for(size_t ax=0; ax < msg->axes.size(); ++ax) {
		if(ax == 0) {
			comm_joy.set_x(msg->axes[ax]);
		} else if(ax == 1) {
			comm_joy.set_y(msg->axes[ax]);
		} else if(ax == 2) {
			comm_joy.set_x2(msg->axes[ax]);
		} else if(ax == 3) {
			comm_joy.set_y2(msg->axes[ax]);
		}
	}
	for(size_t btn=0; btn < msg->buttons.size(); ++btn) {
		// TODO: check if this conversion is correct
		comm_joy.set_button(btn, msg->buttons[btn]);
	}
}

int JoystickActivity::on_entry()
{
	// do initialization procedures here, which are called once, each time the task is started
	// it is possible to return != 0 (e.g. when initialization fails) then the task is not executed further
	return 0;
}
int JoystickActivity::on_execute()
{
	// this method is called from an outside loop,
	// hence, NEVER use an infinite loop (like "while(1)") here inside!!!
	// also do not use blocking calls which do not result from smartsoft kernel
	
	// to get the incoming data, use this methods:
	std::unique_lock<std::mutex> lck (mtx);
	Smart::StatusCode status = this->joystickServiceOutPut(comm_joy);

	std::cout << "push joystick update: " << comm_joy << std::endl;

	// it is possible to return != 0 (e.g. when the task detects errors), then the outer loop breaks and the task stops
	return 0;
}
int JoystickActivity::on_exit()
{
	// use this method to clean-up resources which are initialized in on_entry() and needs to be freed before the on_execute() can be called again
	return 0;
}