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

#include "Cob4BaseInitAcePortFactory.hh"

// create a static instance of the default AcePortFactory
static Cob4BaseInitAcePortFactory acePortFactory;

Cob4BaseInitAcePortFactory::Cob4BaseInitAcePortFactory()
{  
	componentImpl = 0;
	Cob4BaseInit::instance()->addPortFactory("ACE_SmartSoft", this);
}

Cob4BaseInitAcePortFactory::~Cob4BaseInitAcePortFactory()
{  }

void Cob4BaseInitAcePortFactory::initialize(Cob4BaseInit *component, int argc, char* argv[])
{
	if(component->connections.component.defaultScheduler != "DEFAULT") {
		ACE_Sched_Params sched_params(ACE_SCHED_OTHER, ACE_THR_PRI_OTHER_DEF);
		if(component->connections.component.defaultScheduler == "FIFO") {
			sched_params.policy(ACE_SCHED_FIFO);
			sched_params.priority(ACE_THR_PRI_FIFO_MIN);
		} else if(component->connections.component.defaultScheduler == "RR") {
			sched_params.policy(ACE_SCHED_RR);
			sched_params.priority(ACE_THR_PRI_RR_MIN);
		}
		// create new instance of the SmartSoft component with customized scheuling parameters 
		componentImpl = new Cob4BaseInitImpl(component->connections.component.name, argc, argv, sched_params);
	} else {
		// create new instance of the SmartSoft component
		componentImpl = new Cob4BaseInitImpl(component->connections.component.name, argc, argv);
	}
}

int Cob4BaseInitAcePortFactory::onStartup()
{
	return componentImpl->startComponentInfrastructure();
}

Smart::IQueryClientPattern<ROSRos_core::Std_srvs_TriggerRequest, ROSRos_core::Std_srvs_TriggerResponse> * Cob4BaseInitAcePortFactory::createTriggerQueryServiceReq()
{
	return new SmartACE::QueryClient<ROSRos_core::Std_srvs_TriggerRequest, ROSRos_core::Std_srvs_TriggerResponse>(componentImpl);
}



SmartACE::SmartComponent* Cob4BaseInitAcePortFactory::getComponentImpl()
{
	return componentImpl;
}

int Cob4BaseInitAcePortFactory::onShutdown(const std::chrono::steady_clock::duration &timeoutTime)
{
	componentImpl->stopComponentInfrastructure(timeoutTime);
	return 0;
}

void Cob4BaseInitAcePortFactory::destroy()
{
	// clean-up component's internally used resources (internally used communication middleware) 
	componentImpl->cleanUpComponentResources();
	delete componentImpl;
}