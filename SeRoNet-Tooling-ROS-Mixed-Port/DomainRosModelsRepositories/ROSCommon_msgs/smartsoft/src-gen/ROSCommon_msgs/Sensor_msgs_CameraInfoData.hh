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
#ifndef ROSCOMMON_MSGS_SENSOR_MSGS_CAMERAINFO_DATA_H_
#define ROSCOMMON_MSGS_SENSOR_MSGS_CAMERAINFO_DATA_H_

#include "ROSRos_core/Std_msgs_HeaderData.hh"
#include "ROSCommon_msgs/Sensor_msgs_RegionOfInterestData.hh"

#include <vector>
#include <string>

namespace ROSCommon_msgsIDL 
{
	typedef std::vector<double> Sensor_msgs_CameraInfo_D_type;
	typedef std::vector<double> Sensor_msgs_CameraInfo_K_type;
	typedef std::vector<double> Sensor_msgs_CameraInfo_R_type;
	typedef std::vector<double> Sensor_msgs_CameraInfo_P_type;
	struct Sensor_msgs_CameraInfo
	{
		ROSRos_coreIDL::Std_msgs_Header header;
		unsigned int height;
		unsigned int width;
		std::string distortion_model;
		Sensor_msgs_CameraInfo_D_type D;
		Sensor_msgs_CameraInfo_K_type K;
		Sensor_msgs_CameraInfo_R_type R;
		Sensor_msgs_CameraInfo_P_type P;
		unsigned int binning_x;
		unsigned int binning_y;
		ROSCommon_msgsIDL::Sensor_msgs_RegionOfInterest roi;
  	};
};

#endif /* ROSCOMMON_MSGS_SENSOR_MSGS_CAMERAINFO_DATA_H_ */
