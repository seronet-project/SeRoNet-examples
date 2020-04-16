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
#ifndef ROSCOMMON_MSGS_SENSOR_MSGS_BATTERYSTATE_H_
#define ROSCOMMON_MSGS_SENSOR_MSGS_BATTERYSTATE_H_

#include "ROSCommon_msgs/Sensor_msgs_BatteryStateCore.hh"

namespace ROSCommon_msgs {
		
class Sensor_msgs_BatteryState : public Sensor_msgs_BatteryStateCore {
	public:
		// default constructors
		Sensor_msgs_BatteryState();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// Sensor_msgs_BatteryState(const ROSRos_core::Std_msgs_Header &header, const float &voltage, const float &current, const float &charge, const float &capacity, const float &design_capacity, const float &percentage, const unsigned char &power_supply_status, const unsigned char &power_supply_health, const unsigned char &power_supply_technology, const bool &present, const std::vector<float> &cell_voltage, const std::string &location, const std::string &serial_number);
		
		Sensor_msgs_BatteryState(const Sensor_msgs_BatteryStateCore &sensor_msgs_BatteryState);
		Sensor_msgs_BatteryState(const DATATYPE &sensor_msgs_BatteryState);
		virtual ~Sensor_msgs_BatteryState();
		
		// use framework specific getter and setter methods from core (base) class
		using Sensor_msgs_BatteryStateCore::get;
		using Sensor_msgs_BatteryStateCore::set;
		
		//
		// feel free to add customized methods here
		//
};

inline std::ostream &operator<<(std::ostream &os, const Sensor_msgs_BatteryState &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace ROSCommon_msgs */
#endif /* ROSCOMMON_MSGS_SENSOR_MSGS_BATTERYSTATE_H_ */
