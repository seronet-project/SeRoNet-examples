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
#ifndef ROSCOMMON_MSGS_SENSOR_MSGS_NAVSATSTATUS_CORE_H_
#define ROSCOMMON_MSGS_SENSOR_MSGS_NAVSATSTATUS_CORE_H_

#include "ROSCommon_msgs/Sensor_msgs_NavSatStatusData.hh"

#include <iostream>
#include <string>
#include <list>

namespace ROSCommon_msgs {
	
class Sensor_msgs_NavSatStatusCore {
protected:
	// data structure
	ROSCommon_msgsIDL::Sensor_msgs_NavSatStatus idl_Sensor_msgs_NavSatStatus;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef ROSCommon_msgsIDL::Sensor_msgs_NavSatStatus DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	Sensor_msgs_NavSatStatusCore();
	Sensor_msgs_NavSatStatusCore(const DATATYPE &data);
	// default destructor
	virtual ~Sensor_msgs_NavSatStatusCore();
	
	const DATATYPE& get() const { return idl_Sensor_msgs_NavSatStatus; }
	operator const DATATYPE&() const { return idl_Sensor_msgs_NavSatStatus; }
	DATATYPE& set() { return idl_Sensor_msgs_NavSatStatus; }

	static inline std::string identifier(void) { return "ROSCommon_msgs::Sensor_msgs_NavSatStatus"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Status
	inline char getStatus() const { return idl_Sensor_msgs_NavSatStatus.status; }
	inline Sensor_msgs_NavSatStatusCore& setStatus(const char &status) { idl_Sensor_msgs_NavSatStatus.status = status; return *this; }
	
	// getter and setter for element Service
	inline unsigned short getService() const { return idl_Sensor_msgs_NavSatStatus.service; }
	inline Sensor_msgs_NavSatStatusCore& setService(const unsigned short &service) { idl_Sensor_msgs_NavSatStatus.service = service; return *this; }
};

} /* namespace ROSCommon_msgs */
#endif /* ROSCOMMON_MSGS_SENSOR_MSGS_NAVSATSTATUS_CORE_H_ */
