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
#include "ROSRos_core/Std_msgs_StringCore.hh"

// serialization/deserialization operators
//#include "ROSRos_core/Std_msgs_StringACE.hh"

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

namespace ROSRos_core 
{
	const char* Std_msgs_StringCore::getCompiledHash()
	{
		return ROSRos_coreIDL::REPO_HASH;
	}
	
	void Std_msgs_StringCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
	}
	
	void Std_msgs_StringCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "Std_msgs_StringCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
	}
	
	#ifdef ENABLE_HASH
	size_t Std_msgs_StringCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		boost::hash_combine(seed, std::string(data.data.c_str()));
		
		return seed;
	}
	#endif
	
	// default constructor
	Std_msgs_StringCore::Std_msgs_StringCore()
	:	idl_Std_msgs_String()
	{  
		setData("");
	}
	
	Std_msgs_StringCore::Std_msgs_StringCore(const DATATYPE &data)
	:	idl_Std_msgs_String(data)
	{  }

	Std_msgs_StringCore::~Std_msgs_StringCore()
	{  }
	
	void Std_msgs_StringCore::to_ostream(std::ostream &os) const
	{
	  os << "Std_msgs_String(";
	  os << getData() << " ";
	  os << ") ";
	}
	
	// convert to xml stream
	void Std_msgs_StringCore::to_xml(std::ostream &os, const std::string &indent) const {
		os << indent << "<data>" << getData() << "</data>";
	}
	
	// restore from xml stream
	void Std_msgs_StringCore::from_xml(std::istream &is) {
		static const Smart::KnuthMorrisPratt kmp_data("<data>");
		
		if(kmp_data.search(is)) {
			std::string dataItem;
			is >> dataItem;
			setData(dataItem);
		}
	}
	
	/*
	void Std_msgs_StringCore::get(ACE_Message_Block *&msg) const
	{
		// start with a default internal buffer size(will automatically grow if needed)
		ACE_OutputCDR cdr(ACE_DEFAULT_CDR_BUFSIZE);
		
		ROSRos_coreIDL::HashList hashes;
		getAllHashValues(hashes);
		cdr << static_cast<ACE_CDR::Long>(hashes.size());
		for(ROSRos_coreIDL::HashList::const_iterator it=hashes.begin(); it!=hashes.end(); it++)
		{
			cdr << ACE_CString(it->c_str());
		}
		
		// Here the actual serialization takes place using the OutputCDR serialization operator<<
		// (see Std_msgs_StringACE.hh)
		cdr << idl_Std_msgs_String;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_Std_msgs_String);
		cdr << data_hash;
		// std::cout << "Std_msgs_StringCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void Std_msgs_StringCore::set(const ACE_Message_Block *msg)
	{
		ACE_InputCDR cdr(msg);
	
		ROSRos_coreIDL::HashList hashes;
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
		// (see Std_msgs_StringACE.hh)
		cdr >> idl_Std_msgs_String;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_Std_msgs_String);
		assert(data_hash == own_hash);
		// std::cout << "Std_msgs_StringCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace ROSRos_core */
