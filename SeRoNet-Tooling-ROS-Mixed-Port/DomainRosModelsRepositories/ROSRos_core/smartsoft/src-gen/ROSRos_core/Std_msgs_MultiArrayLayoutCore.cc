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
#include "ROSRos_core/Std_msgs_MultiArrayLayoutCore.hh"

// serialization/deserialization operators
//#include "ROSRos_core/Std_msgs_MultiArrayLayoutACE.hh"

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
	const char* Std_msgs_MultiArrayLayoutCore::getCompiledHash()
	{
		return ROSRos_coreIDL::REPO_HASH;
	}
	
	void Std_msgs_MultiArrayLayoutCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
		// get hash value(s) for ROSRos_core::Std_msgs_MultiArrayDimension(idl_Std_msgs_MultiArrayLayout.dim)
		ROSRos_core::Std_msgs_MultiArrayDimension::getAllHashValues(hashes);
	}
	
	void Std_msgs_MultiArrayLayoutCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "Std_msgs_MultiArrayLayoutCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
		// check hash value(s) for ROSRos_core::Std_msgs_MultiArrayDimension(idl_Std_msgs_MultiArrayLayout.dim)
		ROSRos_core::Std_msgs_MultiArrayDimension::checkAllHashValues(hashes);
	}
	
	#ifdef ENABLE_HASH
	size_t Std_msgs_MultiArrayLayoutCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		std::vector<ROSRos_coreIDL::Std_msgs_MultiArrayDimension>::const_iterator data_dimIt;
		for(data_dimIt=data.dim.begin(); data_dimIt!=data.dim.end(); data_dimIt++) {
			seed += ROSRos_core::Std_msgs_MultiArrayDimension::generateDataHash(*data_dimIt);
		}
		boost::hash_combine(seed, data.data_offset);
		
		return seed;
	}
	#endif
	
	// default constructor
	Std_msgs_MultiArrayLayoutCore::Std_msgs_MultiArrayLayoutCore()
	:	idl_Std_msgs_MultiArrayLayout()
	{  
		setDim(std::vector<ROSRos_core::Std_msgs_MultiArrayDimension>());
		setData_offset(0);
	}
	
	Std_msgs_MultiArrayLayoutCore::Std_msgs_MultiArrayLayoutCore(const DATATYPE &data)
	:	idl_Std_msgs_MultiArrayLayout(data)
	{  }

	Std_msgs_MultiArrayLayoutCore::~Std_msgs_MultiArrayLayoutCore()
	{  }
	
	void Std_msgs_MultiArrayLayoutCore::to_ostream(std::ostream &os) const
	{
	  os << "Std_msgs_MultiArrayLayout(";
	  std::vector<ROSRos_core::Std_msgs_MultiArrayDimension>::const_iterator dimIt;
	  std::vector<ROSRos_core::Std_msgs_MultiArrayDimension> dimList = getDimCopy();
	  for(dimIt=dimList.begin(); dimIt!=dimList.end(); dimIt++) {
	  	dimIt->to_ostream(os);
	  }
	  os << getData_offset() << " ";
	  os << ") ";
	}
	
	// convert to xml stream
	void Std_msgs_MultiArrayLayoutCore::to_xml(std::ostream &os, const std::string &indent) const {
		size_t counter = 0;
		
		std::vector<ROSRos_core::Std_msgs_MultiArrayDimension>::const_iterator dimIt;
		std::vector<ROSRos_core::Std_msgs_MultiArrayDimension> dimList = getDimCopy();
		counter = 0;
		os << indent << "<dimList n=\"" << dimList.size() << "\">";
		for(dimIt=dimList.begin(); dimIt!=dimList.end(); dimIt++) {
			os << indent << "<dim i=\"" << counter++ << "\">";
			dimIt->to_xml(os, indent);
			os << indent << "</dim>";
		}
		os << indent << "</dimList>";
		os << indent << "<data_offset>" << getData_offset() << "</data_offset>";
	}
	
	// restore from xml stream
	void Std_msgs_MultiArrayLayoutCore::from_xml(std::istream &is) {
		size_t counter = 0;
		
		static const Smart::KnuthMorrisPratt kmp_dimList("<dimList n=\"");
		static const Smart::KnuthMorrisPratt kmp_dim("\">");
		static const Smart::KnuthMorrisPratt kmp_data_offset("<data_offset>");
		
		if(kmp_dimList.search(is)) {
			size_t numberElements;
			is >> numberElements;
			ROSRos_core::Std_msgs_MultiArrayDimension dimItem;
			std::vector<ROSRos_core::Std_msgs_MultiArrayDimension> dimList;
			kmp_dim.search(is);
			for(counter=0; counter<numberElements; counter++) {
				if(kmp_dim.search(is)) {
					dimItem.from_xml(is);
					dimList.push_back(dimItem);
				}
			}
			setDim(dimList);
		}
		if(kmp_data_offset.search(is)) {
			unsigned int data_offsetItem;
			is >> data_offsetItem;
			setData_offset(data_offsetItem);
		}
	}
	
	/*
	void Std_msgs_MultiArrayLayoutCore::get(ACE_Message_Block *&msg) const
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
		// (see Std_msgs_MultiArrayLayoutACE.hh)
		cdr << idl_Std_msgs_MultiArrayLayout;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_Std_msgs_MultiArrayLayout);
		cdr << data_hash;
		// std::cout << "Std_msgs_MultiArrayLayoutCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void Std_msgs_MultiArrayLayoutCore::set(const ACE_Message_Block *msg)
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
		// (see Std_msgs_MultiArrayLayoutACE.hh)
		cdr >> idl_Std_msgs_MultiArrayLayout;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_Std_msgs_MultiArrayLayout);
		assert(data_hash == own_hash);
		// std::cout << "Std_msgs_MultiArrayLayoutCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace ROSRos_core */
