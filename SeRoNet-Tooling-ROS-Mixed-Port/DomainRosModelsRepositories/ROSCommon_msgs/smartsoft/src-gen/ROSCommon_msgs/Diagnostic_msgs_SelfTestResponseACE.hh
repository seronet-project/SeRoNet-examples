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
#ifndef ROSCOMMON_MSGS_DIAGNOSTIC_MSGS_SELFTESTRESPONSE_ACE_H_
#define ROSCOMMON_MSGS_DIAGNOSTIC_MSGS_SELFTESTRESPONSE_ACE_H_

#include "ROSCommon_msgs/Diagnostic_msgs_SelfTestResponse.hh"

#include <ace/CDR_Stream.h>

// serialization operator for DataStructure Diagnostic_msgs_SelfTestResponse
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSCommon_msgsIDL::Diagnostic_msgs_SelfTestResponse &data);

// de-serialization operator for DataStructure Diagnostic_msgs_SelfTestResponse
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSCommon_msgsIDL::Diagnostic_msgs_SelfTestResponse &data);

// serialization operator for CommunicationObject Diagnostic_msgs_SelfTestResponse
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSCommon_msgs::Diagnostic_msgs_SelfTestResponse &obj);

// de-serialization operator for CommunicationObject Diagnostic_msgs_SelfTestResponse
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSCommon_msgs::Diagnostic_msgs_SelfTestResponse &obj);

#endif /* ROSCOMMON_MSGS_DIAGNOSTIC_MSGS_SELFTESTRESPONSE_ACE_H_ */
