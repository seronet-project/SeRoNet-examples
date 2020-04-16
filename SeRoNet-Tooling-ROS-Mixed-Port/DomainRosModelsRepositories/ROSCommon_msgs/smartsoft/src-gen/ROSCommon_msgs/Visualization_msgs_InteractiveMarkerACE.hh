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
#ifndef ROSCOMMON_MSGS_VISUALIZATION_MSGS_INTERACTIVEMARKER_ACE_H_
#define ROSCOMMON_MSGS_VISUALIZATION_MSGS_INTERACTIVEMARKER_ACE_H_

#include "ROSCommon_msgs/Visualization_msgs_InteractiveMarker.hh"

#include <ace/CDR_Stream.h>

// serialization operator for DataStructure Visualization_msgs_InteractiveMarker
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSCommon_msgsIDL::Visualization_msgs_InteractiveMarker &data);

// de-serialization operator for DataStructure Visualization_msgs_InteractiveMarker
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSCommon_msgsIDL::Visualization_msgs_InteractiveMarker &data);

// serialization operator for CommunicationObject Visualization_msgs_InteractiveMarker
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSCommon_msgs::Visualization_msgs_InteractiveMarker &obj);

// de-serialization operator for CommunicationObject Visualization_msgs_InteractiveMarker
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSCommon_msgs::Visualization_msgs_InteractiveMarker &obj);

#endif /* ROSCOMMON_MSGS_VISUALIZATION_MSGS_INTERACTIVEMARKER_ACE_H_ */
