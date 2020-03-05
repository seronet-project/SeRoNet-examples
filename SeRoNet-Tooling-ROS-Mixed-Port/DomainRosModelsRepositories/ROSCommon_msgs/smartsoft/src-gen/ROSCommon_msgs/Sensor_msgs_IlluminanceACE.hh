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
#ifndef ROSCOMMON_MSGS_SENSOR_MSGS_ILLUMINANCE_ACE_H_
#define ROSCOMMON_MSGS_SENSOR_MSGS_ILLUMINANCE_ACE_H_

#include "ROSCommon_msgs/Sensor_msgs_Illuminance.hh"

#include <ace/CDR_Stream.h>

// serialization operator for DataStructure Sensor_msgs_Illuminance
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSCommon_msgsIDL::Sensor_msgs_Illuminance &data);

// de-serialization operator for DataStructure Sensor_msgs_Illuminance
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSCommon_msgsIDL::Sensor_msgs_Illuminance &data);

// serialization operator for CommunicationObject Sensor_msgs_Illuminance
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSCommon_msgs::Sensor_msgs_Illuminance &obj);

// de-serialization operator for CommunicationObject Sensor_msgs_Illuminance
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSCommon_msgs::Sensor_msgs_Illuminance &obj);

#endif /* ROSCOMMON_MSGS_SENSOR_MSGS_ILLUMINANCE_ACE_H_ */
