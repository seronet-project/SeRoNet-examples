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
#ifndef _TRIGGERQUERYSERVICEANSWHANDLER_CORE_HH
#define _TRIGGERQUERYSERVICEANSWHANDLER_CORE_HH
		
#include "aceSmartSoft.hh"

#include <ROSRos_core/Std_srvs_TriggerRequest.hh>
#include <ROSRos_core/Std_srvs_TriggerResponse.hh>

// include the input interfaces (if any)

// include all interaction-observer interfaces
#include <TriggerQueryServiceAnswHandlerObserverInterface.hh>

class TriggerQueryServiceAnswHandlerCore 
:	public Smart::IInputHandler<std::pair<Smart::QueryIdPtr,ROSRos_core::Std_srvs_TriggerRequest>>
,	public Smart::TaskTriggerSubject
{
private:
virtual void handle_input(const std::pair<Smart::QueryIdPtr,ROSRos_core::Std_srvs_TriggerRequest> &input) override {
	this->handleQuery(input.first, input.second);
}


	virtual void updateAllCommObjects();

/**
 * Implementation of the Subject part of an InteractionObserver
 */
private:
	std::mutex interaction_observers_mutex;
	std::list<TriggerQueryServiceAnswHandlerObserverInterface*> interaction_observers;
protected:
	void notify_all_interaction_observers();
public:
	void attach_interaction_observer(TriggerQueryServiceAnswHandlerObserverInterface *observer);
	void detach_interaction_observer(TriggerQueryServiceAnswHandlerObserverInterface *observer);

protected:
	
public:
	using IQueryServer = Smart::IQueryServerPattern<ROSRos_core::Std_srvs_TriggerRequest, ROSRos_core::Std_srvs_TriggerResponse>;
	using QueryId = Smart::QueryIdPtr;
	TriggerQueryServiceAnswHandlerCore(IQueryServer *server);
	virtual ~TriggerQueryServiceAnswHandlerCore() = default;
	
protected:
	IQueryServer *server;
	//this user-method has to be implemented in derived classes
	virtual void handleQuery(const QueryId &id, const ROSRos_core::Std_srvs_TriggerRequest& request) = 0;
};
#endif
