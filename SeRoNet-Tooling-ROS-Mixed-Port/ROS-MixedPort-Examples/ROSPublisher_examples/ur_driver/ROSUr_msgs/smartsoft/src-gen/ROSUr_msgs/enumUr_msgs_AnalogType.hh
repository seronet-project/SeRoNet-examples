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
#ifndef ROSUR_MSGS_UR_MSGS_ANALOGTYPE_ENUM_H_
#define ROSUR_MSGS_UR_MSGS_ANALOGTYPE_ENUM_H_

#include <ROSUr_msgs/enumUr_msgs_AnalogTypeData.hh>

#include <string>
#include <iostream>

// SmartUtils used in from_xml method
#include "smartKnuthMorrisPratt.hh"

namespace ROSUr_msgs {
	
	class Ur_msgs_AnalogType {
	private:
		ROSUr_msgsIDL::Ur_msgs_AnalogType value;
		
	public:
		enum ENUM_Ur_msgs_AnalogType {
			ENUM_VALUE_UNDEFINED = 0,
			VOLTAGE = 1,
			CURRENT = 2
		};
		
		// default constructor
		Ur_msgs_AnalogType() { 
			value = ENUM_VALUE_UNDEFINED;
		}
		
		// copy constructor for enum type
		Ur_msgs_AnalogType(ENUM_Ur_msgs_AnalogType e) {
			value = static_cast<int>(e);
		}
		
		// copy constructor for IDL type
		Ur_msgs_AnalogType(ROSUr_msgsIDL::Ur_msgs_AnalogType e) {
			value = e;
		}
		
		//const ROSUr_msgsIDL::Ur_msgs_AnalogType& get() const { return value; }
		
		// ENUM operator
		operator ENUM_Ur_msgs_AnalogType() const {
			return static_cast<ENUM_Ur_msgs_AnalogType>(value);
		}
		
		// compare operator
		bool operator == (const ENUM_Ur_msgs_AnalogType t) const {
			return this->value == t;
		}
		
		std::string to_string() const {
			std::string result = "";
			switch (value) {
				case VOLTAGE:
					result = "Ur_msgs_AnalogType::VOLTAGE";
					break;
				case CURRENT:
					result = "Ur_msgs_AnalogType::CURRENT";
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
	
	inline std::ostream &operator<<(std::ostream &os, const Ur_msgs_AnalogType &e)
	{
		e.to_ostream(os);
		return os;
	}
};

#endif