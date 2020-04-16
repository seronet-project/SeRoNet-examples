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
#ifndef ROSCOMMON_MSGS_NAV_MSGS_GETMAPRESPONSE_CORE_H_
#define ROSCOMMON_MSGS_NAV_MSGS_GETMAPRESPONSE_CORE_H_

#include "ROSCommon_msgs/Nav_msgs_GetMapResponseData.hh"
#include "ROSCommon_msgs/Nav_msgs_OccupancyGrid.hh"

#include <iostream>
#include <string>
#include <list>

namespace ROSCommon_msgs {
	
class Nav_msgs_GetMapResponseCore {
protected:
	// data structure
	ROSCommon_msgsIDL::Nav_msgs_GetMapResponse idl_Nav_msgs_GetMapResponse;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef ROSCommon_msgsIDL::Nav_msgs_GetMapResponse DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	Nav_msgs_GetMapResponseCore();
	Nav_msgs_GetMapResponseCore(const DATATYPE &data);
	// default destructor
	virtual ~Nav_msgs_GetMapResponseCore();
	
	const DATATYPE& get() const { return idl_Nav_msgs_GetMapResponse; }
	operator const DATATYPE&() const { return idl_Nav_msgs_GetMapResponse; }
	DATATYPE& set() { return idl_Nav_msgs_GetMapResponse; }

	static inline std::string identifier(void) { return "ROSCommon_msgs::Nav_msgs_GetMapResponse"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Map
	inline ROSCommon_msgs::Nav_msgs_OccupancyGrid getMap() const { return ROSCommon_msgs::Nav_msgs_OccupancyGrid(idl_Nav_msgs_GetMapResponse.map); }
	inline Nav_msgs_GetMapResponseCore& setMap(const ROSCommon_msgs::Nav_msgs_OccupancyGrid &map) { idl_Nav_msgs_GetMapResponse.map = map; return *this; }
};

} /* namespace ROSCommon_msgs */
#endif /* ROSCOMMON_MSGS_NAV_MSGS_GETMAPRESPONSE_CORE_H_ */
