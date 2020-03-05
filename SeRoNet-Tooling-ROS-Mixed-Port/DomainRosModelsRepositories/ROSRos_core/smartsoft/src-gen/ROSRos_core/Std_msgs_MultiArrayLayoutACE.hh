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
#ifndef ROSROS_CORE_STD_MSGS_MULTIARRAYLAYOUT_ACE_H_
#define ROSROS_CORE_STD_MSGS_MULTIARRAYLAYOUT_ACE_H_

#include "ROSRos_core/Std_msgs_MultiArrayLayout.hh"

#include <ace/CDR_Stream.h>

// serialization operator for DataStructure Std_msgs_MultiArrayLayout
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSRos_coreIDL::Std_msgs_MultiArrayLayout &data);

// de-serialization operator for DataStructure Std_msgs_MultiArrayLayout
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSRos_coreIDL::Std_msgs_MultiArrayLayout &data);

// serialization operator for CommunicationObject Std_msgs_MultiArrayLayout
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSRos_core::Std_msgs_MultiArrayLayout &obj);

// de-serialization operator for CommunicationObject Std_msgs_MultiArrayLayout
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSRos_core::Std_msgs_MultiArrayLayout &obj);

#endif /* ROSROS_CORE_STD_MSGS_MULTIARRAYLAYOUT_ACE_H_ */