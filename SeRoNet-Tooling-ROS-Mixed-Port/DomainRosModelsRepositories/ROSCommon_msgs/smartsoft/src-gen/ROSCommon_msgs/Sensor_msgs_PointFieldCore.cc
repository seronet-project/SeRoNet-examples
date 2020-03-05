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
#include "ROSCommon_msgs/Sensor_msgs_PointFieldCore.hh"

// serialization/deserialization operators
//#include "ROSCommon_msgs/Sensor_msgs_PointFieldACE.hh"

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
	const char* Sensor_msgs_PointFieldCore::getCompiledHash()
	{
		return ROSCommon_msgsIDL::REPO_HASH;
	}
	
	void Sensor_msgs_PointFieldCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
	}
	
	void Sensor_msgs_PointFieldCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "Sensor_msgs_PointFieldCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
	}
	
	#ifdef ENABLE_HASH
	size_t Sensor_msgs_PointFieldCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		boost::hash_combine(seed, std::string(data.name.c_str()));
		boost::hash_combine(seed, data.offset);
		boost::hash_combine(seed, data.datatype);
		boost::hash_combine(seed, data.count);
		
		return seed;
	}
	#endif
	
	// default constructor
	Sensor_msgs_PointFieldCore::Sensor_msgs_PointFieldCore()
	:	idl_Sensor_msgs_PointField()
	{  
		setName("");
		setOffset(0);
		setDatatype(0);
		setCount(0);
	}
	
	Sensor_msgs_PointFieldCore::Sensor_msgs_PointFieldCore(const DATATYPE &data)
	:	idl_Sensor_msgs_PointField(data)
	{  }

	Sensor_msgs_PointFieldCore::~Sensor_msgs_PointFieldCore()
	{  }
	
	void Sensor_msgs_PointFieldCore::to_ostream(std::ostream &os) const
	{
	  os << "Sensor_msgs_PointField(";
	  os << getName() << " ";
	  os << getOffset() << " ";
	  os << getDatatype() << " ";
	  os << getCount() << " ";
	  os << ") ";
	}
	
	// convert to xml stream
	void Sensor_msgs_PointFieldCore::to_xml(std::ostream &os, const std::string &indent) const {
		os << indent << "<name>" << getName() << "</name>";
		os << indent << "<offset>" << getOffset() << "</offset>";
		os << indent << "<datatype>" << getDatatype() << "</datatype>";
		os << indent << "<count>" << getCount() << "</count>";
	}
	
	// restore from xml stream
	void Sensor_msgs_PointFieldCore::from_xml(std::istream &is) {
		static const Smart::KnuthMorrisPratt kmp_name("<name>");
		static const Smart::KnuthMorrisPratt kmp_offset("<offset>");
		static const Smart::KnuthMorrisPratt kmp_datatype("<datatype>");
		static const Smart::KnuthMorrisPratt kmp_count("<count>");
		
		if(kmp_name.search(is)) {
			std::string nameItem;
			is >> nameItem;
			setName(nameItem);
		}
		if(kmp_offset.search(is)) {
			unsigned int offsetItem;
			is >> offsetItem;
			setOffset(offsetItem);
		}
		if(kmp_datatype.search(is)) {
			unsigned char datatypeItem;
			is >> datatypeItem;
			setDatatype(datatypeItem);
		}
		if(kmp_count.search(is)) {
			unsigned int countItem;
			is >> countItem;
			setCount(countItem);
		}
	}
	
	/*
	void Sensor_msgs_PointFieldCore::get(ACE_Message_Block *&msg) const
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
		// (see Sensor_msgs_PointFieldACE.hh)
		cdr << idl_Sensor_msgs_PointField;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_Sensor_msgs_PointField);
		cdr << data_hash;
		// std::cout << "Sensor_msgs_PointFieldCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void Sensor_msgs_PointFieldCore::set(const ACE_Message_Block *msg)
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
		// (see Sensor_msgs_PointFieldACE.hh)
		cdr >> idl_Sensor_msgs_PointField;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_Sensor_msgs_PointField);
		assert(data_hash == own_hash);
		// std::cout << "Sensor_msgs_PointFieldCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace ROSCommon_msgs */
