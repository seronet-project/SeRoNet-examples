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
#ifndef ROSCOMMON_MSGS_SENSOR_MSGS_RANGETYPE_ENUM_H_
#define ROSCOMMON_MSGS_SENSOR_MSGS_RANGETYPE_ENUM_H_

#include <ROSCommon_msgs/enumSensor_msgs_RangeTypeData.hh>

#include <string>
#include <iostream>

// SmartUtils used in from_xml method
#include "smartKnuthMorrisPratt.hh"

namespace ROSCommon_msgs {
	
	class Sensor_msgs_RangeType {
	private:
		ROSCommon_msgsIDL::Sensor_msgs_RangeType value;
		
	public:
		enum ENUM_Sensor_msgs_RangeType {
			ENUM_VALUE_UNDEFINED = 0,
			ULTRASOUND = 1,
			INFRARED = 2
		};
		
		// default constructor
		Sensor_msgs_RangeType() { 
			value = ENUM_VALUE_UNDEFINED;
		}
		
		// copy constructor for enum type
		Sensor_msgs_RangeType(ENUM_Sensor_msgs_RangeType e) {
			value = static_cast<int>(e);
		}
		
		// copy constructor for IDL type
		Sensor_msgs_RangeType(ROSCommon_msgsIDL::Sensor_msgs_RangeType e) {
			value = e;
		}
		
		//const ROSCommon_msgsIDL::Sensor_msgs_RangeType& get() const { return value; }
		
		// ENUM operator
		operator ENUM_Sensor_msgs_RangeType() const {
			return static_cast<ENUM_Sensor_msgs_RangeType>(value);
		}
		
		// compare operator
		bool operator == (const ENUM_Sensor_msgs_RangeType t) const {
			return this->value == t;
		}
		
		std::string to_string() const {
			std::string result = "";
			switch (value) {
				case ULTRASOUND:
					result = "Sensor_msgs_RangeType::ULTRASOUND";
					break;
				case INFRARED:
					result = "Sensor_msgs_RangeType::INFRARED";
					break;
				default:
					result = "ENUM_VALUE_UNDEFINED";
					break;
			};
			return result;
		}
		
		// helper method to easily implement output stream
		void to_ostream(std::ostream &os = std::cout) const {
			os << to_string();
		}
		
		// convert to xml stream
		void to_xml(std::ostream &os, const std::string &indent = "") const {
			os << indent << "<value>" << value << "</value>";
		}
		
		// restore from xml stream
		void from_xml(std::istream &is) {
			static const Smart::KnuthMorrisPratt kmp_value("<value>");
			if(kmp_value.search(is)) {
				is >> value;
			}
		}
	
	};
	
	inline std::ostream &operator<<(std::ostream &os, const Sensor_msgs_RangeType &e)
	{
		e.to_ostream(os);
		return os;
	}
};

#endif
