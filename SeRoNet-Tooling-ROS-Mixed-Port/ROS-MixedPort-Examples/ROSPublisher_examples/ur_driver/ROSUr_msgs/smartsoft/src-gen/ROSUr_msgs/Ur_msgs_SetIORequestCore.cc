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
#include "ROSUr_msgs/Ur_msgs_SetIORequestCore.hh"

// serialization/deserialization operators
//#include "ROSUr_msgs/Ur_msgs_SetIORequestACE.hh"

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
	const char* Ur_msgs_SetIORequestCore::getCompiledHash()
	{
		return ROSUr_msgsIDL::REPO_HASH;
	}
	
	void Ur_msgs_SetIORequestCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
	}
	
	void Ur_msgs_SetIORequestCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "Ur_msgs_SetIORequestCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
	}
	
	#ifdef ENABLE_HASH
	size_t Ur_msgs_SetIORequestCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		boost::hash_combine(seed, data.FUN_SET_DIGITAL_OUT);
		boost::hash_combine(seed, data.FUN_SET_FLAG);
		boost::hash_combine(seed, data.FUN_SET_ANALOG_OUT);
		boost::hash_combine(seed, data.FUN_SET_TOOL_VOLTAGE);
		boost::hash_combine(seed, data.STATE_OFF);
		boost::hash_combine(seed, data.STATE_ON);
		boost::hash_combine(seed, data.STATE_TOOL_VOLTAGE_0V);
		boost::hash_combine(seed, data.STATE_TOOL_VOLTAGE_12V);
		boost::hash_combine(seed, data.STATE_TOOL_VOLTAGE_24V);
		boost::hash_combine(seed, data.fun);
		boost::hash_combine(seed, data.pin);
		boost::hash_combine(seed, data.state);
		
		return seed;
	}
	#endif
	
	// default constructor
	Ur_msgs_SetIORequestCore::Ur_msgs_SetIORequestCore()
	:	idl_Ur_msgs_SetIORequest()
	{  
		setFUN_SET_DIGITAL_OUT(0);
		setFUN_SET_FLAG(0);
		setFUN_SET_ANALOG_OUT(0);
		setFUN_SET_TOOL_VOLTAGE(0);
		setSTATE_OFF(0);
		setSTATE_ON(0);
		setSTATE_TOOL_VOLTAGE_0V(0);
		setSTATE_TOOL_VOLTAGE_12V(0);
		setSTATE_TOOL_VOLTAGE_24V(0);
		setFun(0);
		setPin(0);
		setState(0.0);
	}
	
	Ur_msgs_SetIORequestCore::Ur_msgs_SetIORequestCore(const DATATYPE &data)
	:	idl_Ur_msgs_SetIORequest(data)
	{  }

	Ur_msgs_SetIORequestCore::~Ur_msgs_SetIORequestCore()
	{  }
	
	void Ur_msgs_SetIORequestCore::to_ostream(std::ostream &os) const
	{
	  os << "Ur_msgs_SetIORequest(";
	  os << getFUN_SET_DIGITAL_OUT() << " ";
	  os << getFUN_SET_FLAG() << " ";
	  os << getFUN_SET_ANALOG_OUT() << " ";
	  os << getFUN_SET_TOOL_VOLTAGE() << " ";
	  os << getSTATE_OFF() << " ";
	  os << getSTATE_ON() << " ";
	  os << getSTATE_TOOL_VOLTAGE_0V() << " ";
	  os << getSTATE_TOOL_VOLTAGE_12V() << " ";
	  os << getSTATE_TOOL_VOLTAGE_24V() << " ";
	  os << getFun() << " ";
	  os << getPin() << " ";
	  os << getState() << " ";
	  os << ") ";
	}
	
	// convert to xml stream
	void Ur_msgs_SetIORequestCore::to_xml(std::ostream &os, const std::string &indent) const {
		os << indent << "<FUN_SET_DIGITAL_OUT>" << getFUN_SET_DIGITAL_OUT() << "</FUN_SET_DIGITAL_OUT>";
		os << indent << "<FUN_SET_FLAG>" << getFUN_SET_FLAG() << "</FUN_SET_FLAG>";
		os << indent << "<FUN_SET_ANALOG_OUT>" << getFUN_SET_ANALOG_OUT() << "</FUN_SET_ANALOG_OUT>";
		os << indent << "<FUN_SET_TOOL_VOLTAGE>" << getFUN_SET_TOOL_VOLTAGE() << "</FUN_SET_TOOL_VOLTAGE>";
		os << indent << "<STATE_OFF>" << getSTATE_OFF() << "</STATE_OFF>";
		os << indent << "<STATE_ON>" << getSTATE_ON() << "</STATE_ON>";
		os << indent << "<STATE_TOOL_VOLTAGE_0V>" << getSTATE_TOOL_VOLTAGE_0V() << "</STATE_TOOL_VOLTAGE_0V>";
		os << indent << "<STATE_TOOL_VOLTAGE_12V>" << getSTATE_TOOL_VOLTAGE_12V() << "</STATE_TOOL_VOLTAGE_12V>";
		os << indent << "<STATE_TOOL_VOLTAGE_24V>" << getSTATE_TOOL_VOLTAGE_24V() << "</STATE_TOOL_VOLTAGE_24V>";
		os << indent << "<fun>" << getFun() << "</fun>";
		os << indent << "<pin>" << getPin() << "</pin>";
		os << indent << "<state>" << getState() << "</state>";
	}
	
	// restore from xml stream
	void Ur_msgs_SetIORequestCore::from_xml(std::istream &is) {
		static const Smart::KnuthMorrisPratt kmp_FUN_SET_DIGITAL_OUT("<FUN_SET_DIGITAL_OUT>");
		static const Smart::KnuthMorrisPratt kmp_FUN_SET_FLAG("<FUN_SET_FLAG>");
		static const Smart::KnuthMorrisPratt kmp_FUN_SET_ANALOG_OUT("<FUN_SET_ANALOG_OUT>");
		static const Smart::KnuthMorrisPratt kmp_FUN_SET_TOOL_VOLTAGE("<FUN_SET_TOOL_VOLTAGE>");
		static const Smart::KnuthMorrisPratt kmp_STATE_OFF("<STATE_OFF>");
		static const Smart::KnuthMorrisPratt kmp_STATE_ON("<STATE_ON>");
		static const Smart::KnuthMorrisPratt kmp_STATE_TOOL_VOLTAGE_0V("<STATE_TOOL_VOLTAGE_0V>");
		static const Smart::KnuthMorrisPratt kmp_STATE_TOOL_VOLTAGE_12V("<STATE_TOOL_VOLTAGE_12V>");
		static const Smart::KnuthMorrisPratt kmp_STATE_TOOL_VOLTAGE_24V("<STATE_TOOL_VOLTAGE_24V>");
		static const Smart::KnuthMorrisPratt kmp_fun("<fun>");
		static const Smart::KnuthMorrisPratt kmp_pin("<pin>");
		static const Smart::KnuthMorrisPratt kmp_state("<state>");
		
		if(kmp_FUN_SET_DIGITAL_OUT.search(is)) {
			char FUN_SET_DIGITAL_OUTItem;
			is >> FUN_SET_DIGITAL_OUTItem;
			setFUN_SET_DIGITAL_OUT(FUN_SET_DIGITAL_OUTItem);
		}
		if(kmp_FUN_SET_FLAG.search(is)) {
			char FUN_SET_FLAGItem;
			is >> FUN_SET_FLAGItem;
			setFUN_SET_FLAG(FUN_SET_FLAGItem);
		}
		if(kmp_FUN_SET_ANALOG_OUT.search(is)) {
			char FUN_SET_ANALOG_OUTItem;
			is >> FUN_SET_ANALOG_OUTItem;
			setFUN_SET_ANALOG_OUT(FUN_SET_ANALOG_OUTItem);
		}
		if(kmp_FUN_SET_TOOL_VOLTAGE.search(is)) {
			char FUN_SET_TOOL_VOLTAGEItem;
			is >> FUN_SET_TOOL_VOLTAGEItem;
			setFUN_SET_TOOL_VOLTAGE(FUN_SET_TOOL_VOLTAGEItem);
		}
		if(kmp_STATE_OFF.search(is)) {
			char STATE_OFFItem;
			is >> STATE_OFFItem;
			setSTATE_OFF(STATE_OFFItem);
		}
		if(kmp_STATE_ON.search(is)) {
			char STATE_ONItem;
			is >> STATE_ONItem;
			setSTATE_ON(STATE_ONItem);
		}
		if(kmp_STATE_TOOL_VOLTAGE_0V.search(is)) {
			char STATE_TOOL_VOLTAGE_0VItem;
			is >> STATE_TOOL_VOLTAGE_0VItem;
			setSTATE_TOOL_VOLTAGE_0V(STATE_TOOL_VOLTAGE_0VItem);
		}
		if(kmp_STATE_TOOL_VOLTAGE_12V.search(is)) {
			char STATE_TOOL_VOLTAGE_12VItem;
			is >> STATE_TOOL_VOLTAGE_12VItem;
			setSTATE_TOOL_VOLTAGE_12V(STATE_TOOL_VOLTAGE_12VItem);
		}
		if(kmp_STATE_TOOL_VOLTAGE_24V.search(is)) {
			char STATE_TOOL_VOLTAGE_24VItem;
			is >> STATE_TOOL_VOLTAGE_24VItem;
			setSTATE_TOOL_VOLTAGE_24V(STATE_TOOL_VOLTAGE_24VItem);
		}
		if(kmp_fun.search(is)) {
			char funItem;
			is >> funItem;
			setFun(funItem);
		}
		if(kmp_pin.search(is)) {
			char pinItem;
			is >> pinItem;
			setPin(pinItem);
		}
		if(kmp_state.search(is)) {
			float stateItem;
			is >> stateItem;
			setState(stateItem);
		}
	}
	
	/*
	void Ur_msgs_SetIORequestCore::get(ACE_Message_Block *&msg) const
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
		// (see Ur_msgs_SetIORequestACE.hh)
		cdr << idl_Ur_msgs_SetIORequest;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_Ur_msgs_SetIORequest);
		cdr << data_hash;
		// std::cout << "Ur_msgs_SetIORequestCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void Ur_msgs_SetIORequestCore::set(const ACE_Message_Block *msg)
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
		// (see Ur_msgs_SetIORequestACE.hh)
		cdr >> idl_Ur_msgs_SetIORequest;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_Ur_msgs_SetIORequest);
		assert(data_hash == own_hash);
		// std::cout << "Ur_msgs_SetIORequestCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace ROSUr_msgs */