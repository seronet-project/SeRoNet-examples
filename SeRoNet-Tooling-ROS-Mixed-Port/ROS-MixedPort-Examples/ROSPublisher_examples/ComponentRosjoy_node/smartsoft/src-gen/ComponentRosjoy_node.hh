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
#ifndef _COMPONENTROSJOY_NODE_HH
#define _COMPONENTROSJOY_NODE_HH

#include <map>
#include <iostream>
#include "aceSmartSoft.hh"
#include "smartQueryServerTaskTrigger_T.h"
#include "ComponentRosjoy_nodeCore.hh"

#include "ComponentRosjoy_nodePortFactoryInterface.hh"
#include "ComponentRosjoy_nodeExtension.hh"

// forward declarations
class ComponentRosjoy_nodePortFactoryInterface;
class ComponentRosjoy_nodeExtension;

// includes for ComponentRosjoy_nodeROSExtension
#include "ComponentRosjoy_nodeRosPortBaseClass.hh"

// includes for OpcUaBackendComponentGeneratorExtension

// includes for PlainOpcUaComponentRosjoy_nodeExtension
// include plain OPC UA device clients
// include plain OPC UA status servers


// include communication objects
#include <ROSCommon_msgs/Sensor_msgs_Joy.hh>
#include <ROSCommon_msgs/Sensor_msgs_JoyACE.hh>

// include tasks
#include "Joy_nodeActivity.hh"
// include UpcallManagers

// include input-handler(s)
// include request-handler(s)

// include handler
#include "CompHandler.hh"


#include "SmartStateChangeHandler.hh"

#define COMP ComponentRosjoy_node::instance()

class ComponentRosjoy_node : public ComponentRosjoy_nodeCore {
private:
	static ComponentRosjoy_node *_componentRosjoy_node;
	
	// constructor
	ComponentRosjoy_node();
	
	// copy-constructor
	ComponentRosjoy_node(const ComponentRosjoy_node& cc);
	
	// destructor
	~ComponentRosjoy_node() { };
	
	// load parameter from ini file
	void loadParameter(int argc, char* argv[]);
	
	// instantiate comp-handler
	CompHandler compHandler;
	
	// helper method that maps a string-name to an according TaskTriggerSubject
	Smart::TaskTriggerSubject* getInputTaskTriggerFromString(const std::string &client);
	
	// internal map storing the different port-creation factories (that internally map to specific middleware implementations)
	std::map<std::string, ComponentRosjoy_nodePortFactoryInterface*> portFactoryRegistry;
	
	// internal map storing various extensions of this component class
	std::map<std::string, ComponentRosjoy_nodeExtension*> componentExtensionRegistry;
	
public:
	
	// define tasks
	Smart::TaskTriggerSubject* joy_nodeActivityTrigger;
	Joy_nodeActivity *joy_nodeActivity;
	
	// define input-ports
	
	// define request-ports
	
	// define input-handler
	
	// define output-ports
	Smart::IPushServerPattern<ROSCommon_msgs::Sensor_msgs_Joy> *joyOut;
	
	// define answer-ports
	
	// define request-handlers
	
	// definitions of ComponentRosjoy_nodeROSExtension
	ComponentRosjoy_nodeRosPortBaseClass *rosPorts;
	
	// definitions of OpcUaBackendComponentGeneratorExtension
	
	// definitions of PlainOpcUaComponentRosjoy_nodeExtension
	
	
	// define default slave ports
	SmartACE::StateSlave *stateSlave;
	SmartStateChangeHandler *stateChangeHandler;
	SmartACE::WiringSlave *wiringSlave;
	
	
	/// this method is used to register different PortFactory classes (one for each supported middleware framework)
	void addPortFactory(const std::string &name, ComponentRosjoy_nodePortFactoryInterface *portFactory);
	
	SmartACE::SmartComponent* getComponentImpl();
	
	/// this method is used to register different component-extension classes
	void addExtension(ComponentRosjoy_nodeExtension *extension);
	
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
	static ComponentRosjoy_node* instance()
	{
		if(_componentRosjoy_node == 0) {
			_componentRosjoy_node = new ComponentRosjoy_node();
		}
		return _componentRosjoy_node;
	}
	
	static void deleteInstance() {
		if(_componentRosjoy_node != 0) {
			delete _componentRosjoy_node;
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
		struct Joy_nodeActivity_struct {
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
		} joy_nodeActivity;
		
		//--- upcall parameter ---
		
		//--- server port parameter ---
		struct JoyOut_struct {
				std::string serviceName;
				std::string roboticMiddleware;
		} joyOut;
	
		//--- client port parameter ---
		
		// -- parameters for ComponentRosjoy_nodeROSExtension
		
		// -- parameters for OpcUaBackendComponentGeneratorExtension
		
		// -- parameters for PlainOpcUaComponentRosjoy_nodeExtension
		
	} connections;
};
#endif
