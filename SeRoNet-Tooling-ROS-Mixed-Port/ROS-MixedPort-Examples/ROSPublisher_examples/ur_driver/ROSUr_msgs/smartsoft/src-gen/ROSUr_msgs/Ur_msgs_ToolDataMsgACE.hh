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
#ifndef ROSUR_MSGS_UR_MSGS_TOOLDATAMSG_ACE_H_
#define ROSUR_MSGS_UR_MSGS_TOOLDATAMSG_ACE_H_

#include "ROSUr_msgs/Ur_msgs_ToolDataMsg.hh"

#include <ace/CDR_Stream.h>

// serialization operator for DataStructure Ur_msgs_ToolDataMsg
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSUr_msgsIDL::Ur_msgs_ToolDataMsg &data);

// de-serialization operator for DataStructure Ur_msgs_ToolDataMsg
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSUr_msgsIDL::Ur_msgs_ToolDataMsg &data);

// serialization operator for CommunicationObject Ur_msgs_ToolDataMsg
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSUr_msgs::Ur_msgs_ToolDataMsg &obj);

// de-serialization operator for CommunicationObject Ur_msgs_ToolDataMsg
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSUr_msgs::Ur_msgs_ToolDataMsg &obj);

#endif /* ROSUR_MSGS_UR_MSGS_TOOLDATAMSG_ACE_H_ */
