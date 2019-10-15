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
#ifndef _JOYSTICKSERVICEIN_UPCALL_MANAGER_HH
#define _JOYSTICKSERVICEIN_UPCALL_MANAGER_HH

#include <list>
#include "aceSmartSoft.hh"
#include "JoystickServiceInUpcallInterface.hh"

/** JoystickServiceInUpcallManager connects input-handling with Upcall propagation
 *
 * This class implements an InputHandler for the InputPort JoystickServiceIn and propagates the handling 
 * of incoming data to all associated (i.e. attached) Upcalls.
 */
class JoystickServiceInUpcallManager
:	public Smart::IInputHandler<CommBasicObjects::CommJoystick>
{
private:
	// list of associated updalls
	std::list<JoystickServiceInUpcallInterface*> upcalls;

	// call the on_JoystickServiceIn of all the attached JoystickServiceInUpcallInterfaces
	void notify_upcalls(const CommBasicObjects::CommJoystick &input);
	
protected:
	virtual void handle_input(const CommBasicObjects::CommJoystick &input) {
		// relay input-handling to all attached JoystickServiceInUpcallInterfaces
		this->notify_upcalls(input);
	}
public:
	JoystickServiceInUpcallManager(
		Smart::InputSubject<CommBasicObjects::CommJoystick> *subject,
		const int &prescaleFactor=1
	);
	virtual ~JoystickServiceInUpcallManager();
	
	void attach(JoystickServiceInUpcallInterface *upcall);
	void detach(JoystickServiceInUpcallInterface *upcall);
};

#endif
