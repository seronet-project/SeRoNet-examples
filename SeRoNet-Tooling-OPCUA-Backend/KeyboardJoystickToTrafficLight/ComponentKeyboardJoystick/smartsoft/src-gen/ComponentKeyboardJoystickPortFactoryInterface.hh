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
// Please do not modify this file. It will be re-generated
// running the code generator.
//--------------------------------------------------------------------------

#ifndef COMPONENTKEYBOARDJOYSTICK_PORTFACTORYINTERFACE_HH_
#define COMPONENTKEYBOARDJOYSTICK_PORTFACTORYINTERFACE_HH_

// include communication objects
#include <CommBasicObjects/CommJoystick.hh>
#include <CommBasicObjects/CommJoystickACE.hh>

#include <chrono>

// include component's main class
#include "ComponentKeyboardJoystick.hh"

// forward declaration
class ComponentKeyboardJoystick;

class ComponentKeyboardJoystickPortFactoryInterface {
public:
	ComponentKeyboardJoystickPortFactoryInterface() { };
	virtual ~ComponentKeyboardJoystickPortFactoryInterface() { };

	virtual void initialize(ComponentKeyboardJoystick *component, int argc, char* argv[]) = 0;
	virtual int onStartup() = 0;

	
	virtual Smart::IPushServerPattern<CommBasicObjects::CommJoystick> * createJoystickServiceOut(const std::string &serviceName) = 0;

	virtual int onShutdown(const std::chrono::steady_clock::duration &timeoutTime=std::chrono::seconds(2)) = 0;
	virtual void destroy() = 0;
};

#endif /* COMPONENTKEYBOARDJOYSTICK_PORTFACTORYINTERFACE_HH_ */
