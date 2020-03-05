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
#ifndef _COMPONENTJOYCOB4_3_HH
#define _COMPONENTJOYCOB4_3_HH

#include <map>
#include <iostream>
#include "aceSmartSoft.hh"
#include "smartQueryServerTaskTrigger_T.h"
#include "ComponentJoyCob4_3Core.hh"

#include "ComponentJoyCob4_3PortFactoryInterface.hh"
#include "ComponentJoyCob4_3Extension.hh"

// forward declarations
class ComponentJoyCob4_3PortFactoryInterface;
class ComponentJoyCob4_3Extension;

// includes for ComponentJoyCob4_3ROSExtension
#include "ComponentJoyCob4_3RosPortBaseClass.hh"

// includes for OpcUaBackendComponentGeneratorExtension

// includes for PlainOpcUaComponentJoyCob4_3Extension
// include plain OPC UA device clients
// include plain OPC UA status servers


// include communication objects
#include <CommBasicObjects/CommJoystick.hh>
#include <CommBasicObjects/CommJoystickACE.hh>

// include tasks
#include "Cob4_3Activity.hh"
// include UpcallManagers
#include "JoyInUpcallManager.hh"

// include input-handler(s)
// include request-handler(s)

// include handler
#include "CompHandler.hh"


#include "SmartStateChangeHandler.hh"

#define COMP ComponentJoyCob4_3::instance()

class ComponentJoyCob4_3 : public ComponentJoyCob4_3Core {
private:
	static ComponentJoyCob4_3 *_componentJoyCob4_3;
	
	// constructor
	ComponentJoyCob4_3();
	
	// copy-constructor
	ComponentJoyCob4_3(const ComponentJoyCob4_3& cc);
	
	// destructor
	~ComponentJoyCob4_3() { };
	
	// load parameter from ini file
	void loadParameter(int argc, char* argv[]);
	
	// instantiate comp-handler
	CompHandler compHandler;
	
	// helper method that maps a string-name to an according TaskTriggerSubject
	Smart::TaskTriggerSubject* getInputTaskTriggerFromString(const std::string &client);
	
	// internal map storing the different port-creation factories (that internally map to specific middleware implementations)
	std::map<std::string, ComponentJoyCob4_3PortFactoryInterface*> portFactoryRegistry;
	
	// internal map storing various extensions of this component class
	std::map<std::string, ComponentJoyCob4_3Extension*> componentExtensionRegistry;
	
public:
	
	// define tasks
	Smart::TaskTriggerSubject* cob4_3ActivityTrigger;
	Cob4_3Activity *cob4_3Activity;
	
	// define input-ports
	// InputPort joyIn
	Smart::IPushClientPattern<CommBasicObjects::CommJoystick> *joyIn;
	Smart::InputTaskTrigger<CommBasicObjects::CommJoystick> *joyInInputTaskTrigger;
	JoyInUpcallManager *joyInUpcallManager;
	
	// define request-ports
	
	// define input-handler
	
	// define output-ports
	
	// define answer-ports
	
	// define request-handlers
	
	// definitions of ComponentJoyCob4_3ROSExtension
	ComponentJoyCob4_3RosPortBaseClass *rosPorts;
	
	// definitions of OpcUaBackendComponentGeneratorExtension
	
	// definitions of PlainOpcUaComponentJoyCob4_3Extension
	
	
	// define default slave ports
	SmartACE::StateSlave *stateSlave;
	SmartStateChangeHandler *stateChangeHandler;
	SmartACE::WiringSlave *wiringSlave;
	
	
	/// this method is used to register different PortFactory classes (one for each supported middleware framework)
	void addPortFactory(const std::string &name, ComponentJoyCob4_3PortFactoryInterface *portFactory);
	
	SmartACE::SmartComponent* getComponentImpl();
	
	/// this method is used to register different component-extension classes
	void addExtension(ComponentJoyCob4_3Extension *extension);
	
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
	
	Smart::StatusCode connectJoyIn(const std::string &serverName, const std::string &serviceName);

	// return singleton instance
	static ComponentJoyCob4_3* instance()
	{
		if(_componentJoyCob4_3 == 0) {
			_componentJoyCob4_3 = new ComponentJoyCob4_3();
		}
		return _componentJoyCob4_3;
	}
	
	static void deleteInstance() {
		if(_componentJoyCob4_3 != 0) {
			delete _componentJoyCob4_3;
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
		struct Cob4_3Activity_struct {
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
		} cob4_3Activity;
		
		//--- upcall parameter ---
		
		//--- server port parameter ---
	
		//--- client port parameter ---
		struct JoyIn_struct {
			std::string serverName;
			std::string serviceName;
			std::string wiringName;
			long interval;
			std::string roboticMiddleware;
		} joyIn;
		
		// -- parameters for ComponentJoyCob4_3ROSExtension
		
		// -- parameters for OpcUaBackendComponentGeneratorExtension
		
		// -- parameters for PlainOpcUaComponentJoyCob4_3Extension
		
	} connections;
};
#endif
