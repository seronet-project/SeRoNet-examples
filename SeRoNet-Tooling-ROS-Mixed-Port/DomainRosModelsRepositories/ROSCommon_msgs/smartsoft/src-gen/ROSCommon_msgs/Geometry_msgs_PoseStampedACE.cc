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
#include "ROSCommon_msgs/Geometry_msgs_PoseStampedACE.hh"
#include <ace/SString.h>
#include "ROSCommon_msgs/Geometry_msgs_PoseACE.hh"
#include "ROSRos_core/Std_msgs_HeaderACE.hh"

// serialization operator for element Geometry_msgs_PoseStamped
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSCommon_msgsIDL::Geometry_msgs_PoseStamped &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element header
	good_bit = good_bit && cdr << data.header;
	// serialize list-element pose
	good_bit = good_bit && cdr << data.pose;
	
	return good_bit;
}

// de-serialization operator for element Geometry_msgs_PoseStamped
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSCommon_msgsIDL::Geometry_msgs_PoseStamped &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize type element header
	good_bit = good_bit && cdr >> data.header;
	// deserialize type element pose
	good_bit = good_bit && cdr >> data.pose;
	
	return good_bit;
}

// serialization operator for CommunicationObject Geometry_msgs_PoseStamped
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSCommon_msgs::Geometry_msgs_PoseStamped &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject Geometry_msgs_PoseStamped
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSCommon_msgs::Geometry_msgs_PoseStamped &obj)
{
	return cdr >> obj.set();
}
