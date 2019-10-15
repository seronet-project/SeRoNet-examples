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
// This file is generated once. Modify this file to your needs. 
// If you want the toolchain to re-generate this file, please 
// delete it before running the code generator.
//--------------------------------------------------------------------------
#ifndef COMMBASICOBJECTS_COMMKBEVENTRESULT_H_
#define COMMBASICOBJECTS_COMMKBEVENTRESULT_H_

#include "CommBasicObjects/CommKBEventResultCore.hh"

namespace CommBasicObjects {
		
class CommKBEventResult : public CommKBEventResultCore {
	public:
		// default constructors
		CommKBEventResult();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// CommKBEventResult(const std::string &result, const std::string &formatedResult);
		
		CommKBEventResult(const CommKBEventResultCore &commKBEventResult);
		CommKBEventResult(const DATATYPE &commKBEventResult);
		virtual ~CommKBEventResult();
		
		// use framework specific getter and setter methods from core (base) class
		using CommKBEventResultCore::get;
		using CommKBEventResultCore::set;
		
		//
		// feel free to add customized methods here
		//
};

inline std::ostream &operator<<(std::ostream &os, const CommKBEventResult &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace CommBasicObjects */
#endif /* COMMBASICOBJECTS_COMMKBEVENTRESULT_H_ */
