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
#ifndef ROSCOMMON_MSGS_SHAPE_MSGS_MESHTRIANGLE_ACE_H_
#define ROSCOMMON_MSGS_SHAPE_MSGS_MESHTRIANGLE_ACE_H_

#include "ROSCommon_msgs/Shape_msgs_MeshTriangle.hh"

#include <ace/CDR_Stream.h>

// serialization operator for DataStructure Shape_msgs_MeshTriangle
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSCommon_msgsIDL::Shape_msgs_MeshTriangle &data);

// de-serialization operator for DataStructure Shape_msgs_MeshTriangle
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSCommon_msgsIDL::Shape_msgs_MeshTriangle &data);

// serialization operator for CommunicationObject Shape_msgs_MeshTriangle
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSCommon_msgs::Shape_msgs_MeshTriangle &obj);

// de-serialization operator for CommunicationObject Shape_msgs_MeshTriangle
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSCommon_msgs::Shape_msgs_MeshTriangle &obj);

#endif /* ROSCOMMON_MSGS_SHAPE_MSGS_MESHTRIANGLE_ACE_H_ */
