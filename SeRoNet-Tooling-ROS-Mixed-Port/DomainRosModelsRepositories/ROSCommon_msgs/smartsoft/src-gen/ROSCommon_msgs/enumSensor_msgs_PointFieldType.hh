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
#ifndef ROSCOMMON_MSGS_SENSOR_MSGS_POINTFIELDTYPE_ENUM_H_
#define ROSCOMMON_MSGS_SENSOR_MSGS_POINTFIELDTYPE_ENUM_H_

#include <ROSCommon_msgs/enumSensor_msgs_PointFieldTypeData.hh>

#include <string>
#include <iostream>

// SmartUtils used in from_xml method
#include "smartKnuthMorrisPratt.hh"

namespace ROSCommon_msgs {
	
	class Sensor_msgs_PointFieldType {
	private:
		ROSCommon_msgsIDL::Sensor_msgs_PointFieldType value;
		
	public:
		enum ENUM_Sensor_msgs_PointFieldType {
			ENUM_VALUE_UNDEFINED = 0,
			INT8 = 1,
			UINT8 = 2,
			INT16 = 3,
			UINT16 = 4,
			INT32 = 5,
			UINT32 = 6,
			FLOAT32 = 7,
			FLOAT64 = 8
		};
		
		// default constructor
		Sensor_msgs_PointFieldType() { 
			value = ENUM_VALUE_UNDEFINED;
		}
		
		// copy constructor for enum type
		Sensor_msgs_PointFieldType(ENUM_Sensor_msgs_PointFieldType e) {
			value = static_cast<int>(e);
		}
		
		// copy constructor for IDL type
		Sensor_msgs_PointFieldType(ROSCommon_msgsIDL::Sensor_msgs_PointFieldType e) {
			value = e;
		}
		
		//const ROSCommon_msgsIDL::Sensor_msgs_PointFieldType& get() const { return value; }
		
		// ENUM operator
		operator ENUM_Sensor_msgs_PointFieldType() const {
			return static_cast<ENUM_Sensor_msgs_PointFieldType>(value);
		}
		
		// compare operator
		bool operator == (const ENUM_Sensor_msgs_PointFieldType t) const {
			return this->value == t;
		}
		
		std::string to_string() const {
			std::string result = "";
			switch (value) {
				case INT8:
					result = "Sensor_msgs_PointFieldType::INT8";
					break;
				case UINT8:
					result = "Sensor_msgs_PointFieldType::UINT8";
					break;
				case INT16:
					result = "Sensor_msgs_PointFieldType::INT16";
					break;
				case UINT16:
					result = "Sensor_msgs_PointFieldType::UINT16";
					break;
				case INT32:
					result = "Sensor_msgs_PointFieldType::INT32";
					break;
				case UINT32:
					result = "Sensor_msgs_PointFieldType::UINT32";
					break;
				case FLOAT32:
					result = "Sensor_msgs_PointFieldType::FLOAT32";
					break;
				case FLOAT64:
					result = "Sensor_msgs_PointFieldType::FLOAT64";
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
	
	inline std::ostream &operator<<(std::ostream &os, const Sensor_msgs_PointFieldType &e)
	{
		e.to_ostream(os);
		return os;
	}
};

#endif
