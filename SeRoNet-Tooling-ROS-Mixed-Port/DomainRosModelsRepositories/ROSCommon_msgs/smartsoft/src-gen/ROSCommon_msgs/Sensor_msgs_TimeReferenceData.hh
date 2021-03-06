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
#ifndef ROSCOMMON_MSGS_SENSOR_MSGS_TIMEREFERENCE_DATA_H_
#define ROSCOMMON_MSGS_SENSOR_MSGS_TIMEREFERENCE_DATA_H_

#include "ROSRos_core/Std_msgs_HeaderData.hh"
#include "CommBasicObjects/CommTimeStampData.hh"

#include <string>

namespace ROSCommon_msgsIDL 
{
	struct Sensor_msgs_TimeReference
	{
		ROSRos_coreIDL::Std_msgs_Header header;
		CommBasicObjectsIDL::CommTimeStamp time_ref;
		std::string source;
  	};
};

#endif /* ROSCOMMON_MSGS_SENSOR_MSGS_TIMEREFERENCE_DATA_H_ */
