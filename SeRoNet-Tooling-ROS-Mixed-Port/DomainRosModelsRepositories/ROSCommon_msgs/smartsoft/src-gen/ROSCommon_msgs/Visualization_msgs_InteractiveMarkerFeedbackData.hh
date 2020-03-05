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
#ifndef ROSCOMMON_MSGS_VISUALIZATION_MSGS_INTERACTIVEMARKERFEEDBACK_DATA_H_
#define ROSCOMMON_MSGS_VISUALIZATION_MSGS_INTERACTIVEMARKERFEEDBACK_DATA_H_

#include "ROSRos_core/Std_msgs_HeaderData.hh"
#include "ROSCommon_msgs/Geometry_msgs_PointData.hh"
#include "ROSCommon_msgs/Geometry_msgs_PoseData.hh"

#include <string>

namespace ROSCommon_msgsIDL 
{
	struct Visualization_msgs_InteractiveMarkerFeedback
	{
		ROSRos_coreIDL::Std_msgs_Header header;
		std::string client_id;
		std::string marker_name;
		std::string control_name;
		unsigned char event_type;
		ROSCommon_msgsIDL::Geometry_msgs_Pose pose;
		unsigned int menu_entry_id;
		ROSCommon_msgsIDL::Geometry_msgs_Point mouse_point;
		bool mouse_point_valid;
  	};
};

#endif /* ROSCOMMON_MSGS_VISUALIZATION_MSGS_INTERACTIVEMARKERFEEDBACK_DATA_H_ */