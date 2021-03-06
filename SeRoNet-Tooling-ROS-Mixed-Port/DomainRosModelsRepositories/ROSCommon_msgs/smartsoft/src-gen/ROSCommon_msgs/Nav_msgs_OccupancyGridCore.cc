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
#include "ROSCommon_msgs/Nav_msgs_OccupancyGridCore.hh"

// serialization/deserialization operators
//#include "ROSCommon_msgs/Nav_msgs_OccupancyGridACE.hh"

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
	const char* Nav_msgs_OccupancyGridCore::getCompiledHash()
	{
		return ROSCommon_msgsIDL::REPO_HASH;
	}
	
	void Nav_msgs_OccupancyGridCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
		// get hash value(s) for ROSRos_core::Std_msgs_Header(idl_Nav_msgs_OccupancyGrid.header)
		ROSRos_core::Std_msgs_Header::getAllHashValues(hashes);
		// get hash value(s) for ROSCommon_msgs::Nav_msgs_MapMetaData(idl_Nav_msgs_OccupancyGrid.info)
		ROSCommon_msgs::Nav_msgs_MapMetaData::getAllHashValues(hashes);
	}
	
	void Nav_msgs_OccupancyGridCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "Nav_msgs_OccupancyGridCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
		// check hash value(s) for ROSRos_core::Std_msgs_Header(idl_Nav_msgs_OccupancyGrid.header)
		ROSRos_core::Std_msgs_Header::checkAllHashValues(hashes);
		// check hash value(s) for ROSCommon_msgs::Nav_msgs_MapMetaData(idl_Nav_msgs_OccupancyGrid.info)
		ROSCommon_msgs::Nav_msgs_MapMetaData::checkAllHashValues(hashes);
	}
	
	#ifdef ENABLE_HASH
	size_t Nav_msgs_OccupancyGridCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		seed += ROSRos_core::Std_msgs_Header::generateDataHash(data.header);
		seed += ROSCommon_msgs::Nav_msgs_MapMetaData::generateDataHash(data.info);
		std::vector<ACE_CDR::Char>::const_iterator data_dataIt;
		for(data_dataIt=data.data.begin(); data_dataIt!=data.data.end(); data_dataIt++) {
			boost::hash_combine(seed, *data_dataIt);
		}
		
		return seed;
	}
	#endif
	
	// default constructor
	Nav_msgs_OccupancyGridCore::Nav_msgs_OccupancyGridCore()
	:	idl_Nav_msgs_OccupancyGrid()
	{  
		setHeader(ROSRos_core::Std_msgs_Header());
		setInfo(ROSCommon_msgs::Nav_msgs_MapMetaData());
		setData(std::vector<char>());
	}
	
	Nav_msgs_OccupancyGridCore::Nav_msgs_OccupancyGridCore(const DATATYPE &data)
	:	idl_Nav_msgs_OccupancyGrid(data)
	{  }

	Nav_msgs_OccupancyGridCore::~Nav_msgs_OccupancyGridCore()
	{  }
	
	void Nav_msgs_OccupancyGridCore::to_ostream(std::ostream &os) const
	{
	  os << "Nav_msgs_OccupancyGrid(";
	  getHeader().to_ostream(os);
	  getInfo().to_ostream(os);
	  std::vector<char>::const_iterator dataIt;
	  std::vector<char> dataList = getDataCopy();
	  for(dataIt=dataList.begin(); dataIt!=dataList.end(); dataIt++) {
	  	os << *dataIt << " ";
	  }
	  os << ") ";
	}
	
	// convert to xml stream
	void Nav_msgs_OccupancyGridCore::to_xml(std::ostream &os, const std::string &indent) const {
		size_t counter = 0;
		
		os << indent << "<header>";
		getHeader().to_xml(os, indent);
		os << indent << "</header>";
		os << indent << "<info>";
		getInfo().to_xml(os, indent);
		os << indent << "</info>";
		std::vector<char>::const_iterator dataIt;
		std::vector<char> dataList = getDataCopy();
		counter = 0;
		os << indent << "<dataList n=\"" << dataList.size() << "\">";
		for(dataIt=dataList.begin(); dataIt!=dataList.end(); dataIt++) {
			os << indent << "<data i=\"" << counter++ << "\">" << *dataIt << "</data>";
		}
		os << indent << "</dataList>";
	}
	
	// restore from xml stream
	void Nav_msgs_OccupancyGridCore::from_xml(std::istream &is) {
		size_t counter = 0;
		
		static const Smart::KnuthMorrisPratt kmp_header("<header>");
		static const Smart::KnuthMorrisPratt kmp_info("<info>");
		static const Smart::KnuthMorrisPratt kmp_dataList("<dataList n=\"");
		static const Smart::KnuthMorrisPratt kmp_data("\">");
		
		if(kmp_header.search(is)) {
			ROSRos_core::Std_msgs_Header headerItem;
			headerItem.from_xml(is);
			setHeader(headerItem);
		}
		if(kmp_info.search(is)) {
			ROSCommon_msgs::Nav_msgs_MapMetaData infoItem;
			infoItem.from_xml(is);
			setInfo(infoItem);
		}
		if(kmp_dataList.search(is)) {
			size_t numberElements;
			is >> numberElements;
			char dataItem;
			std::vector<char> dataList;
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
	void Nav_msgs_OccupancyGridCore::get(ACE_Message_Block *&msg) const
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
		// (see Nav_msgs_OccupancyGridACE.hh)
		cdr << idl_Nav_msgs_OccupancyGrid;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_Nav_msgs_OccupancyGrid);
		cdr << data_hash;
		// std::cout << "Nav_msgs_OccupancyGridCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void Nav_msgs_OccupancyGridCore::set(const ACE_Message_Block *msg)
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
		// (see Nav_msgs_OccupancyGridACE.hh)
		cdr >> idl_Nav_msgs_OccupancyGrid;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_Nav_msgs_OccupancyGrid);
		assert(data_hash == own_hash);
		// std::cout << "Nav_msgs_OccupancyGridCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace ROSCommon_msgs */
