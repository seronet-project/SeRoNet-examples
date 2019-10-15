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
#ifndef _COMPONENTKEYBOARDJOYSTICK_HH
#define _COMPONENTKEYBOARDJOYSTICK_HH

#include <map>
#include <iostream>
#include "aceSmartSoft.hh"
#include "smartQueryServerTaskTrigger_T.h"
#include "ComponentKeyboardJoystickCore.hh"

#include "ComponentKeyboardJoystickPortFactoryInterface.hh"
#include "ComponentKeyboardJoystickExtension.hh"

// forward declarations
class ComponentKeyboardJoystickPortFactoryInterface;
class ComponentKeyboardJoystickExtension;

// includes for PlainOpcUaComponentKeyboardJoystickExtension
// include plain OPC UA device clients
// include plain OPC UA status servers

// includes for ComponentKeyboardJoystickROSExtension

// includes for OpcUaBackendComponentGeneratorExtension


// include communication objects
#include <CommBasicObjects/CommJoystick.hh>
#include <CommBasicObjects/CommJoystickACE.hh>

// include tasks
#include "KeyboardActivity.hh"
// include UpcallManagers

// include input-handler
// include input-handler

// include handler
#include "CompHandler.hh"


#include "SmartStateChangeHandler.hh"

#define COMP ComponentKeyboardJoystick::instance()

class ComponentKeyboardJoystick : public ComponentKeyboardJoystickCore {
private:
	static ComponentKeyboardJoystick *_componentKeyboardJoystick;
	
	// constructor
	ComponentKeyboardJoystick();
	
	// copy-constructor
	ComponentKeyboardJoystick(const ComponentKeyboardJoystick& cc);
	
	// destructor
	~ComponentKeyboardJoystick() { };
	
	// load parameter from ini file
	void loadParameter(int argc, char* argv[]);
	
	// instantiate comp-handler
	CompHandler compHandler;
	
	// helper method that maps a string-name to an according TaskTriggerSubject
	Smart::TaskTriggerSubject* getInputTaskTriggerFromString(const std::string &client);
	
	// internal map storing the different port-creation factories (that internally map to specific middleware implementations)
	std::map<std::string, ComponentKeyboardJoystickPortFactoryInterface*> portFactoryRegistry;
	
	// internal map storing various extensions of this component class
	std::map<std::string, ComponentKeyboardJoystickExtension*> componentExtensionRegistry;
	
public:
	
	// define tasks
	Smart::TaskTriggerSubject* keyboardActivityTrigger;
	KeyboardActivity *keyboardActivity;
	
	// define input-ports
	
	// define request-ports
	
	// define input-handler
	
	// define output-ports
	Smart::IPushServerPattern<CommBasicObjects::CommJoystick> *joystickServiceOut;
	
	// define answer-ports
	
	// define request-handlers
	
	// definitions of PlainOpcUaComponentKeyboardJoystickExtension
	
	// definitions of ComponentKeyboardJoystickROSExtension
	
	// definitions of OpcUaBackendComponentGeneratorExtension
	
	
	// define default slave ports
	SmartACE::StateSlave *stateSlave;
	SmartStateChangeHandler *stateChangeHandler;
	SmartACE::WiringSlave *wiringSlave;
	
	
	/// this method is used to register different PortFactory classes (one for each supported middleware framework)
	void addPortFactory(const std::string &name, ComponentKeyboardJoystickPortFactoryInterface *portFactory);
	
	SmartACE::SmartComponent* getComponentImpl();
	
	/// this method is used to register different component-extension classes
	void addExtension(ComponentKeyboardJoystickExtension *extension);
	
	/// this method allows to access the registered component-extensions (automatically converting to the actuall implementation type)
	template <typename T>
	T* getExtension(const std::string &name) {
		auto it = componentExtensionRegistry.find(name);
		if(it != componentExtensionRegistry.end()) {
			return dynamic_cast<T*>(it->second);
		}
		return 0;
	}
	
	/// initialize component's internal members
	void init(int argc, char *argv[]);
	
	/// execute the component's infrastructure
	void run();
	
	/// clean-up component's resources
	void fini();
	
	/// call this method to set the overall component into the Alive state (i.e. component is then ready to operate)
	void setStartupFinished();
	
	/// connect all component's client ports
	Smart::StatusCode connectAndStartAllServices();
	
	/// start all assocuated Activities
	void startAllTasks();
	
	/// start all associated timers
	void startAllTimers();
	

	// return singleton instance
	static ComponentKeyboardJoystick* instance()
	{
		if(_componentKeyboardJoystick == 0) {
			_componentKeyboardJoystick = new ComponentKeyboardJoystick();
		}
		return _componentKeyboardJoystick;
	}
	
	static void deleteInstance() {
		if(_componentKeyboardJoystick != 0) {
			delete _componentKeyboardJoystick;
		}
	}
	
	// connections parameter
	struct connections_struct
	{
		// component struct
		struct component_struct
		{
			// the name of the component
			std::string name;
			std::string initialComponentMode;
			std::string defaultScheduler;
			bool useLogger;
		} component;
		
		//--- task parameter ---
		struct KeyboardActivity_struct {
			double minActFreq;
			double maxActFreq;
			std::string trigger;
			// only one of the following two params is 
			// actually used at run-time according 
			// to the system config model
			double periodicActFreq;
			// or
			std::string inPortRef;
			int prescale;
			// scheduling parameters
			std::string scheduler;
			int priority;
			int cpuAffinity;
		} keyboardActivity;
		
		//--- upcall parameter ---
		
		//--- server port parameter ---
		struct JoystickServiceOut_struct {
				std::string serviceName;
				std::string roboticMiddleware;
		} joystickServiceOut;
	
		//--- client port parameter ---
		
		// -- parameters for PlainOpcUaComponentKeyboardJoystickExtension
		
		// -- parameters for ComponentKeyboardJoystickROSExtension
		
		// -- parameters for OpcUaBackendComponentGeneratorExtension
		
	} connections;
};
#endif
