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
#ifndef ROSCOMMON_MSGS_STEREO_MSGS_DISPARITYIMAGE_DATA_H_
#define ROSCOMMON_MSGS_STEREO_MSGS_DISPARITYIMAGE_DATA_H_

#include "ROSRos_core/Std_msgs_HeaderData.hh"
#include "ROSCommon_msgs/Sensor_msgs_ImageData.hh"
#include "ROSCommon_msgs/Sensor_msgs_RegionOfInterestData.hh"


namespace ROSCommon_msgsIDL 
{
	struct Stereo_msgs_DisparityImage
	{
		ROSRos_coreIDL::Std_msgs_Header header;
		ROSCommon_msgsIDL::Sensor_msgs_Image image;
		float f;
		float T;
		ROSCommon_msgsIDL::Sensor_msgs_RegionOfInterest valid_window;
		float min_disparity;
		float max_disparity;
		float delta_d;
  	};
};

#endif /* ROSCOMMON_MSGS_STEREO_MSGS_DISPARITYIMAGE_DATA_H_ */
