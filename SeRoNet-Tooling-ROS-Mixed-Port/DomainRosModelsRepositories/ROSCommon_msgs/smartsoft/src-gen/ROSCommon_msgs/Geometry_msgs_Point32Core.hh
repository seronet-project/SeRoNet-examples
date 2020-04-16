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
#ifndef ROSCOMMON_MSGS_GEOMETRY_MSGS_POINT32_CORE_H_
#define ROSCOMMON_MSGS_GEOMETRY_MSGS_POINT32_CORE_H_

#include "ROSCommon_msgs/Geometry_msgs_Point32Data.hh"

#include <iostream>
#include <string>
#include <list>

namespace ROSCommon_msgs {
	
class Geometry_msgs_Point32Core {
protected:
	// data structure
	ROSCommon_msgsIDL::Geometry_msgs_Point32 idl_Geometry_msgs_Point32;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef ROSCommon_msgsIDL::Geometry_msgs_Point32 DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	Geometry_msgs_Point32Core();
	Geometry_msgs_Point32Core(const DATATYPE &data);
	// default destructor
	virtual ~Geometry_msgs_Point32Core();
	
	const DATATYPE& get() const { return idl_Geometry_msgs_Point32; }
	operator const DATATYPE&() const { return idl_Geometry_msgs_Point32; }
	DATATYPE& set() { return idl_Geometry_msgs_Point32; }

	static inline std::string identifier(void) { return "ROSCommon_msgs::Geometry_msgs_Point32"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element X
	inline float getX() const { return idl_Geometry_msgs_Point32.x; }
	inline Geometry_msgs_Point32Core& setX(const float &x) { idl_Geometry_msgs_Point32.x = x; return *this; }
	
	// getter and setter for element Y
	inline float getY() const { return idl_Geometry_msgs_Point32.y; }
	inline Geometry_msgs_Point32Core& setY(const float &y) { idl_Geometry_msgs_Point32.y = y; return *this; }
	
	// getter and setter for element Z
	inline float getZ() const { return idl_Geometry_msgs_Point32.z; }
	inline Geometry_msgs_Point32Core& setZ(const float &z) { idl_Geometry_msgs_Point32.z = z; return *this; }
};

} /* namespace ROSCommon_msgs */
#endif /* ROSCOMMON_MSGS_GEOMETRY_MSGS_POINT32_CORE_H_ */
