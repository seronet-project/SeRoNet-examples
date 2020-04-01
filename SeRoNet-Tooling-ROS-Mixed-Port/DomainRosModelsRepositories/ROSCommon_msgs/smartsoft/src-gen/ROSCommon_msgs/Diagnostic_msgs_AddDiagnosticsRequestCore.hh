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
#ifndef ROSCOMMON_MSGS_DIAGNOSTIC_MSGS_ADDDIAGNOSTICSREQUEST_CORE_H_
#define ROSCOMMON_MSGS_DIAGNOSTIC_MSGS_ADDDIAGNOSTICSREQUEST_CORE_H_

#include "ROSCommon_msgs/Diagnostic_msgs_AddDiagnosticsRequestData.hh"

#include <iostream>
#include <string>
#include <list>

namespace ROSCommon_msgs {
	
class Diagnostic_msgs_AddDiagnosticsRequestCore {
protected:
	// data structure
	ROSCommon_msgsIDL::Diagnostic_msgs_AddDiagnosticsRequest idl_Diagnostic_msgs_AddDiagnosticsRequest;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef ROSCommon_msgsIDL::Diagnostic_msgs_AddDiagnosticsRequest DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	Diagnostic_msgs_AddDiagnosticsRequestCore();
	Diagnostic_msgs_AddDiagnosticsRequestCore(const DATATYPE &data);
	// default destructor
	virtual ~Diagnostic_msgs_AddDiagnosticsRequestCore();
	
	const DATATYPE& get() const { return idl_Diagnostic_msgs_AddDiagnosticsRequest; }
	operator const DATATYPE&() const { return idl_Diagnostic_msgs_AddDiagnosticsRequest; }
	DATATYPE& set() { return idl_Diagnostic_msgs_AddDiagnosticsRequest; }

	static inline std::string identifier(void) { return "ROSCommon_msgs::Diagnostic_msgs_AddDiagnosticsRequest"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Load_namespace
	inline std::string getLoad_namespace() const { return idl_Diagnostic_msgs_AddDiagnosticsRequest.load_namespace; }
	inline Diagnostic_msgs_AddDiagnosticsRequestCore& setLoad_namespace(const std::string &load_namespace) { idl_Diagnostic_msgs_AddDiagnosticsRequest.load_namespace = load_namespace; return *this; }
};

} /* namespace ROSCommon_msgs */
#endif /* ROSCOMMON_MSGS_DIAGNOSTIC_MSGS_ADDDIAGNOSTICSREQUEST_CORE_H_ */