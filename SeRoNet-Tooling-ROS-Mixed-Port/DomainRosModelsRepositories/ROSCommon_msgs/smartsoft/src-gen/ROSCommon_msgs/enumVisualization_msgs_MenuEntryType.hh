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
#ifndef ROSCOMMON_MSGS_VISUALIZATION_MSGS_MENUENTRYTYPE_ENUM_H_
#define ROSCOMMON_MSGS_VISUALIZATION_MSGS_MENUENTRYTYPE_ENUM_H_

#include <ROSCommon_msgs/enumVisualization_msgs_MenuEntryTypeData.hh>

#include <string>
#include <iostream>

// SmartUtils used in from_xml method
#include "smartKnuthMorrisPratt.hh"

namespace ROSCommon_msgs {
	
	class Visualization_msgs_MenuEntryType {
	private:
		ROSCommon_msgsIDL::Visualization_msgs_MenuEntryType value;
		
	public:
		enum ENUM_Visualization_msgs_MenuEntryType {
			ENUM_VALUE_UNDEFINED = 0,
			FEEDBACK = 1,
			ROSRUN = 2,
			ROSLAUNCH = 3
		};
		
		// default constructor
		Visualization_msgs_MenuEntryType() { 
			value = ENUM_VALUE_UNDEFINED;
		}
		
		// copy constructor for enum type
		Visualization_msgs_MenuEntryType(ENUM_Visualization_msgs_MenuEntryType e) {
			value = static_cast<int>(e);
		}
		
		// copy constructor for IDL type
		Visualization_msgs_MenuEntryType(ROSCommon_msgsIDL::Visualization_msgs_MenuEntryType e) {
			value = e;
		}
		
		//const ROSCommon_msgsIDL::Visualization_msgs_MenuEntryType& get() const { return value; }
		
		// ENUM operator
		operator ENUM_Visualization_msgs_MenuEntryType() const {
			return static_cast<ENUM_Visualization_msgs_MenuEntryType>(value);
		}
		
		// compare operator
		bool operator == (const ENUM_Visualization_msgs_MenuEntryType t) const {
			return this->value == t;
		}
		
		std::string to_string() const {
			std::string result = "";
			switch (value) {
				case FEEDBACK:
					result = "Visualization_msgs_MenuEntryType::FEEDBACK";
					break;
				case ROSRUN:
					result = "Visualization_msgs_MenuEntryType::ROSRUN";
					break;
				case ROSLAUNCH:
					result = "Visualization_msgs_MenuEntryType::ROSLAUNCH";
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
	
	inline std::ostream &operator<<(std::ostream &os, const Visualization_msgs_MenuEntryType &e)
	{
		e.to_ostream(os);
		return os;
	}
};

#endif
