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
#ifndef ROSCOMMON_MSGS_SENSOR_MSGS_BATTERYSTATE_CORE_H_
#define ROSCOMMON_MSGS_SENSOR_MSGS_BATTERYSTATE_CORE_H_

#include "ROSCommon_msgs/Sensor_msgs_BatteryStateData.hh"
#include "ROSRos_core/Std_msgs_Header.hh"

#include <iostream>
#include <string>
#include <list>

namespace ROSCommon_msgs {
	
class Sensor_msgs_BatteryStateCore {
protected:
	// data structure
	ROSCommon_msgsIDL::Sensor_msgs_BatteryState idl_Sensor_msgs_BatteryState;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef ROSCommon_msgsIDL::Sensor_msgs_BatteryState DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	Sensor_msgs_BatteryStateCore();
	Sensor_msgs_BatteryStateCore(const DATATYPE &data);
	// default destructor
	virtual ~Sensor_msgs_BatteryStateCore();
	
	const DATATYPE& get() const { return idl_Sensor_msgs_BatteryState; }
	operator const DATATYPE&() const { return idl_Sensor_msgs_BatteryState; }
	DATATYPE& set() { return idl_Sensor_msgs_BatteryState; }

	static inline std::string identifier(void) { return "ROSCommon_msgs::Sensor_msgs_BatteryState"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Header
	inline ROSRos_core::Std_msgs_Header getHeader() const { return ROSRos_core::Std_msgs_Header(idl_Sensor_msgs_BatteryState.header); }
	inline Sensor_msgs_BatteryStateCore& setHeader(const ROSRos_core::Std_msgs_Header &header) { idl_Sensor_msgs_BatteryState.header = header; return *this; }
	
	// getter and setter for element Voltage
	inline float getVoltage() const { return idl_Sensor_msgs_BatteryState.voltage; }
	inline Sensor_msgs_BatteryStateCore& setVoltage(const float &voltage) { idl_Sensor_msgs_BatteryState.voltage = voltage; return *this; }
	
	// getter and setter for element Current
	inline float getCurrent() const { return idl_Sensor_msgs_BatteryState.current; }
	inline Sensor_msgs_BatteryStateCore& setCurrent(const float &current) { idl_Sensor_msgs_BatteryState.current = current; return *this; }
	
	// getter and setter for element Charge
	inline float getCharge() const { return idl_Sensor_msgs_BatteryState.charge; }
	inline Sensor_msgs_BatteryStateCore& setCharge(const float &charge) { idl_Sensor_msgs_BatteryState.charge = charge; return *this; }
	
	// getter and setter for element Capacity
	inline float getCapacity() const { return idl_Sensor_msgs_BatteryState.capacity; }
	inline Sensor_msgs_BatteryStateCore& setCapacity(const float &capacity) { idl_Sensor_msgs_BatteryState.capacity = capacity; return *this; }
	
	// getter and setter for element Design_capacity
	inline float getDesign_capacity() const { return idl_Sensor_msgs_BatteryState.design_capacity; }
	inline Sensor_msgs_BatteryStateCore& setDesign_capacity(const float &design_capacity) { idl_Sensor_msgs_BatteryState.design_capacity = design_capacity; return *this; }
	
	// getter and setter for element Percentage
	inline float getPercentage() const { return idl_Sensor_msgs_BatteryState.percentage; }
	inline Sensor_msgs_BatteryStateCore& setPercentage(const float &percentage) { idl_Sensor_msgs_BatteryState.percentage = percentage; return *this; }
	
	// getter and setter for element Power_supply_status
	inline unsigned char getPower_supply_status() const { return idl_Sensor_msgs_BatteryState.power_supply_status; }
	inline Sensor_msgs_BatteryStateCore& setPower_supply_status(const unsigned char &power_supply_status) { idl_Sensor_msgs_BatteryState.power_supply_status = power_supply_status; return *this; }
	
	// getter and setter for element Power_supply_health
	inline unsigned char getPower_supply_health() const { return idl_Sensor_msgs_BatteryState.power_supply_health; }
	inline Sensor_msgs_BatteryStateCore& setPower_supply_health(const unsigned char &power_supply_health) { idl_Sensor_msgs_BatteryState.power_supply_health = power_supply_health; return *this; }
	
	// getter and setter for element Power_supply_technology
	inline unsigned char getPower_supply_technology() const { return idl_Sensor_msgs_BatteryState.power_supply_technology; }
	inline Sensor_msgs_BatteryStateCore& setPower_supply_technology(const unsigned char &power_supply_technology) { idl_Sensor_msgs_BatteryState.power_supply_technology = power_supply_technology; return *this; }
	
	// getter and setter for element Present
	inline bool getPresent() const { return idl_Sensor_msgs_BatteryState.present; }
	inline Sensor_msgs_BatteryStateCore& setPresent(const bool &present) { idl_Sensor_msgs_BatteryState.present = present; return *this; }
	
	// getter and setter for element Cell_voltage
	/**
	 * Getter methods for idl_Sensor_msgs_BatteryState.cell_voltage of type vector<float>
	 */
	inline std::vector<float>& getCell_voltageRef() { return idl_Sensor_msgs_BatteryState.cell_voltage; }
	inline std::vector<float> getCell_voltageCopy() const {
		return std::vector<float>(idl_Sensor_msgs_BatteryState.cell_voltage.begin(), idl_Sensor_msgs_BatteryState.cell_voltage.end());
	}
	inline float getCell_voltageElemAtPos(const size_t &pos) const { return idl_Sensor_msgs_BatteryState.cell_voltage[pos]; }
	inline size_t getCell_voltageSize() const { return idl_Sensor_msgs_BatteryState.cell_voltage.size(); }
	inline bool isCell_voltageEmpty() const { return idl_Sensor_msgs_BatteryState.cell_voltage.empty(); }
	/**
	 * Setter methods for idl_Sensor_msgs_BatteryState.cell_voltage of type vector<float>
	 */
	inline Sensor_msgs_BatteryStateCore& setCell_voltage(const std::vector<float> &cell_voltage) { idl_Sensor_msgs_BatteryState.cell_voltage = cell_voltage; return *this; }
	inline bool setCell_voltageElemAtPos(const size_t &pos, const float &elem) {
		if(pos < idl_Sensor_msgs_BatteryState.cell_voltage.size()) {
			idl_Sensor_msgs_BatteryState.cell_voltage[pos] = elem;
			return true;
		}
		return false;
	}
	inline bool insertCell_voltageVectorAtPos(const size_t &pos, const std::vector<float> &data) {
		if(pos < idl_Sensor_msgs_BatteryState.cell_voltage.size()) {
			idl_Sensor_msgs_BatteryState.cell_voltage.insert(idl_Sensor_msgs_BatteryState.cell_voltage.begin()+pos, data.begin(), data.end());
			return true;
		}
		return false;
	}
	inline void resizeCell_voltage(const size_t &size) { idl_Sensor_msgs_BatteryState.cell_voltage.resize(size); }
	inline bool eraseCell_voltageElemsAtPos(const size_t &pos, const size_t &nbr_elems) {
		if( (pos+nbr_elems) <= idl_Sensor_msgs_BatteryState.cell_voltage.size() ) {
			idl_Sensor_msgs_BatteryState.cell_voltage.erase(idl_Sensor_msgs_BatteryState.cell_voltage.begin()+pos, idl_Sensor_msgs_BatteryState.cell_voltage.begin()+pos+nbr_elems);
			return true;
		}
		return false;
	}
	inline void clearCell_voltage() { idl_Sensor_msgs_BatteryState.cell_voltage.clear(); }
	
	// getter and setter for element Location
	inline std::string getLocation() const { return idl_Sensor_msgs_BatteryState.location; }
	inline Sensor_msgs_BatteryStateCore& setLocation(const std::string &location) { idl_Sensor_msgs_BatteryState.location = location; return *this; }
	
	// getter and setter for element Serial_number
	inline std::string getSerial_number() const { return idl_Sensor_msgs_BatteryState.serial_number; }
	inline Sensor_msgs_BatteryStateCore& setSerial_number(const std::string &serial_number) { idl_Sensor_msgs_BatteryState.serial_number = serial_number; return *this; }
};

} /* namespace ROSCommon_msgs */
#endif /* ROSCOMMON_MSGS_SENSOR_MSGS_BATTERYSTATE_CORE_H_ */