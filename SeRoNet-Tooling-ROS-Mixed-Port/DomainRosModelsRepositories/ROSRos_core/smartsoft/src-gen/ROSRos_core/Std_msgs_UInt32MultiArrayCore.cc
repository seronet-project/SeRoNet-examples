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
#include "ROSRos_core/Std_msgs_UInt32MultiArrayCore.hh"

// serialization/deserialization operators
//#include "ROSRos_core/Std_msgs_UInt32MultiArrayACE.hh"

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
	const char* Std_msgs_UInt32MultiArrayCore::getCompiledHash()
	{
		return ROSRos_coreIDL::REPO_HASH;
	}
	
	void Std_msgs_UInt32MultiArrayCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
		// get hash value(s) for ROSRos_core::Std_msgs_MultiArrayLayout(idl_Std_msgs_UInt32MultiArray.layout)
		ROSRos_core::Std_msgs_MultiArrayLayout::getAllHashValues(hashes);
	}
	
	void Std_msgs_UInt32MultiArrayCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "Std_msgs_UInt32MultiArrayCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
		// check hash value(s) for ROSRos_core::Std_msgs_MultiArrayLayout(idl_Std_msgs_UInt32MultiArray.layout)
		ROSRos_core::Std_msgs_MultiArrayLayout::checkAllHashValues(hashes);
	}
	
	#ifdef ENABLE_HASH
	size_t Std_msgs_UInt32MultiArrayCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		seed += ROSRos_core::Std_msgs_MultiArrayLayout::generateDataHash(data.layout);
		std::vector<ACE_CDR::ULong>::const_iterator data_dataIt;
		for(data_dataIt=data.data.begin(); data_dataIt!=data.data.end(); data_dataIt++) {
			boost::hash_combine(seed, *data_dataIt);
		}
		
		return seed;
	}
	#endif
	
	// default constructor
	Std_msgs_UInt32MultiArrayCore::Std_msgs_UInt32MultiArrayCore()
	:	idl_Std_msgs_UInt32MultiArray()
	{  
		setLayout(ROSRos_core::Std_msgs_MultiArrayLayout());
		setData(std::vector<unsigned int>());
	}
	
	Std_msgs_UInt32MultiArrayCore::Std_msgs_UInt32MultiArrayCore(const DATATYPE &data)
	:	idl_Std_msgs_UInt32MultiArray(data)
	{  }

	Std_msgs_UInt32MultiArrayCore::~Std_msgs_UInt32MultiArrayCore()
	{  }
	
	void Std_msgs_UInt32MultiArrayCore::to_ostream(std::ostream &os) const
	{
	  os << "Std_msgs_UInt32MultiArray(";
	  getLayout().to_ostream(os);
	  std::vector<unsigned int>::const_iterator dataIt;
	  std::vector<unsigned int> dataList = getDataCopy();
	  for(dataIt=dataList.begin(); dataIt!=dataList.end(); dataIt++) {
	  	os << *dataIt << " ";
	  }
	  os << ") ";
	}
	
	// convert to xml stream
	void Std_msgs_UInt32MultiArrayCore::to_xml(std::ostream &os, const std::string &indent) const {
		size_t counter = 0;
		
		os << indent << "<layout>";
		getLayout().to_xml(os, indent);
		os << indent << "</layout>";
		std::vector<unsigned int>::const_iterator dataIt;
		std::vector<unsigned int> dataList = getDataCopy();
		counter = 0;
		os << indent << "<dataList n=\"" << dataList.size() << "\">";
		for(dataIt=dataList.begin(); dataIt!=dataList.end(); dataIt++) {
			os << indent << "<data i=\"" << counter++ << "\">" << *dataIt << "</data>";
		}
		os << indent << "</dataList>";
	}
	
	// restore from xml stream
	void Std_msgs_UInt32MultiArrayCore::from_xml(std::istream &is) {
		size_t counter = 0;
		
		static const Smart::KnuthMorrisPratt kmp_layout("<layout>");
		static const Smart::KnuthMorrisPratt kmp_dataList("<dataList n=\"");
		static const Smart::KnuthMorrisPratt kmp_data("\">");
		
		if(kmp_layout.search(is)) {
			ROSRos_core::Std_msgs_MultiArrayLayout layoutItem;
			layoutItem.from_xml(is);
			setLayout(layoutItem);
		}
		if(kmp_dataList.search(is)) {
			size_t numberElements;
			is >> numberElements;
			unsigned int dataItem;
			std::vector<unsigned int> dataList;
			kmp_data.search(is);
			for(counter=0; counter<numberElements; counter++) {
				if(kmp_data.search(is)) {
					is >> dataItem;
					dataList.push_back(dataItem);
				}
			}
			setData(dataList);
		}
	}
	
	/*
	void Std_msgs_UInt32MultiArrayCore::get(ACE_Message_Block *&msg) const
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
		// (see Std_msgs_UInt32MultiArrayACE.hh)
		cdr << idl_Std_msgs_UInt32MultiArray;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_Std_msgs_UInt32MultiArray);
		cdr << data_hash;
		// std::cout << "Std_msgs_UInt32MultiArrayCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void Std_msgs_UInt32MultiArrayCore::set(const ACE_Message_Block *msg)
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
		// (see Std_msgs_UInt32MultiArrayACE.hh)
		cdr >> idl_Std_msgs_UInt32MultiArray;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_Std_msgs_UInt32MultiArray);
		assert(data_hash == own_hash);
		// std::cout << "Std_msgs_UInt32MultiArrayCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace ROSRos_core */
