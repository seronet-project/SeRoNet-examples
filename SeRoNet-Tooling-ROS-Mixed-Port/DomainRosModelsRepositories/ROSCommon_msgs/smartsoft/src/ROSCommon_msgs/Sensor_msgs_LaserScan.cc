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

#include "ROSCommon_msgs/Sensor_msgs_LaserScan.hh"

using namespace ROSCommon_msgs;

Sensor_msgs_LaserScan::Sensor_msgs_LaserScan()
:	Sensor_msgs_LaserScanCore()
{  }


/**
 * Constructor to set all values.
 * NOTE that you have to keep this constructor consistent with the model!
 * Use  at your own choice.
 *
 * The preferred way to set values for initialization is:
 *      CommRepository::MyCommObject obj;
 *      obj.setX(1).setY(2).setZ(3)...;
Sensor_msgs_LaserScan::Sensor_msgs_LaserScan(const ROSRos_core::Std_msgs_Header &header, const float &angle_min, const float &angle_max, const float &angle_increment, const float &time_increment, const float &scan_time, const float &range_min, const float &range_max, const std::vector<float> &ranges, const std::vector<float> &intensities)
:	Sensor_msgs_LaserScanCore() // base constructor sets default values as defined in the model
{
	setHeader(header);
	setAngle_min(angle_min);
	setAngle_max(angle_max);
	setAngle_increment(angle_increment);
	setTime_increment(time_increment);
	setScan_time(scan_time);
	setRange_min(range_min);
	setRange_max(range_max);
	setRanges(ranges);
	setIntensities(intensities);
}
 */

Sensor_msgs_LaserScan::Sensor_msgs_LaserScan(const Sensor_msgs_LaserScanCore &sensor_msgs_LaserScan)
:	Sensor_msgs_LaserScanCore(sensor_msgs_LaserScan)
{  }

Sensor_msgs_LaserScan::Sensor_msgs_LaserScan(const DATATYPE &sensor_msgs_LaserScan)
:	Sensor_msgs_LaserScanCore(sensor_msgs_LaserScan)
{  }

Sensor_msgs_LaserScan::~Sensor_msgs_LaserScan()
{  }