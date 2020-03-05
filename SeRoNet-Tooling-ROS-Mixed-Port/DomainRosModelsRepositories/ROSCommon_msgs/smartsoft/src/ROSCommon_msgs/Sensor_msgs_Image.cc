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

#include "ROSCommon_msgs/Sensor_msgs_Image.hh"

using namespace ROSCommon_msgs;

Sensor_msgs_Image::Sensor_msgs_Image()
:	Sensor_msgs_ImageCore()
{  }


/**
 * Constructor to set all values.
 * NOTE that you have to keep this constructor consistent with the model!
 * Use  at your own choice.
 *
 * The preferred way to set values for initialization is:
 *      CommRepository::MyCommObject obj;
 *      obj.setX(1).setY(2).setZ(3)...;
Sensor_msgs_Image::Sensor_msgs_Image(const ROSRos_core::Std_msgs_Header &header, const unsigned int &height, const unsigned int &width, const std::string &encoding, const unsigned char &is_bigendian, const unsigned int &step, const std::vector<unsigned char> &data)
:	Sensor_msgs_ImageCore() // base constructor sets default values as defined in the model
{
	setHeader(header);
	setHeight(height);
	setWidth(width);
	setEncoding(encoding);
	setIs_bigendian(is_bigendian);
	setStep(step);
	setData(data);
}
 */

Sensor_msgs_Image::Sensor_msgs_Image(const Sensor_msgs_ImageCore &sensor_msgs_Image)
:	Sensor_msgs_ImageCore(sensor_msgs_Image)
{  }

Sensor_msgs_Image::Sensor_msgs_Image(const DATATYPE &sensor_msgs_Image)
:	Sensor_msgs_ImageCore(sensor_msgs_Image)
{  }

Sensor_msgs_Image::~Sensor_msgs_Image()
{  }