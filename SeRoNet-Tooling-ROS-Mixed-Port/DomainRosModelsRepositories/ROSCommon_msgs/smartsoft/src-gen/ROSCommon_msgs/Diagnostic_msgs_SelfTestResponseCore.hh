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
#ifndef ROSCOMMON_MSGS_DIAGNOSTIC_MSGS_SELFTESTRESPONSE_CORE_H_
#define ROSCOMMON_MSGS_DIAGNOSTIC_MSGS_SELFTESTRESPONSE_CORE_H_

#include "ROSCommon_msgs/Diagnostic_msgs_SelfTestResponseData.hh"
#include "ROSCommon_msgs/Diagnostic_msgs_DiagnosticStatus.hh"

#include <iostream>
#include <string>
#include <list>

namespace ROSCommon_msgs {
	
class Diagnostic_msgs_SelfTestResponseCore {
protected:
	// data structure
	ROSCommon_msgsIDL::Diagnostic_msgs_SelfTestResponse idl_Diagnostic_msgs_SelfTestResponse;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef ROSCommon_msgsIDL::Diagnostic_msgs_SelfTestResponse DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	Diagnostic_msgs_SelfTestResponseCore();
	Diagnostic_msgs_SelfTestResponseCore(const DATATYPE &data);
	// default destructor
	virtual ~Diagnostic_msgs_SelfTestResponseCore();
	
	const DATATYPE& get() const { return idl_Diagnostic_msgs_SelfTestResponse; }
	operator const DATATYPE&() const { return idl_Diagnostic_msgs_SelfTestResponse; }
	DATATYPE& set() { return idl_Diagnostic_msgs_SelfTestResponse; }

	static inline std::string identifier(void) { return "ROSCommon_msgs::Diagnostic_msgs_SelfTestResponse"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Id
	inline std::string getId() const { return idl_Diagnostic_msgs_SelfTestResponse.id; }
	inline Diagnostic_msgs_SelfTestResponseCore& setId(const std::string &id) { idl_Diagnostic_msgs_SelfTestResponse.id = id; return *this; }
	
	// getter and setter for element Passed
	inline unsigned char getPassed() const { return idl_Diagnostic_msgs_SelfTestResponse.passed; }
	inline Diagnostic_msgs_SelfTestResponseCore& setPassed(const unsigned char &passed) { idl_Diagnostic_msgs_SelfTestResponse.passed = passed; return *this; }
	
	// getter and setter for element Status
	/**
	 * Getter methods for element idl_Diagnostic_msgs_SelfTestResponse.status of type vector<ROSCommon_msgs::Diagnostic_msgs_DiagnosticStatus>
	 */
	inline std::vector<ROSCommon_msgs::Diagnostic_msgs_DiagnosticStatus> getStatusCopy() const { 
		return std::vector<ROSCommon_msgs::Diagnostic_msgs_DiagnosticStatus>(idl_Diagnostic_msgs_SelfTestResponse.status.begin(), idl_Diagnostic_msgs_SelfTestResponse.status.end());
	}
	inline ROSCommon_msgs::Diagnostic_msgs_DiagnosticStatus getStatusElemAtPos(const size_t &pos) const {
		return ROSCommon_msgs::Diagnostic_msgs_DiagnosticStatus(idl_Diagnostic_msgs_SelfTestResponse.status[pos]);
	}
	inline size_t getStatusSize() const { return idl_Diagnostic_msgs_SelfTestResponse.status.size(); }
	inline bool isStatusEmpty() const { return idl_Diagnostic_msgs_SelfTestResponse.status.empty(); }
	/**
	 * Setter methods for idl_Diagnostic_msgs_SelfTestResponse.status of type vector<ROSCommon_msgs::Diagnostic_msgs_DiagnosticStatus>
	 */
	inline Diagnostic_msgs_SelfTestResponseCore& setStatus(const std::vector<ROSCommon_msgs::Diagnostic_msgs_DiagnosticStatus> &status) { 
		idl_Diagnostic_msgs_SelfTestResponse.status.assign(status.begin(), status.end());
		return *this;
	}
	inline bool setStatusElemAtPos(const size_t &pos, const ROSCommon_msgs::Diagnostic_msgs_DiagnosticStatus &elem) {
		if(pos < idl_Diagnostic_msgs_SelfTestResponse.status.size()) {
			idl_Diagnostic_msgs_SelfTestResponse.status[pos] = elem;
			return true;
		}
		return false;
	}
	inline bool insertStatusVectorAtPos(const size_t &pos, const std::vector<ROSCommon_msgs::Diagnostic_msgs_DiagnosticStatus> &data) {
		if(pos < idl_Diagnostic_msgs_SelfTestResponse.status.size()) {
			idl_Diagnostic_msgs_SelfTestResponse.status.insert(idl_Diagnostic_msgs_SelfTestResponse.status.begin()+pos, data.begin(), data.end());
			return true;
		}
		return false;
	}
	inline void resizeStatus(const size_t &size) { idl_Diagnostic_msgs_SelfTestResponse.status.resize(size); }
	inline bool eraseStatusElemsAtPos(const size_t &pos, const size_t &nbr_elems) {
		if( (pos+nbr_elems) <= idl_Diagnostic_msgs_SelfTestResponse.status.size() ) {
			idl_Diagnostic_msgs_SelfTestResponse.status.erase(idl_Diagnostic_msgs_SelfTestResponse.status.begin()+pos, idl_Diagnostic_msgs_SelfTestResponse.status.begin()+pos+nbr_elems);
			return true;
		}
		return false;
	}
	inline void clearStatus() { idl_Diagnostic_msgs_SelfTestResponse.status.clear(); }
};

} /* namespace ROSCommon_msgs */
#endif /* ROSCOMMON_MSGS_DIAGNOSTIC_MSGS_SELFTESTRESPONSE_CORE_H_ */
