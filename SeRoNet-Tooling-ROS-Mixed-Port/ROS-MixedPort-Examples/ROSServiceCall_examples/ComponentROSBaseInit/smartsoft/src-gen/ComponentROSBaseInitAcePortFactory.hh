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

#ifndef COMPONENTROSBASEINIT_ACE_PORTFACTORY_HH_
#define COMPONENTROSBASEINIT_ACE_PORTFACTORY_HH_

// include ACE/SmartSoft component implementation
#include "ComponentROSBaseInitImpl.hh"

// include the main component-definition class
#include "ComponentROSBaseInitPortFactoryInterface.hh"

class ComponentROSBaseInitAcePortFactory: public ComponentROSBaseInitPortFactoryInterface
{
private:
	ComponentROSBaseInitImpl *componentImpl;
public:
	ComponentROSBaseInitAcePortFactory();
	virtual ~ComponentROSBaseInitAcePortFactory();

	virtual void initialize(ComponentROSBaseInit *component, int argc, char* argv[]) override;
	virtual int onStartup() override;

	
	virtual Smart::IQueryServerPattern<ROSRos_core::Std_srvs_TriggerRequest, ROSRos_core::Std_srvs_TriggerResponse> * createTriggerQueryServiceAnsw(const std::string &serviceName) override;
	
	// get a pointer to the internal component implementation
	SmartACE::SmartComponent* getComponentImpl();

	virtual int onShutdown(const std::chrono::steady_clock::duration &timeoutTime=std::chrono::seconds(2)) override;
	virtual void destroy() override;
};

#endif /* COMPONENTROSBASEINIT_ACE_PORTFACTORY_HH_ */