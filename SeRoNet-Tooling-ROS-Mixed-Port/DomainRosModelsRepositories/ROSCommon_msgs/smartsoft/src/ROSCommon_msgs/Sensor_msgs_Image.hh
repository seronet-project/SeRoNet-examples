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
#ifndef ROSCOMMON_MSGS_SENSOR_MSGS_IMAGE_H_
#define ROSCOMMON_MSGS_SENSOR_MSGS_IMAGE_H_

#include "ROSCommon_msgs/Sensor_msgs_ImageCore.hh"

namespace ROSCommon_msgs {
		
class Sensor_msgs_Image : public Sensor_msgs_ImageCore {
	public:
		// default constructors
		Sensor_msgs_Image();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// Sensor_msgs_Image(const ROSRos_core::Std_msgs_Header &header, const unsigned int &height, const unsigned int &width, const std::string &encoding, const unsigned char &is_bigendian, const unsigned int &step, const std::vector<unsigned char> &data);
		
		Sensor_msgs_Image(const Sensor_msgs_ImageCore &sensor_msgs_Image);
		Sensor_msgs_Image(const DATATYPE &sensor_msgs_Image);
		virtual ~Sensor_msgs_Image();
		
		// use framework specific getter and setter methods from core (base) class
		using Sensor_msgs_ImageCore::get;
		using Sensor_msgs_ImageCore::set;
		
		//
		// feel free to add customized methods here
		//
};

inline std::ostream &operator<<(std::ostream &os, const Sensor_msgs_Image &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace ROSCommon_msgs */
#endif /* ROSCOMMON_MSGS_SENSOR_MSGS_IMAGE_H_ */
