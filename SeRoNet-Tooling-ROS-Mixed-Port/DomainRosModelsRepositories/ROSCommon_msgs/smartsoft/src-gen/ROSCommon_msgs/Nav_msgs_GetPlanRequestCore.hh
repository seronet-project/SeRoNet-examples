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
#ifndef ROSCOMMON_MSGS_NAV_MSGS_GETPLANREQUEST_CORE_H_
#define ROSCOMMON_MSGS_NAV_MSGS_GETPLANREQUEST_CORE_H_

#include "ROSCommon_msgs/Nav_msgs_GetPlanRequestData.hh"
#include "ROSCommon_msgs/Geometry_msgs_PoseStamped.hh"

#include <iostream>
#include <string>
#include <list>

namespace ROSCommon_msgs {
	
class Nav_msgs_GetPlanRequestCore {
protected:
	// data structure
	ROSCommon_msgsIDL::Nav_msgs_GetPlanRequest idl_Nav_msgs_GetPlanRequest;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef ROSCommon_msgsIDL::Nav_msgs_GetPlanRequest DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	Nav_msgs_GetPlanRequestCore();
	Nav_msgs_GetPlanRequestCore(const DATATYPE &data);
	// default destructor
	virtual ~Nav_msgs_GetPlanRequestCore();
	
	const DATATYPE& get() const { return idl_Nav_msgs_GetPlanRequest; }
	operator const DATATYPE&() const { return idl_Nav_msgs_GetPlanRequest; }
	DATATYPE& set() { return idl_Nav_msgs_GetPlanRequest; }

	static inline std::string identifier(void) { return "ROSCommon_msgs::Nav_msgs_GetPlanRequest"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Start
	inline ROSCommon_msgs::Geometry_msgs_PoseStamped getStart() const { return ROSCommon_msgs::Geometry_msgs_PoseStamped(idl_Nav_msgs_GetPlanRequest.start); }
	inline Nav_msgs_GetPlanRequestCore& setStart(const ROSCommon_msgs::Geometry_msgs_PoseStamped &start) { idl_Nav_msgs_GetPlanRequest.start = start; return *this; }
	
	// getter and setter for element Goal
	inline ROSCommon_msgs::Geometry_msgs_PoseStamped getGoal() const { return ROSCommon_msgs::Geometry_msgs_PoseStamped(idl_Nav_msgs_GetPlanRequest.goal); }
	inline Nav_msgs_GetPlanRequestCore& setGoal(const ROSCommon_msgs::Geometry_msgs_PoseStamped &goal) { idl_Nav_msgs_GetPlanRequest.goal = goal; return *this; }
	
	// getter and setter for element Tolerance
	inline float getTolerance() const { return idl_Nav_msgs_GetPlanRequest.tolerance; }
	inline Nav_msgs_GetPlanRequestCore& setTolerance(const float &tolerance) { idl_Nav_msgs_GetPlanRequest.tolerance = tolerance; return *this; }
};

} /* namespace ROSCommon_msgs */
#endif /* ROSCOMMON_MSGS_NAV_MSGS_GETPLANREQUEST_CORE_H_ */
