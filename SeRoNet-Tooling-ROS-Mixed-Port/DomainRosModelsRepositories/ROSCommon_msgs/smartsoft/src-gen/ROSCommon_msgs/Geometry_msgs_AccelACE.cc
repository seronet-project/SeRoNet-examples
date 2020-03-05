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
#include "ROSCommon_msgs/Geometry_msgs_AccelACE.hh"
#include <ace/SString.h>
#include "ROSCommon_msgs/Geometry_msgs_Vector3ACE.hh"

// serialization operator for element Geometry_msgs_Accel
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSCommon_msgsIDL::Geometry_msgs_Accel &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element linear
	good_bit = good_bit && cdr << data.linear;
	// serialize list-element angular
	good_bit = good_bit && cdr << data.angular;
	
	return good_bit;
}

// de-serialization operator for element Geometry_msgs_Accel
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSCommon_msgsIDL::Geometry_msgs_Accel &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize type element linear
	good_bit = good_bit && cdr >> data.linear;
	// deserialize type element angular
	good_bit = good_bit && cdr >> data.angular;
	
	return good_bit;
}

// serialization operator for CommunicationObject Geometry_msgs_Accel
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSCommon_msgs::Geometry_msgs_Accel &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject Geometry_msgs_Accel
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSCommon_msgs::Geometry_msgs_Accel &obj)
{
	return cdr >> obj.set();
}
