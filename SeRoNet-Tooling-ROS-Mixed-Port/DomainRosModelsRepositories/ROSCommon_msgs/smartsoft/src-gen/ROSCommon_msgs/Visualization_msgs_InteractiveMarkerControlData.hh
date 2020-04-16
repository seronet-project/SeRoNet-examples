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
#ifndef ROSCOMMON_MSGS_VISUALIZATION_MSGS_INTERACTIVEMARKERCONTROL_DATA_H_
#define ROSCOMMON_MSGS_VISUALIZATION_MSGS_INTERACTIVEMARKERCONTROL_DATA_H_

#include "ROSCommon_msgs/Visualization_msgs_MarkerData.hh"
#include "ROSCommon_msgs/Geometry_msgs_QuaternionData.hh"

#include <vector>
#include <string>

namespace ROSCommon_msgsIDL 
{
	typedef std::vector<ROSCommon_msgsIDL::Visualization_msgs_Marker> Visualization_msgs_InteractiveMarkerControl_markers_type;
	struct Visualization_msgs_InteractiveMarkerControl
	{
		std::string name;
		ROSCommon_msgsIDL::Geometry_msgs_Quaternion orientation;
		unsigned char orientation_mode;
		unsigned char interaction_mode;
		bool always_visible;
		Visualization_msgs_InteractiveMarkerControl_markers_type markers;
		bool independent_marker_orientation;
		std::string description;
  	};
};

#endif /* ROSCOMMON_MSGS_VISUALIZATION_MSGS_INTERACTIVEMARKERCONTROL_DATA_H_ */
