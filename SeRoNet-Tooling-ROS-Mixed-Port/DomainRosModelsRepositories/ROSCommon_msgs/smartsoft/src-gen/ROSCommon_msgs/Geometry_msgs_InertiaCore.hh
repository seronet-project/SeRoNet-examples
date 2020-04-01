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
#ifndef ROSCOMMON_MSGS_GEOMETRY_MSGS_INERTIA_CORE_H_
#define ROSCOMMON_MSGS_GEOMETRY_MSGS_INERTIA_CORE_H_

#include "ROSCommon_msgs/Geometry_msgs_InertiaData.hh"
#include "ROSCommon_msgs/Geometry_msgs_Vector3.hh"

#include <iostream>
#include <string>
#include <list>

namespace ROSCommon_msgs {
	
class Geometry_msgs_InertiaCore {
protected:
	// data structure
	ROSCommon_msgsIDL::Geometry_msgs_Inertia idl_Geometry_msgs_Inertia;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef ROSCommon_msgsIDL::Geometry_msgs_Inertia DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	Geometry_msgs_InertiaCore();
	Geometry_msgs_InertiaCore(const DATATYPE &data);
	// default destructor
	virtual ~Geometry_msgs_InertiaCore();
	
	const DATATYPE& get() const { return idl_Geometry_msgs_Inertia; }
	operator const DATATYPE&() const { return idl_Geometry_msgs_Inertia; }
	DATATYPE& set() { return idl_Geometry_msgs_Inertia; }

	static inline std::string identifier(void) { return "ROSCommon_msgs::Geometry_msgs_Inertia"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element M
	inline double getM() const { return idl_Geometry_msgs_Inertia.m; }
	inline Geometry_msgs_InertiaCore& setM(const double &m) { idl_Geometry_msgs_Inertia.m = m; return *this; }
	
	// getter and setter for element Com
	inline ROSCommon_msgs::Geometry_msgs_Vector3 getCom() const { return ROSCommon_msgs::Geometry_msgs_Vector3(idl_Geometry_msgs_Inertia.com); }
	inline Geometry_msgs_InertiaCore& setCom(const ROSCommon_msgs::Geometry_msgs_Vector3 &com) { idl_Geometry_msgs_Inertia.com = com; return *this; }
	
	// getter and setter for element Ixx
	inline double getIxx() const { return idl_Geometry_msgs_Inertia.ixx; }
	inline Geometry_msgs_InertiaCore& setIxx(const double &ixx) { idl_Geometry_msgs_Inertia.ixx = ixx; return *this; }
	
	// getter and setter for element Ixy
	inline double getIxy() const { return idl_Geometry_msgs_Inertia.ixy; }
	inline Geometry_msgs_InertiaCore& setIxy(const double &ixy) { idl_Geometry_msgs_Inertia.ixy = ixy; return *this; }
	
	// getter and setter for element Ixz
	inline double getIxz() const { return idl_Geometry_msgs_Inertia.ixz; }
	inline Geometry_msgs_InertiaCore& setIxz(const double &ixz) { idl_Geometry_msgs_Inertia.ixz = ixz; return *this; }
	
	// getter and setter for element Iyy
	inline double getIyy() const { return idl_Geometry_msgs_Inertia.iyy; }
	inline Geometry_msgs_InertiaCore& setIyy(const double &iyy) { idl_Geometry_msgs_Inertia.iyy = iyy; return *this; }
	
	// getter and setter for element Iyz
	inline double getIyz() const { return idl_Geometry_msgs_Inertia.iyz; }
	inline Geometry_msgs_InertiaCore& setIyz(const double &iyz) { idl_Geometry_msgs_Inertia.iyz = iyz; return *this; }
	
	// getter and setter for element Izz
	inline double getIzz() const { return idl_Geometry_msgs_Inertia.izz; }
	inline Geometry_msgs_InertiaCore& setIzz(const double &izz) { idl_Geometry_msgs_Inertia.izz = izz; return *this; }
};

} /* namespace ROSCommon_msgs */
#endif /* ROSCOMMON_MSGS_GEOMETRY_MSGS_INERTIA_CORE_H_ */