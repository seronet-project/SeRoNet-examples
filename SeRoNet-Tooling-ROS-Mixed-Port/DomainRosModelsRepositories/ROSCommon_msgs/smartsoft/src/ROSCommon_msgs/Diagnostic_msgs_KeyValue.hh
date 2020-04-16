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
#ifndef ROSCOMMON_MSGS_DIAGNOSTIC_MSGS_KEYVALUE_H_
#define ROSCOMMON_MSGS_DIAGNOSTIC_MSGS_KEYVALUE_H_

#include "ROSCommon_msgs/Diagnostic_msgs_KeyValueCore.hh"

namespace ROSCommon_msgs {
		
class Diagnostic_msgs_KeyValue : public Diagnostic_msgs_KeyValueCore {
	public:
		// default constructors
		Diagnostic_msgs_KeyValue();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// Diagnostic_msgs_KeyValue(const std::string &key, const std::string &value);
		
		Diagnostic_msgs_KeyValue(const Diagnostic_msgs_KeyValueCore &diagnostic_msgs_KeyValue);
		Diagnostic_msgs_KeyValue(const DATATYPE &diagnostic_msgs_KeyValue);
		virtual ~Diagnostic_msgs_KeyValue();
		
		// use framework specific getter and setter methods from core (base) class
		using Diagnostic_msgs_KeyValueCore::get;
		using Diagnostic_msgs_KeyValueCore::set;
		
		//
		// feel free to add customized methods here
		//
};

inline std::ostream &operator<<(std::ostream &os, const Diagnostic_msgs_KeyValue &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace ROSCommon_msgs */
#endif /* ROSCOMMON_MSGS_DIAGNOSTIC_MSGS_KEYVALUE_H_ */
