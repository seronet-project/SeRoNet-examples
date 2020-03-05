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

#include "ROSCommon_msgs/Sensor_msgs_NavSatFix.hh"

using namespace ROSCommon_msgs;

Sensor_msgs_NavSatFix::Sensor_msgs_NavSatFix()
:	Sensor_msgs_NavSatFixCore()
{  }


/**
 * Constructor to set all values.
 * NOTE that you have to keep this constructor consistent with the model!
 * Use  at your own choice.
 *
 * The preferred way to set values for initialization is:
 *      CommRepository::MyCommObject obj;
 *      obj.setX(1).setY(2).setZ(3)...;
Sensor_msgs_NavSatFix::Sensor_msgs_NavSatFix(const ROSRos_core::Std_msgs_Header &header, const ROSCommon_msgs::Sensor_msgs_NavSatStatus &status, const double &latitude, const double &longitude, const double &altitude, const std::vector<double> &position_covariance, const unsigned char &position_covariance_type)
:	Sensor_msgs_NavSatFixCore() // base constructor sets default values as defined in the model
{
	setHeader(header);
	setStatus(status);
	setLatitude(latitude);
	setLongitude(longitude);
	setAltitude(altitude);
	setPosition_covariance(position_covariance);
	setPosition_covariance_type(position_covariance_type);
}
 */

Sensor_msgs_NavSatFix::Sensor_msgs_NavSatFix(const Sensor_msgs_NavSatFixCore &sensor_msgs_NavSatFix)
:	Sensor_msgs_NavSatFixCore(sensor_msgs_NavSatFix)
{  }

Sensor_msgs_NavSatFix::Sensor_msgs_NavSatFix(const DATATYPE &sensor_msgs_NavSatFix)
:	Sensor_msgs_NavSatFixCore(sensor_msgs_NavSatFix)
{  }

Sensor_msgs_NavSatFix::~Sensor_msgs_NavSatFix()
{  }