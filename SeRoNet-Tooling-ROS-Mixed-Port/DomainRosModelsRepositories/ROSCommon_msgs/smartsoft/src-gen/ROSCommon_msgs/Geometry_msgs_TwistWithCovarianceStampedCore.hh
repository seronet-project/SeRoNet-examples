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
#ifndef ROSCOMMON_MSGS_GEOMETRY_MSGS_TWISTWITHCOVARIANCESTAMPED_CORE_H_
#define ROSCOMMON_MSGS_GEOMETRY_MSGS_TWISTWITHCOVARIANCESTAMPED_CORE_H_

#include "ROSCommon_msgs/Geometry_msgs_TwistWithCovarianceStampedData.hh"
#include "ROSCommon_msgs/Geometry_msgs_TwistWithCovariance.hh"
#include "ROSRos_core/Std_msgs_Header.hh"

#include <iostream>
#include <string>
#include <list>

namespace ROSCommon_msgs {
	
class Geometry_msgs_TwistWithCovarianceStampedCore {
protected:
	// data structure
	ROSCommon_msgsIDL::Geometry_msgs_TwistWithCovarianceStamped idl_Geometry_msgs_TwistWithCovarianceStamped;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef ROSCommon_msgsIDL::Geometry_msgs_TwistWithCovarianceStamped DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	Geometry_msgs_TwistWithCovarianceStampedCore();
	Geometry_msgs_TwistWithCovarianceStampedCore(const DATATYPE &data);
	// default destructor
	virtual ~Geometry_msgs_TwistWithCovarianceStampedCore();
	
	const DATATYPE& get() const { return idl_Geometry_msgs_TwistWithCovarianceStamped; }
	operator const DATATYPE&() const { return idl_Geometry_msgs_TwistWithCovarianceStamped; }
	DATATYPE& set() { return idl_Geometry_msgs_TwistWithCovarianceStamped; }

	static inline std::string identifier(void) { return "ROSCommon_msgs::Geometry_msgs_TwistWithCovarianceStamped"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Header
	inline ROSRos_core::Std_msgs_Header getHeader() const { return ROSRos_core::Std_msgs_Header(idl_Geometry_msgs_TwistWithCovarianceStamped.header); }
	inline Geometry_msgs_TwistWithCovarianceStampedCore& setHeader(const ROSRos_core::Std_msgs_Header &header) { idl_Geometry_msgs_TwistWithCovarianceStamped.header = header; return *this; }
	
	// getter and setter for element Twist
	inline ROSCommon_msgs::Geometry_msgs_TwistWithCovariance getTwist() const { return ROSCommon_msgs::Geometry_msgs_TwistWithCovariance(idl_Geometry_msgs_TwistWithCovarianceStamped.twist); }
	inline Geometry_msgs_TwistWithCovarianceStampedCore& setTwist(const ROSCommon_msgs::Geometry_msgs_TwistWithCovariance &twist) { idl_Geometry_msgs_TwistWithCovarianceStamped.twist = twist; return *this; }
};

} /* namespace ROSCommon_msgs */
#endif /* ROSCOMMON_MSGS_GEOMETRY_MSGS_TWISTWITHCOVARIANCESTAMPED_CORE_H_ */
