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
#include "ROSCommon_msgs/Sensor_msgs_NavSatStatusCore.hh"

// serialization/deserialization operators
//#include "ROSCommon_msgs/Sensor_msgs_NavSatStatusACE.hh"

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
	const char* Sensor_msgs_NavSatStatusCore::getCompiledHash()
	{
		return ROSCommon_msgsIDL::REPO_HASH;
	}
	
	void Sensor_msgs_NavSatStatusCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
	}
	
	void Sensor_msgs_NavSatStatusCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "Sensor_msgs_NavSatStatusCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
	}
	
	#ifdef ENABLE_HASH
	size_t Sensor_msgs_NavSatStatusCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		boost::hash_combine(seed, data.status);
		boost::hash_combine(seed, data.service);
		
		return seed;
	}
	#endif
	
	// default constructor
	Sensor_msgs_NavSatStatusCore::Sensor_msgs_NavSatStatusCore()
	:	idl_Sensor_msgs_NavSatStatus()
	{  
		setStatus(0);
		setService(0);
	}
	
	Sensor_msgs_NavSatStatusCore::Sensor_msgs_NavSatStatusCore(const DATATYPE &data)
	:	idl_Sensor_msgs_NavSatStatus(data)
	{  }

	Sensor_msgs_NavSatStatusCore::~Sensor_msgs_NavSatStatusCore()
	{  }
	
	void Sensor_msgs_NavSatStatusCore::to_ostream(std::ostream &os) const
	{
	  os << "Sensor_msgs_NavSatStatus(";
	  os << getStatus() << " ";
	  os << getService() << " ";
	  os << ") ";
	}
	
	// convert to xml stream
	void Sensor_msgs_NavSatStatusCore::to_xml(std::ostream &os, const std::string &indent) const {
		os << indent << "<status>" << getStatus() << "</status>";
		os << indent << "<service>" << getService() << "</service>";
	}
	
	// restore from xml stream
	void Sensor_msgs_NavSatStatusCore::from_xml(std::istream &is) {
		static const Smart::KnuthMorrisPratt kmp_status("<status>");
		static const Smart::KnuthMorrisPratt kmp_service("<service>");
		
		if(kmp_status.search(is)) {
			char statusItem;
			is >> statusItem;
			setStatus(statusItem);
		}
		if(kmp_service.search(is)) {
			unsigned short serviceItem;
			is >> serviceItem;
			setService(serviceItem);
		}
	}
	
	/*
	void Sensor_msgs_NavSatStatusCore::get(ACE_Message_Block *&msg) const
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
		// (see Sensor_msgs_NavSatStatusACE.hh)
		cdr << idl_Sensor_msgs_NavSatStatus;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_Sensor_msgs_NavSatStatus);
		cdr << data_hash;
		// std::cout << "Sensor_msgs_NavSatStatusCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void Sensor_msgs_NavSatStatusCore::set(const ACE_Message_Block *msg)
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
		// (see Sensor_msgs_NavSatStatusACE.hh)
		cdr >> idl_Sensor_msgs_NavSatStatus;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_Sensor_msgs_NavSatStatus);
		assert(data_hash == own_hash);
		// std::cout << "Sensor_msgs_NavSatStatusCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace ROSCommon_msgs */
