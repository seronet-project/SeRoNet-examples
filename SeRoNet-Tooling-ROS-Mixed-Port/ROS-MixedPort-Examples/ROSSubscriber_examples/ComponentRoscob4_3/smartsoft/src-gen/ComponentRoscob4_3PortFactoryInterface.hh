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

#ifndef COMPONENTROSCOB4_3_PORTFACTORYINTERFACE_HH_
#define COMPONENTROSCOB4_3_PORTFACTORYINTERFACE_HH_

// include communication objects
#include <CommBasicObjects/CommJoystick.hh>
#include <CommBasicObjects/CommJoystickACE.hh>

#include <chrono>

// include component's main class
#include "ComponentRoscob4_3.hh"

// forward declaration
class ComponentRoscob4_3;

class ComponentRoscob4_3PortFactoryInterface {
public:
	ComponentRoscob4_3PortFactoryInterface() { };
	virtual ~ComponentRoscob4_3PortFactoryInterface() { };

	virtual void initialize(ComponentRoscob4_3 *component, int argc, char* argv[]) = 0;
	virtual int onStartup() = 0;

	virtual Smart::IPushClientPattern<CommBasicObjects::CommJoystick> * createJoyIn() = 0;
	

	virtual int onShutdown(const std::chrono::steady_clock::duration &timeoutTime=std::chrono::seconds(2)) = 0;
	virtual void destroy() = 0;
};

#endif /* COMPONENTROSCOB4_3_PORTFACTORYINTERFACE_HH_ */
