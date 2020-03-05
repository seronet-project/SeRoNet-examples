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
#include "ROSCommon_msgs/Diagnostic_msgs_SelfTestRequestCore.hh"

// serialization/deserialization operators
//#include "ROSCommon_msgs/Diagnostic_msgs_SelfTestRequestACE.hh"

// include the hash.idl containing the hash constant
#include "hash.hh"
#include <assert.h>
#include <cstring>
#include <iostream>

// SmartUtils used in from_xml method
#include "smartKnuthMorrisPratt.hh"

#ifdef ENABLE_HASH
	#include <boost/functional/hash.hpp>
#endif

namespace ROSCommon_msgs 
{
	const char* Diagnostic_msgs_SelfTestRequestCore::getCompiledHash()
	{
		return ROSCommon_msgsIDL::REPO_HASH;
	}
	
	void Diagnostic_msgs_SelfTestRequestCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
	}
	
	void Diagnostic_msgs_SelfTestRequestCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "Diagnostic_msgs_SelfTestRequestCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
	}
	
	#ifdef ENABLE_HASH
	size_t Diagnostic_msgs_SelfTestRequestCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		
		return seed;
	}
	#endif
	
	// default constructor
	Diagnostic_msgs_SelfTestRequestCore::Diagnostic_msgs_SelfTestRequestCore()
	:	idl_Diagnostic_msgs_SelfTestRequest()
	{  
	}
	
	Diagnostic_msgs_SelfTestRequestCore::Diagnostic_msgs_SelfTestRequestCore(const DATATYPE &data)
	:	idl_Diagnostic_msgs_SelfTestRequest(data)
	{  }

	Diagnostic_msgs_SelfTestRequestCore::~Diagnostic_msgs_SelfTestRequestCore()
	{  }
	
	void Diagnostic_msgs_SelfTestRequestCore::to_ostream(std::ostream &os) const
	{
	  os << "Diagnostic_msgs_SelfTestRequest(";
	  os << ") ";
	}
	
	// convert to xml stream
	void Diagnostic_msgs_SelfTestRequestCore::to_xml(std::ostream &os, const std::string &indent) const {
	}
	
	// restore from xml stream
	void Diagnostic_msgs_SelfTestRequestCore::from_xml(std::istream &is) {
		
	}
	
	/*
	void Diagnostic_msgs_SelfTestRequestCore::get(ACE_Message_Block *&msg) const
	{
		// start with a default internal buffer size(will automatically grow if needed)
		ACE_OutputCDR cdr(ACE_DEFAULT_CDR_BUFSIZE);
		
		ROSCommon_msgsIDL::HashList hashes;
		getAllHashValues(hashes);
		cdr << static_cast<ACE_CDR::Long>(hashes.size());
		for(ROSCommon_msgsIDL::HashList::const_iterator it=hashes.begin(); it!=hashes.end(); it++)
		{
			cdr << ACE_CString(it->c_str());
		}
		
		// Here the actual serialization takes place using the OutputCDR serialization operator<<
		// (see Diagnostic_msgs_SelfTestRequestACE.hh)
		cdr << idl_Diagnostic_msgs_SelfTestRequest;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_Diagnostic_msgs_SelfTestRequest);
		cdr << data_hash;
		// std::cout << "Diagnostic_msgs_SelfTestRequestCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void Diagnostic_msgs_SelfTestRequestCore::set(const ACE_Message_Block *msg)
	{
		ACE_InputCDR cdr(msg);
	
		ROSCommon_msgsIDL::HashList hashes;
		ACE_CDR::Long hashes_size;
		cdr >> hashes_size;
		for(int i=0; i<hashes_size; ++i) 
		{
			ACE_CString hash;
			cdr >> hash;
			hashes.push_back(hash.c_str());
		}
		checkAllHashValues(hashes);
		
		// Here the actual de-serialization takes place using the InputCDR serialization operator>>
		// (see Diagnostic_msgs_SelfTestRequestACE.hh)
		cdr >> idl_Diagnostic_msgs_SelfTestRequest;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_Diagnostic_msgs_SelfTestRequest);
		assert(data_hash == own_hash);
		// std::cout << "Diagnostic_msgs_SelfTestRequestCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace ROSCommon_msgs */