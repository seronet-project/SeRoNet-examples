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
#ifndef ROSCOMMON_MSGS_DIAGNOSTIC_MSGS_SELFTESTRESPONSE_H_
#define ROSCOMMON_MSGS_DIAGNOSTIC_MSGS_SELFTESTRESPONSE_H_

#include "ROSCommon_msgs/Diagnostic_msgs_SelfTestResponseCore.hh"

namespace ROSCommon_msgs {
		
class Diagnostic_msgs_SelfTestResponse : public Diagnostic_msgs_SelfTestResponseCore {
	public:
		// default constructors
		Diagnostic_msgs_SelfTestResponse();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// Diagnostic_msgs_SelfTestResponse(const std::string &id, const unsigned char &passed, const std::vector<ROSCommon_msgs::Diagnostic_msgs_DiagnosticStatus> &status);
		
		Diagnostic_msgs_SelfTestResponse(const Diagnostic_msgs_SelfTestResponseCore &diagnostic_msgs_SelfTestResponse);
		Diagnostic_msgs_SelfTestResponse(const DATATYPE &diagnostic_msgs_SelfTestResponse);
		virtual ~Diagnostic_msgs_SelfTestResponse();
		
		// use framework specific getter and setter methods from core (base) class
		using Diagnostic_msgs_SelfTestResponseCore::get;
		using Diagnostic_msgs_SelfTestResponseCore::set;
		
		//
		// feel free to add customized methods here
		//
};

inline std::ostream &operator<<(std::ostream &os, const Diagnostic_msgs_SelfTestResponse &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace ROSCommon_msgs */
#endif /* ROSCOMMON_MSGS_DIAGNOSTIC_MSGS_SELFTESTRESPONSE_H_ */
