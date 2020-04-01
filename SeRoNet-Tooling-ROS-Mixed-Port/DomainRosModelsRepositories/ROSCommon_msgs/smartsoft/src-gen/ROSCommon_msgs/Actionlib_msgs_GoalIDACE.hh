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
#ifndef ROSCOMMON_MSGS_ACTIONLIB_MSGS_GOALID_ACE_H_
#define ROSCOMMON_MSGS_ACTIONLIB_MSGS_GOALID_ACE_H_

#include "ROSCommon_msgs/Actionlib_msgs_GoalID.hh"

#include <ace/CDR_Stream.h>

// serialization operator for DataStructure Actionlib_msgs_GoalID
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSCommon_msgsIDL::Actionlib_msgs_GoalID &data);

// de-serialization operator for DataStructure Actionlib_msgs_GoalID
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSCommon_msgsIDL::Actionlib_msgs_GoalID &data);

// serialization operator for CommunicationObject Actionlib_msgs_GoalID
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSCommon_msgs::Actionlib_msgs_GoalID &obj);

// de-serialization operator for CommunicationObject Actionlib_msgs_GoalID
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSCommon_msgs::Actionlib_msgs_GoalID &obj);

#endif /* ROSCOMMON_MSGS_ACTIONLIB_MSGS_GOALID_ACE_H_ */