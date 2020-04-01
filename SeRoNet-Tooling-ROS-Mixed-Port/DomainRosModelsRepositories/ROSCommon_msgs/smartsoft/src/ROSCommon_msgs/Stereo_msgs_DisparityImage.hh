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
// This file is generated once. Modify this file to your needs. 
// If you want the toolchain to re-generate this file, please 
// delete it before running the code generator.
//--------------------------------------------------------------------------
#ifndef ROSCOMMON_MSGS_STEREO_MSGS_DISPARITYIMAGE_H_
#define ROSCOMMON_MSGS_STEREO_MSGS_DISPARITYIMAGE_H_

#include "ROSCommon_msgs/Stereo_msgs_DisparityImageCore.hh"

namespace ROSCommon_msgs {
		
class Stereo_msgs_DisparityImage : public Stereo_msgs_DisparityImageCore {
	public:
		// default constructors
		Stereo_msgs_DisparityImage();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// Stereo_msgs_DisparityImage(const ROSRos_core::Std_msgs_Header &header, const ROSCommon_msgs::Sensor_msgs_Image &image, const float &f, const float &T, const ROSCommon_msgs::Sensor_msgs_RegionOfInterest &valid_window, const float &min_disparity, const float &max_disparity, const float &delta_d);
		
		Stereo_msgs_DisparityImage(const Stereo_msgs_DisparityImageCore &stereo_msgs_DisparityImage);
		Stereo_msgs_DisparityImage(const DATATYPE &stereo_msgs_DisparityImage);
		virtual ~Stereo_msgs_DisparityImage();
		
		// use framework specific getter and setter methods from core (base) class
		using Stereo_msgs_DisparityImageCore::get;
		using Stereo_msgs_DisparityImageCore::set;
		
		//
		// feel free to add customized methods here
		//
};

inline std::ostream &operator<<(std::ostream &os, const Stereo_msgs_DisparityImage &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace ROSCommon_msgs */
#endif /* ROSCOMMON_MSGS_STEREO_MSGS_DISPARITYIMAGE_H_ */