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
#ifndef ROSCOMMON_MSGS_SENSOR_MSGS_MAGNETICFIELD_CORE_H_
#define ROSCOMMON_MSGS_SENSOR_MSGS_MAGNETICFIELD_CORE_H_

#include "ROSCommon_msgs/Sensor_msgs_MagneticFieldData.hh"
#include "ROSCommon_msgs/Geometry_msgs_Vector3.hh"
#include "ROSRos_core/Std_msgs_Header.hh"

#include <iostream>
#include <string>
#include <list>

namespace ROSCommon_msgs {
	
class Sensor_msgs_MagneticFieldCore {
protected:
	// data structure
	ROSCommon_msgsIDL::Sensor_msgs_MagneticField idl_Sensor_msgs_MagneticField;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef ROSCommon_msgsIDL::Sensor_msgs_MagneticField DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	Sensor_msgs_MagneticFieldCore();
	Sensor_msgs_MagneticFieldCore(const DATATYPE &data);
	// default destructor
	virtual ~Sensor_msgs_MagneticFieldCore();
	
	const DATATYPE& get() const { return idl_Sensor_msgs_MagneticField; }
	operator const DATATYPE&() const { return idl_Sensor_msgs_MagneticField; }
	DATATYPE& set() { return idl_Sensor_msgs_MagneticField; }

	static inline std::string identifier(void) { return "ROSCommon_msgs::Sensor_msgs_MagneticField"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Header
	inline ROSRos_core::Std_msgs_Header getHeader() const { return ROSRos_core::Std_msgs_Header(idl_Sensor_msgs_MagneticField.header); }
	inline Sensor_msgs_MagneticFieldCore& setHeader(const ROSRos_core::Std_msgs_Header &header) { idl_Sensor_msgs_MagneticField.header = header; return *this; }
	
	// getter and setter for element Magnetic_field
	inline ROSCommon_msgs::Geometry_msgs_Vector3 getMagnetic_field() const { return ROSCommon_msgs::Geometry_msgs_Vector3(idl_Sensor_msgs_MagneticField.magnetic_field); }
	inline Sensor_msgs_MagneticFieldCore& setMagnetic_field(const ROSCommon_msgs::Geometry_msgs_Vector3 &magnetic_field) { idl_Sensor_msgs_MagneticField.magnetic_field = magnetic_field; return *this; }
	
	// getter and setter for element Magnetic_field_covariance
	/**
	 * Getter methods for idl_Sensor_msgs_MagneticField.magnetic_field_covariance of type vector<double>
	 */
	inline std::vector<double>& getMagnetic_field_covarianceRef() { return idl_Sensor_msgs_MagneticField.magnetic_field_covariance; }
	inline std::vector<double> getMagnetic_field_covarianceCopy() const {
		return std::vector<double>(idl_Sensor_msgs_MagneticField.magnetic_field_covariance.begin(), idl_Sensor_msgs_MagneticField.magnetic_field_covariance.end());
	}
	inline double getMagnetic_field_covarianceElemAtPos(const size_t &pos) const { return idl_Sensor_msgs_MagneticField.magnetic_field_covariance[pos]; }
	inline size_t getMagnetic_field_covarianceSize() const { return idl_Sensor_msgs_MagneticField.magnetic_field_covariance.size(); }
	inline bool isMagnetic_field_covarianceEmpty() const { return idl_Sensor_msgs_MagneticField.magnetic_field_covariance.empty(); }
	/**
	 * Setter methods for idl_Sensor_msgs_MagneticField.magnetic_field_covariance of type vector<double>
	 */
	inline Sensor_msgs_MagneticFieldCore& setMagnetic_field_covariance(const std::vector<double> &magnetic_field_covariance) { idl_Sensor_msgs_MagneticField.magnetic_field_covariance = magnetic_field_covariance; return *this; }
	inline bool setMagnetic_field_covarianceElemAtPos(const size_t &pos, const double &elem) {
		if(pos < idl_Sensor_msgs_MagneticField.magnetic_field_covariance.size()) {
			idl_Sensor_msgs_MagneticField.magnetic_field_covariance[pos] = elem;
			return true;
		}
		return false;
	}
	inline bool insertMagnetic_field_covarianceVectorAtPos(const size_t &pos, const std::vector<double> &data) {
		if(pos < idl_Sensor_msgs_MagneticField.magnetic_field_covariance.size()) {
			idl_Sensor_msgs_MagneticField.magnetic_field_covariance.insert(idl_Sensor_msgs_MagneticField.magnetic_field_covariance.begin()+pos, data.begin(), data.end());
			return true;
		}
		return false;
	}
	inline void resizeMagnetic_field_covariance(const size_t &size) { idl_Sensor_msgs_MagneticField.magnetic_field_covariance.resize(size); }
	inline bool eraseMagnetic_field_covarianceElemsAtPos(const size_t &pos, const size_t &nbr_elems) {
		if( (pos+nbr_elems) <= idl_Sensor_msgs_MagneticField.magnetic_field_covariance.size() ) {
			idl_Sensor_msgs_MagneticField.magnetic_field_covariance.erase(idl_Sensor_msgs_MagneticField.magnetic_field_covariance.begin()+pos, idl_Sensor_msgs_MagneticField.magnetic_field_covariance.begin()+pos+nbr_elems);
			return true;
		}
		return false;
	}
	inline void clearMagnetic_field_covariance() { idl_Sensor_msgs_MagneticField.magnetic_field_covariance.clear(); }
};

} /* namespace ROSCommon_msgs */
#endif /* ROSCOMMON_MSGS_SENSOR_MSGS_MAGNETICFIELD_CORE_H_ */
