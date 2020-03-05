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
#include "ROSCommon_msgs/Actionlib_msgs_GoalIDACE.hh"
#include <ace/SString.h>
#include "CommBasicObjects/CommTimeStampACE.hh"

// serialization operator for element Actionlib_msgs_GoalID
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSCommon_msgsIDL::Actionlib_msgs_GoalID &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element stamp
	good_bit = good_bit && cdr << data.stamp;
	// serialize list-element id
	good_bit = good_bit && cdr << ACE_CString(data.id.c_str());
	
	return good_bit;
}

// de-serialization operator for element Actionlib_msgs_GoalID
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSCommon_msgsIDL::Actionlib_msgs_GoalID &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize type element stamp
	good_bit = good_bit && cdr >> data.stamp;
	// deserialize string-type element id
	ACE_CString data_id_str;
	good_bit = good_bit && cdr >> data_id_str;
	data.id = data_id_str.c_str();
	
	return good_bit;
}

// serialization operator for CommunicationObject Actionlib_msgs_GoalID
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSCommon_msgs::Actionlib_msgs_GoalID &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject Actionlib_msgs_GoalID
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSCommon_msgs::Actionlib_msgs_GoalID &obj)
{
	return cdr >> obj.set();
}
