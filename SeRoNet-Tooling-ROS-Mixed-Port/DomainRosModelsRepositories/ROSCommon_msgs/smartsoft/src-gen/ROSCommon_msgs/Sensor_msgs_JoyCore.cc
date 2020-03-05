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
#include "ROSCommon_msgs/Sensor_msgs_JoyCore.hh"

// serialization/deserialization operators
//#include "ROSCommon_msgs/Sensor_msgs_JoyACE.hh"

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
	const char* Sensor_msgs_JoyCore::getCompiledHash()
	{
		return ROSCommon_msgsIDL::REPO_HASH;
	}
	
	void Sensor_msgs_JoyCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
		// get hash value(s) for ROSRos_core::Std_msgs_Header(idl_Sensor_msgs_Joy.header)
		ROSRos_core::Std_msgs_Header::getAllHashValues(hashes);
	}
	
	void Sensor_msgs_JoyCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "Sensor_msgs_JoyCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
		// check hash value(s) for ROSRos_core::Std_msgs_Header(idl_Sensor_msgs_Joy.header)
		ROSRos_core::Std_msgs_Header::checkAllHashValues(hashes);
	}
	
	#ifdef ENABLE_HASH
	size_t Sensor_msgs_JoyCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		seed += ROSRos_core::Std_msgs_Header::generateDataHash(data.header);
		std::vector<ACE_CDR::Float>::const_iterator data_axesIt;
		for(data_axesIt=data.axes.begin(); data_axesIt!=data.axes.end(); data_axesIt++) {
			boost::hash_combine(seed, *data_axesIt);
		}
		std::vector<ACE_CDR::Long>::const_iterator data_buttonsIt;
		for(data_buttonsIt=data.buttons.begin(); data_buttonsIt!=data.buttons.end(); data_buttonsIt++) {
			boost::hash_combine(seed, *data_buttonsIt);
		}
		
		return seed;
	}
	#endif
	
	// default constructor
	Sensor_msgs_JoyCore::Sensor_msgs_JoyCore()
	:	idl_Sensor_msgs_Joy()
	{  
		setHeader(ROSRos_core::Std_msgs_Header());
		setAxes(std::vector<float>());
		setButtons(std::vector<int>());
	}
	
	Sensor_msgs_JoyCore::Sensor_msgs_JoyCore(const DATATYPE &data)
	:	idl_Sensor_msgs_Joy(data)
	{  }

	Sensor_msgs_JoyCore::~Sensor_msgs_JoyCore()
	{  }
	
	void Sensor_msgs_JoyCore::to_ostream(std::ostream &os) const
	{
	  os << "Sensor_msgs_Joy(";
	  getHeader().to_ostream(os);
	  std::vector<float>::const_iterator axesIt;
	  std::vector<float> axesList = getAxesCopy();
	  for(axesIt=axesList.begin(); axesIt!=axesList.end(); axesIt++) {
	  	os << *axesIt << " ";
	  }
	  std::vector<int>::const_iterator buttonsIt;
	  std::vector<int> buttonsList = getButtonsCopy();
	  for(buttonsIt=buttonsList.begin(); buttonsIt!=buttonsList.end(); buttonsIt++) {
	  	os << *buttonsIt << " ";
	  }
	  os << ") ";
	}
	
	// convert to xml stream
	void Sensor_msgs_JoyCore::to_xml(std::ostream &os, const std::string &indent) const {
		size_t counter = 0;
		
		os << indent << "<header>";
		getHeader().to_xml(os, indent);
		os << indent << "</header>";
		std::vector<float>::const_iterator axesIt;
		std::vector<float> axesList = getAxesCopy();
		counter = 0;
		os << indent << "<axesList n=\"" << axesList.size() << "\">";
		for(axesIt=axesList.begin(); axesIt!=axesList.end(); axesIt++) {
			os << indent << "<axes i=\"" << counter++ << "\">" << *axesIt << "</axes>";
		}
		os << indent << "</axesList>";
		std::vector<int>::const_iterator buttonsIt;
		std::vector<int> buttonsList = getButtonsCopy();
		counter = 0;
		os << indent << "<buttonsList n=\"" << buttonsList.size() << "\">";
		for(buttonsIt=buttonsList.begin(); buttonsIt!=buttonsList.end(); buttonsIt++) {
			os << indent << "<buttons i=\"" << counter++ << "\">" << *buttonsIt << "</buttons>";
		}
		os << indent << "</buttonsList>";
	}
	
	// restore from xml stream
	void Sensor_msgs_JoyCore::from_xml(std::istream &is) {
		size_t counter = 0;
		
		static const Smart::KnuthMorrisPratt kmp_header("<header>");
		static const Smart::KnuthMorrisPratt kmp_axesList("<axesList n=\"");
		static const Smart::KnuthMorrisPratt kmp_axes("\">");
		static const Smart::KnuthMorrisPratt kmp_buttonsList("<buttonsList n=\"");
		static const Smart::KnuthMorrisPratt kmp_buttons("\">");
		
		if(kmp_header.search(is)) {
			ROSRos_core::Std_msgs_Header headerItem;
			headerItem.from_xml(is);
			setHeader(headerItem);
		}
		if(kmp_axesList.search(is)) {
			size_t numberElements;
			is >> numberElements;
			float axesItem;
			std::vector<float> axesList;
			kmp_axes.search(is);
			for(counter=0; counter<numberElements; counter++) {
				if(kmp_axes.search(is)) {
					is >> axesItem;
					axesList.push_back(axesItem);
				}
			}
			setAxes(axesList);
		}
		if(kmp_buttonsList.search(is)) {
			size_t numberElements;
			is >> numberElements;
			int buttonsItem;
			std::vector<int> buttonsList;
			kmp_buttons.search(is);
			for(counter=0; counter<numberElements; counter++) {
				if(kmp_buttons.search(is)) {
					is >> buttonsItem;
					buttonsList.push_back(buttonsItem);
				}
			}
			setButtons(buttonsList);
		}
	}
	
	/*
	void Sensor_msgs_JoyCore::get(ACE_Message_Block *&msg) const
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
		// (see Sensor_msgs_JoyACE.hh)
		cdr << idl_Sensor_msgs_Joy;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_Sensor_msgs_Joy);
		cdr << data_hash;
		// std::cout << "Sensor_msgs_JoyCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void Sensor_msgs_JoyCore::set(const ACE_Message_Block *msg)
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
		// (see Sensor_msgs_JoyACE.hh)
		cdr >> idl_Sensor_msgs_Joy;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_Sensor_msgs_Joy);
		assert(data_hash == own_hash);
		// std::cout << "Sensor_msgs_JoyCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace ROSCommon_msgs */