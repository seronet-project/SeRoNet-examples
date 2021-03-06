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
#include "ROSCommon_msgs/Sensor_msgs_PointCloudCore.hh"

// serialization/deserialization operators
//#include "ROSCommon_msgs/Sensor_msgs_PointCloudACE.hh"

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
	const char* Sensor_msgs_PointCloudCore::getCompiledHash()
	{
		return ROSCommon_msgsIDL::REPO_HASH;
	}
	
	void Sensor_msgs_PointCloudCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
		// get hash value(s) for ROSRos_core::Std_msgs_Header(idl_Sensor_msgs_PointCloud.header)
		ROSRos_core::Std_msgs_Header::getAllHashValues(hashes);
		// get hash value(s) for ROSCommon_msgs::Geometry_msgs_Point32(idl_Sensor_msgs_PointCloud.points)
		ROSCommon_msgs::Geometry_msgs_Point32::getAllHashValues(hashes);
		// get hash value(s) for ROSCommon_msgs::Sensor_msgs_ChannelFloat32(idl_Sensor_msgs_PointCloud.channels)
		ROSCommon_msgs::Sensor_msgs_ChannelFloat32::getAllHashValues(hashes);
	}
	
	void Sensor_msgs_PointCloudCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "Sensor_msgs_PointCloudCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
		// check hash value(s) for ROSRos_core::Std_msgs_Header(idl_Sensor_msgs_PointCloud.header)
		ROSRos_core::Std_msgs_Header::checkAllHashValues(hashes);
		// check hash value(s) for ROSCommon_msgs::Geometry_msgs_Point32(idl_Sensor_msgs_PointCloud.points)
		ROSCommon_msgs::Geometry_msgs_Point32::checkAllHashValues(hashes);
		// check hash value(s) for ROSCommon_msgs::Sensor_msgs_ChannelFloat32(idl_Sensor_msgs_PointCloud.channels)
		ROSCommon_msgs::Sensor_msgs_ChannelFloat32::checkAllHashValues(hashes);
	}
	
	#ifdef ENABLE_HASH
	size_t Sensor_msgs_PointCloudCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		seed += ROSRos_core::Std_msgs_Header::generateDataHash(data.header);
		std::vector<ROSCommon_msgsIDL::Geometry_msgs_Point32>::const_iterator data_pointsIt;
		for(data_pointsIt=data.points.begin(); data_pointsIt!=data.points.end(); data_pointsIt++) {
			seed += ROSCommon_msgs::Geometry_msgs_Point32::generateDataHash(*data_pointsIt);
		}
		std::vector<ROSCommon_msgsIDL::Sensor_msgs_ChannelFloat32>::const_iterator data_channelsIt;
		for(data_channelsIt=data.channels.begin(); data_channelsIt!=data.channels.end(); data_channelsIt++) {
			seed += ROSCommon_msgs::Sensor_msgs_ChannelFloat32::generateDataHash(*data_channelsIt);
		}
		
		return seed;
	}
	#endif
	
	// default constructor
	Sensor_msgs_PointCloudCore::Sensor_msgs_PointCloudCore()
	:	idl_Sensor_msgs_PointCloud()
	{  
		setHeader(ROSRos_core::Std_msgs_Header());
		setPoints(std::vector<ROSCommon_msgs::Geometry_msgs_Point32>());
		setChannels(std::vector<ROSCommon_msgs::Sensor_msgs_ChannelFloat32>());
	}
	
	Sensor_msgs_PointCloudCore::Sensor_msgs_PointCloudCore(const DATATYPE &data)
	:	idl_Sensor_msgs_PointCloud(data)
	{  }

	Sensor_msgs_PointCloudCore::~Sensor_msgs_PointCloudCore()
	{  }
	
	void Sensor_msgs_PointCloudCore::to_ostream(std::ostream &os) const
	{
	  os << "Sensor_msgs_PointCloud(";
	  getHeader().to_ostream(os);
	  std::vector<ROSCommon_msgs::Geometry_msgs_Point32>::const_iterator pointsIt;
	  std::vector<ROSCommon_msgs::Geometry_msgs_Point32> pointsList = getPointsCopy();
	  for(pointsIt=pointsList.begin(); pointsIt!=pointsList.end(); pointsIt++) {
	  	pointsIt->to_ostream(os);
	  }
	  std::vector<ROSCommon_msgs::Sensor_msgs_ChannelFloat32>::const_iterator channelsIt;
	  std::vector<ROSCommon_msgs::Sensor_msgs_ChannelFloat32> channelsList = getChannelsCopy();
	  for(channelsIt=channelsList.begin(); channelsIt!=channelsList.end(); channelsIt++) {
	  	channelsIt->to_ostream(os);
	  }
	  os << ") ";
	}
	
	// convert to xml stream
	void Sensor_msgs_PointCloudCore::to_xml(std::ostream &os, const std::string &indent) const {
		size_t counter = 0;
		
		os << indent << "<header>";
		getHeader().to_xml(os, indent);
		os << indent << "</header>";
		std::vector<ROSCommon_msgs::Geometry_msgs_Point32>::const_iterator pointsIt;
		std::vector<ROSCommon_msgs::Geometry_msgs_Point32> pointsList = getPointsCopy();
		counter = 0;
		os << indent << "<pointsList n=\"" << pointsList.size() << "\">";
		for(pointsIt=pointsList.begin(); pointsIt!=pointsList.end(); pointsIt++) {
			os << indent << "<points i=\"" << counter++ << "\">";
			pointsIt->to_xml(os, indent);
			os << indent << "</points>";
		}
		os << indent << "</pointsList>";
		std::vector<ROSCommon_msgs::Sensor_msgs_ChannelFloat32>::const_iterator channelsIt;
		std::vector<ROSCommon_msgs::Sensor_msgs_ChannelFloat32> channelsList = getChannelsCopy();
		counter = 0;
		os << indent << "<channelsList n=\"" << channelsList.size() << "\">";
		for(channelsIt=channelsList.begin(); channelsIt!=channelsList.end(); channelsIt++) {
			os << indent << "<channels i=\"" << counter++ << "\">";
			channelsIt->to_xml(os, indent);
			os << indent << "</channels>";
		}
		os << indent << "</channelsList>";
	}
	
	// restore from xml stream
	void Sensor_msgs_PointCloudCore::from_xml(std::istream &is) {
		size_t counter = 0;
		
		static const Smart::KnuthMorrisPratt kmp_header("<header>");
		static const Smart::KnuthMorrisPratt kmp_pointsList("<pointsList n=\"");
		static const Smart::KnuthMorrisPratt kmp_points("\">");
		static const Smart::KnuthMorrisPratt kmp_channelsList("<channelsList n=\"");
		static const Smart::KnuthMorrisPratt kmp_channels("\">");
		
		if(kmp_header.search(is)) {
			ROSRos_core::Std_msgs_Header headerItem;
			headerItem.from_xml(is);
			setHeader(headerItem);
		}
		if(kmp_pointsList.search(is)) {
			size_t numberElements;
			is >> numberElements;
			ROSCommon_msgs::Geometry_msgs_Point32 pointsItem;
			std::vector<ROSCommon_msgs::Geometry_msgs_Point32> pointsList;
			kmp_points.search(is);
			for(counter=0; counter<numberElements; counter++) {
				if(kmp_points.search(is)) {
					pointsItem.from_xml(is);
					pointsList.push_back(pointsItem);
				}
			}
			setPoints(pointsList);
		}
		if(kmp_channelsList.search(is)) {
			size_t numberElements;
			is >> numberElements;
			ROSCommon_msgs::Sensor_msgs_ChannelFloat32 channelsItem;
			std::vector<ROSCommon_msgs::Sensor_msgs_ChannelFloat32> channelsList;
			kmp_channels.search(is);
			for(counter=0; counter<numberElements; counter++) {
				if(kmp_channels.search(is)) {
					channelsItem.from_xml(is);
					channelsList.push_back(channelsItem);
				}
			}
			setChannels(channelsList);
		}
	}
	
	/*
	void Sensor_msgs_PointCloudCore::get(ACE_Message_Block *&msg) const
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
		// (see Sensor_msgs_PointCloudACE.hh)
		cdr << idl_Sensor_msgs_PointCloud;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_Sensor_msgs_PointCloud);
		cdr << data_hash;
		// std::cout << "Sensor_msgs_PointCloudCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void Sensor_msgs_PointCloudCore::set(const ACE_Message_Block *msg)
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
		// (see Sensor_msgs_PointCloudACE.hh)
		cdr >> idl_Sensor_msgs_PointCloud;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_Sensor_msgs_PointCloud);
		assert(data_hash == own_hash);
		// std::cout << "Sensor_msgs_PointCloudCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace ROSCommon_msgs */
