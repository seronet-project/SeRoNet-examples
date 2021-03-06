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
#include "ROSCommon_msgs/Nav_msgs_GetMapActionResultACE.hh"
#include <ace/SString.h>
#include "ROSCommon_msgs/Nav_msgs_GetMapResultACE.hh"
#include "ROSCommon_msgs/Actionlib_msgs_GoalStatusACE.hh"
#include "ROSRos_core/Std_msgs_HeaderACE.hh"

// serialization operator for element Nav_msgs_GetMapActionResult
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSCommon_msgsIDL::Nav_msgs_GetMapActionResult &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element header
	good_bit = good_bit && cdr << data.header;
	// serialize list-element status
	good_bit = good_bit && cdr << data.status;
	// serialize list-element result
	good_bit = good_bit && cdr << data.result;
	
	return good_bit;
}

// de-serialization operator for element Nav_msgs_GetMapActionResult
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSCommon_msgsIDL::Nav_msgs_GetMapActionResult &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize type element header
	good_bit = good_bit && cdr >> data.header;
	// deserialize type element status
	good_bit = good_bit && cdr >> data.status;
	// deserialize type element result
	good_bit = good_bit && cdr >> data.result;
	
	return good_bit;
}

// serialization operator for CommunicationObject Nav_msgs_GetMapActionResult
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSCommon_msgs::Nav_msgs_GetMapActionResult &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject Nav_msgs_GetMapActionResult
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSCommon_msgs::Nav_msgs_GetMapActionResult &obj)
{
	return cdr >> obj.set();
}
