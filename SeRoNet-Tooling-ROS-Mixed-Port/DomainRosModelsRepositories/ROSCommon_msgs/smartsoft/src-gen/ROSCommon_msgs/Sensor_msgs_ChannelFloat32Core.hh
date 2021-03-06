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
#ifndef ROSCOMMON_MSGS_SENSOR_MSGS_CHANNELFLOAT32_CORE_H_
#define ROSCOMMON_MSGS_SENSOR_MSGS_CHANNELFLOAT32_CORE_H_

#include "ROSCommon_msgs/Sensor_msgs_ChannelFloat32Data.hh"

#include <iostream>
#include <string>
#include <list>

namespace ROSCommon_msgs {
	
class Sensor_msgs_ChannelFloat32Core {
protected:
	// data structure
	ROSCommon_msgsIDL::Sensor_msgs_ChannelFloat32 idl_Sensor_msgs_ChannelFloat32;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef ROSCommon_msgsIDL::Sensor_msgs_ChannelFloat32 DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	Sensor_msgs_ChannelFloat32Core();
	Sensor_msgs_ChannelFloat32Core(const DATATYPE &data);
	// default destructor
	virtual ~Sensor_msgs_ChannelFloat32Core();
	
	const DATATYPE& get() const { return idl_Sensor_msgs_ChannelFloat32; }
	operator const DATATYPE&() const { return idl_Sensor_msgs_ChannelFloat32; }
	DATATYPE& set() { return idl_Sensor_msgs_ChannelFloat32; }

	static inline std::string identifier(void) { return "ROSCommon_msgs::Sensor_msgs_ChannelFloat32"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Name
	inline std::string getName() const { return idl_Sensor_msgs_ChannelFloat32.name; }
	inline Sensor_msgs_ChannelFloat32Core& setName(const std::string &name) { idl_Sensor_msgs_ChannelFloat32.name = name; return *this; }
	
	// getter and setter for element Values
	/**
	 * Getter methods for idl_Sensor_msgs_ChannelFloat32.values of type vector<float>
	 */
	inline std::vector<float>& getValuesRef() { return idl_Sensor_msgs_ChannelFloat32.values; }
	inline std::vector<float> getValuesCopy() const {
		return std::vector<float>(idl_Sensor_msgs_ChannelFloat32.values.begin(), idl_Sensor_msgs_ChannelFloat32.values.end());
	}
	inline float getValuesElemAtPos(const size_t &pos) const { return idl_Sensor_msgs_ChannelFloat32.values[pos]; }
	inline size_t getValuesSize() const { return idl_Sensor_msgs_ChannelFloat32.values.size(); }
	inline bool isValuesEmpty() const { return idl_Sensor_msgs_ChannelFloat32.values.empty(); }
	/**
	 * Setter methods for idl_Sensor_msgs_ChannelFloat32.values of type vector<float>
	 */
	inline Sensor_msgs_ChannelFloat32Core& setValues(const std::vector<float> &values) { idl_Sensor_msgs_ChannelFloat32.values = values; return *this; }
	inline bool setValuesElemAtPos(const size_t &pos, const float &elem) {
		if(pos < idl_Sensor_msgs_ChannelFloat32.values.size()) {
			idl_Sensor_msgs_ChannelFloat32.values[pos] = elem;
			return true;
		}
		return false;
	}
	inline bool insertValuesVectorAtPos(const size_t &pos, const std::vector<float> &data) {
		if(pos < idl_Sensor_msgs_ChannelFloat32.values.size()) {
			idl_Sensor_msgs_ChannelFloat32.values.insert(idl_Sensor_msgs_ChannelFloat32.values.begin()+pos, data.begin(), data.end());
			return true;
		}
		return false;
	}
	inline void resizeValues(const size_t &size) { idl_Sensor_msgs_ChannelFloat32.values.resize(size); }
	inline bool eraseValuesElemsAtPos(const size_t &pos, const size_t &nbr_elems) {
		if( (pos+nbr_elems) <= idl_Sensor_msgs_ChannelFloat32.values.size() ) {
			idl_Sensor_msgs_ChannelFloat32.values.erase(idl_Sensor_msgs_ChannelFloat32.values.begin()+pos, idl_Sensor_msgs_ChannelFloat32.values.begin()+pos+nbr_elems);
			return true;
		}
		return false;
	}
	inline void clearValues() { idl_Sensor_msgs_ChannelFloat32.values.clear(); }
};

} /* namespace ROSCommon_msgs */
#endif /* ROSCOMMON_MSGS_SENSOR_MSGS_CHANNELFLOAT32_CORE_H_ */
