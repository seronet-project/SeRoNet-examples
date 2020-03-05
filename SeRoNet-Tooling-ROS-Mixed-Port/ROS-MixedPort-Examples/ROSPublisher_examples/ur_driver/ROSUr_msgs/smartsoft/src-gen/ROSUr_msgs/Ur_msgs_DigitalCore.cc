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
#include "ROSUr_msgs/Ur_msgs_DigitalCore.hh"

// serialization/deserialization operators
//#include "ROSUr_msgs/Ur_msgs_DigitalACE.hh"

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

namespace ROSUr_msgs 
{
	const char* Ur_msgs_DigitalCore::getCompiledHash()
	{
		return ROSUr_msgsIDL::REPO_HASH;
	}
	
	void Ur_msgs_DigitalCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
	}
	
	void Ur_msgs_DigitalCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "Ur_msgs_DigitalCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
	}
	
	#ifdef ENABLE_HASH
	size_t Ur_msgs_DigitalCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		boost::hash_combine(seed, data.pin);
		boost::hash_combine(seed, data.state);
		
		return seed;
	}
	#endif
	
	// default constructor
	Ur_msgs_DigitalCore::Ur_msgs_DigitalCore()
	:	idl_Ur_msgs_Digital()
	{  
		setPin(0);
		setState(false);
	}
	
	Ur_msgs_DigitalCore::Ur_msgs_DigitalCore(const DATATYPE &data)
	:	idl_Ur_msgs_Digital(data)
	{  }

	Ur_msgs_DigitalCore::~Ur_msgs_DigitalCore()
	{  }
	
	void Ur_msgs_DigitalCore::to_ostream(std::ostream &os) const
	{
	  os << "Ur_msgs_Digital(";
	  os << getPin() << " ";
	  os << getState() << " ";
	  os << ") ";
	}
	
	// convert to xml stream
	void Ur_msgs_DigitalCore::to_xml(std::ostream &os, const std::string &indent) const {
		os << indent << "<pin>" << getPin() << "</pin>";
		os << indent << "<state>" << getState() << "</state>";
	}
	
	// restore from xml stream
	void Ur_msgs_DigitalCore::from_xml(std::istream &is) {
		static const Smart::KnuthMorrisPratt kmp_pin("<pin>");
		static const Smart::KnuthMorrisPratt kmp_state("<state>");
		
		if(kmp_pin.search(is)) {
			unsigned char pinItem;
			is >> pinItem;
			setPin(pinItem);
		}
		if(kmp_state.search(is)) {
			bool stateItem;
			is >> stateItem;
			setState(stateItem);
		}
	}
	
	/*
	void Ur_msgs_DigitalCore::get(ACE_Message_Block *&msg) const
	{
		// start with a default internal buffer size(will automatically grow if needed)
		ACE_OutputCDR cdr(ACE_DEFAULT_CDR_BUFSIZE);
		
		ROSUr_msgsIDL::HashList hashes;
		getAllHashValues(hashes);
		cdr << static_cast<ACE_CDR::Long>(hashes.size());
		for(ROSUr_msgsIDL::HashList::const_iterator it=hashes.begin(); it!=hashes.end(); it++)
		{
			cdr << ACE_CString(it->c_str());
		}
		
		// Here the actual serialization takes place using the OutputCDR serialization operator<<
		// (see Ur_msgs_DigitalACE.hh)
		cdr << idl_Ur_msgs_Digital;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_Ur_msgs_Digital);
		cdr << data_hash;
		// std::cout << "Ur_msgs_DigitalCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void Ur_msgs_DigitalCore::set(const ACE_Message_Block *msg)
	{
		ACE_InputCDR cdr(msg);
	
		ROSUr_msgsIDL::HashList hashes;
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
		// (see Ur_msgs_DigitalACE.hh)
		cdr >> idl_Ur_msgs_Digital;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_Ur_msgs_Digital);
		assert(data_hash == own_hash);
		// std::cout << "Ur_msgs_DigitalCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace ROSUr_msgs */
