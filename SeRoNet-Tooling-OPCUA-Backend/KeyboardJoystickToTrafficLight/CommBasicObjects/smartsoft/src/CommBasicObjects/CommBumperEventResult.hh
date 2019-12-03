//--------------------------------------------------------------------------
// Code generated by the SmartSoft MDSD Toolchain
// The SmartSoft Toolchain has been developed by:
//  
// Christian Schlegel (schlegel@hs-ulm.de)
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
#ifndef COMMBASICOBJECTS_COMMBUMPEREVENTRESULT_H_
#define COMMBASICOBJECTS_COMMBUMPEREVENTRESULT_H_

#include "CommBasicObjects/CommBumperEventResultCore.hh"

namespace CommBasicObjects {
		
class CommBumperEventResult : public CommBumperEventResultCore {
	public:
		// default constructors
		CommBumperEventResult();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// CommBumperEventResult(const CommBasicObjects::BumperEventType &state);
		
		CommBumperEventResult(const CommBumperEventResultCore &commBumperEventResult);
		CommBumperEventResult(const DATATYPE &commBumperEventResult);
		virtual ~CommBumperEventResult();
		
		// use framework specific getter and setter methods from core (base) class
		using CommBumperEventResultCore::get;
		using CommBumperEventResultCore::set;
		
		//
		// feel free to add customized methods here
		//
		void get(char* state) const;
};

inline std::ostream &operator<<(std::ostream &os, const CommBumperEventResult &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace CommBasicObjects */
#endif /* COMMBASICOBJECTS_COMMBUMPEREVENTRESULT_H_ */