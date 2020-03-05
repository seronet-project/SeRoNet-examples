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
#ifndef ROSCOMMON_MSGS_NAV_MSGS_ODOMETRY_CORE_H_
#define ROSCOMMON_MSGS_NAV_MSGS_ODOMETRY_CORE_H_

#include "ROSCommon_msgs/Nav_msgs_OdometryData.hh"
#include "ROSCommon_msgs/Geometry_msgs_TwistWithCovariance.hh"
#include "ROSRos_core/Std_msgs_Header.hh"
#include "ROSCommon_msgs/Geometry_msgs_PoseWithCovariance.hh"

#include <iostream>
#include <string>
#include <list>

namespace ROSCommon_msgs {
	
class Nav_msgs_OdometryCore {
protected:
	// data structure
	ROSCommon_msgsIDL::Nav_msgs_Odometry idl_Nav_msgs_Odometry;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef ROSCommon_msgsIDL::Nav_msgs_Odometry DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	Nav_msgs_OdometryCore();
	Nav_msgs_OdometryCore(const DATATYPE &data);
	// default destructor
	virtual ~Nav_msgs_OdometryCore();
	
	const DATATYPE& get() const { return idl_Nav_msgs_Odometry; }
	operator const DATATYPE&() const { return idl_Nav_msgs_Odometry; }
	DATATYPE& set() { return idl_Nav_msgs_Odometry; }

	static inline std::string identifier(void) { return "ROSCommon_msgs::Nav_msgs_Odometry"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Header
	inline ROSRos_core::Std_msgs_Header getHeader() const { return ROSRos_core::Std_msgs_Header(idl_Nav_msgs_Odometry.header); }
	inline Nav_msgs_OdometryCore& setHeader(const ROSRos_core::Std_msgs_Header &header) { idl_Nav_msgs_Odometry.header = header; return *this; }
	
	// getter and setter for element Child_frame_id
	inline std::string getChild_frame_id() const { return idl_Nav_msgs_Odometry.child_frame_id; }
	inline Nav_msgs_OdometryCore& setChild_frame_id(const std::string &child_frame_id) { idl_Nav_msgs_Odometry.child_frame_id = child_frame_id; return *this; }
	
	// getter and setter for element Pose
	inline ROSCommon_msgs::Geometry_msgs_PoseWithCovariance getPose() const { return ROSCommon_msgs::Geometry_msgs_PoseWithCovariance(idl_Nav_msgs_Odometry.pose); }
	inline Nav_msgs_OdometryCore& setPose(const ROSCommon_msgs::Geometry_msgs_PoseWithCovariance &pose) { idl_Nav_msgs_Odometry.pose = pose; return *this; }
	
	// getter and setter for element Twist
	inline ROSCommon_msgs::Geometry_msgs_TwistWithCovariance getTwist() const { return ROSCommon_msgs::Geometry_msgs_TwistWithCovariance(idl_Nav_msgs_Odometry.twist); }
	inline Nav_msgs_OdometryCore& setTwist(const ROSCommon_msgs::Geometry_msgs_TwistWithCovariance &twist) { idl_Nav_msgs_Odometry.twist = twist; return *this; }
};

} /* namespace ROSCommon_msgs */
#endif /* ROSCOMMON_MSGS_NAV_MSGS_ODOMETRY_CORE_H_ */
