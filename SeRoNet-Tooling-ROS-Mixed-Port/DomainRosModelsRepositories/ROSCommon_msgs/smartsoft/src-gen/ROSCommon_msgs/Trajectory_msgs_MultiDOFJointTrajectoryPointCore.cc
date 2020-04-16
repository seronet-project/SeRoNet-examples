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
#include "ROSCommon_msgs/Trajectory_msgs_MultiDOFJointTrajectoryPointCore.hh"

// serialization/deserialization operators
//#include "ROSCommon_msgs/Trajectory_msgs_MultiDOFJointTrajectoryPointACE.hh"

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
	const char* Trajectory_msgs_MultiDOFJointTrajectoryPointCore::getCompiledHash()
	{
		return ROSCommon_msgsIDL::REPO_HASH;
	}
	
	void Trajectory_msgs_MultiDOFJointTrajectoryPointCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
		// get hash value(s) for ROSCommon_msgs::Geometry_msgs_Transform(idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.transforms)
		ROSCommon_msgs::Geometry_msgs_Transform::getAllHashValues(hashes);
		// get hash value(s) for ROSCommon_msgs::Geometry_msgs_Twist(idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.velocities)
		ROSCommon_msgs::Geometry_msgs_Twist::getAllHashValues(hashes);
		// get hash value(s) for ROSCommon_msgs::Geometry_msgs_Twist(idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.accelerations)
		ROSCommon_msgs::Geometry_msgs_Twist::getAllHashValues(hashes);
		// get hash value(s) for CommBasicObjects::CommTimeStamp(idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.time_from_start)
		CommBasicObjects::CommTimeStamp::getAllHashValues(hashes);
	}
	
	void Trajectory_msgs_MultiDOFJointTrajectoryPointCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "Trajectory_msgs_MultiDOFJointTrajectoryPointCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
		// check hash value(s) for ROSCommon_msgs::Geometry_msgs_Transform(idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.transforms)
		ROSCommon_msgs::Geometry_msgs_Transform::checkAllHashValues(hashes);
		// check hash value(s) for ROSCommon_msgs::Geometry_msgs_Twist(idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.velocities)
		ROSCommon_msgs::Geometry_msgs_Twist::checkAllHashValues(hashes);
		// check hash value(s) for ROSCommon_msgs::Geometry_msgs_Twist(idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.accelerations)
		ROSCommon_msgs::Geometry_msgs_Twist::checkAllHashValues(hashes);
		// check hash value(s) for CommBasicObjects::CommTimeStamp(idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint.time_from_start)
		CommBasicObjects::CommTimeStamp::checkAllHashValues(hashes);
	}
	
	#ifdef ENABLE_HASH
	size_t Trajectory_msgs_MultiDOFJointTrajectoryPointCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		std::vector<ROSCommon_msgsIDL::Geometry_msgs_Transform>::const_iterator data_transformsIt;
		for(data_transformsIt=data.transforms.begin(); data_transformsIt!=data.transforms.end(); data_transformsIt++) {
			seed += ROSCommon_msgs::Geometry_msgs_Transform::generateDataHash(*data_transformsIt);
		}
		std::vector<ROSCommon_msgsIDL::Geometry_msgs_Twist>::const_iterator data_velocitiesIt;
		for(data_velocitiesIt=data.velocities.begin(); data_velocitiesIt!=data.velocities.end(); data_velocitiesIt++) {
			seed += ROSCommon_msgs::Geometry_msgs_Twist::generateDataHash(*data_velocitiesIt);
		}
		std::vector<ROSCommon_msgsIDL::Geometry_msgs_Twist>::const_iterator data_accelerationsIt;
		for(data_accelerationsIt=data.accelerations.begin(); data_accelerationsIt!=data.accelerations.end(); data_accelerationsIt++) {
			seed += ROSCommon_msgs::Geometry_msgs_Twist::generateDataHash(*data_accelerationsIt);
		}
		seed += CommBasicObjects::CommTimeStamp::generateDataHash(data.time_from_start);
		
		return seed;
	}
	#endif
	
	// default constructor
	Trajectory_msgs_MultiDOFJointTrajectoryPointCore::Trajectory_msgs_MultiDOFJointTrajectoryPointCore()
	:	idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint()
	{  
		setTransforms(std::vector<ROSCommon_msgs::Geometry_msgs_Transform>());
		setVelocities(std::vector<ROSCommon_msgs::Geometry_msgs_Twist>());
		setAccelerations(std::vector<ROSCommon_msgs::Geometry_msgs_Twist>());
		setTime_from_start(CommBasicObjects::CommTimeStamp());
	}
	
	Trajectory_msgs_MultiDOFJointTrajectoryPointCore::Trajectory_msgs_MultiDOFJointTrajectoryPointCore(const DATATYPE &data)
	:	idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint(data)
	{  }

	Trajectory_msgs_MultiDOFJointTrajectoryPointCore::~Trajectory_msgs_MultiDOFJointTrajectoryPointCore()
	{  }
	
	void Trajectory_msgs_MultiDOFJointTrajectoryPointCore::to_ostream(std::ostream &os) const
	{
	  os << "Trajectory_msgs_MultiDOFJointTrajectoryPoint(";
	  std::vector<ROSCommon_msgs::Geometry_msgs_Transform>::const_iterator transformsIt;
	  std::vector<ROSCommon_msgs::Geometry_msgs_Transform> transformsList = getTransformsCopy();
	  for(transformsIt=transformsList.begin(); transformsIt!=transformsList.end(); transformsIt++) {
	  	transformsIt->to_ostream(os);
	  }
	  std::vector<ROSCommon_msgs::Geometry_msgs_Twist>::const_iterator velocitiesIt;
	  std::vector<ROSCommon_msgs::Geometry_msgs_Twist> velocitiesList = getVelocitiesCopy();
	  for(velocitiesIt=velocitiesList.begin(); velocitiesIt!=velocitiesList.end(); velocitiesIt++) {
	  	velocitiesIt->to_ostream(os);
	  }
	  std::vector<ROSCommon_msgs::Geometry_msgs_Twist>::const_iterator accelerationsIt;
	  std::vector<ROSCommon_msgs::Geometry_msgs_Twist> accelerationsList = getAccelerationsCopy();
	  for(accelerationsIt=accelerationsList.begin(); accelerationsIt!=accelerationsList.end(); accelerationsIt++) {
	  	accelerationsIt->to_ostream(os);
	  }
	  getTime_from_start().to_ostream(os);
	  os << ") ";
	}
	
	// convert to xml stream
	void Trajectory_msgs_MultiDOFJointTrajectoryPointCore::to_xml(std::ostream &os, const std::string &indent) const {
		size_t counter = 0;
		
		std::vector<ROSCommon_msgs::Geometry_msgs_Transform>::const_iterator transformsIt;
		std::vector<ROSCommon_msgs::Geometry_msgs_Transform> transformsList = getTransformsCopy();
		counter = 0;
		os << indent << "<transformsList n=\"" << transformsList.size() << "\">";
		for(transformsIt=transformsList.begin(); transformsIt!=transformsList.end(); transformsIt++) {
			os << indent << "<transforms i=\"" << counter++ << "\">";
			transformsIt->to_xml(os, indent);
			os << indent << "</transforms>";
		}
		os << indent << "</transformsList>";
		std::vector<ROSCommon_msgs::Geometry_msgs_Twist>::const_iterator velocitiesIt;
		std::vector<ROSCommon_msgs::Geometry_msgs_Twist> velocitiesList = getVelocitiesCopy();
		counter = 0;
		os << indent << "<velocitiesList n=\"" << velocitiesList.size() << "\">";
		for(velocitiesIt=velocitiesList.begin(); velocitiesIt!=velocitiesList.end(); velocitiesIt++) {
			os << indent << "<velocities i=\"" << counter++ << "\">";
			velocitiesIt->to_xml(os, indent);
			os << indent << "</velocities>";
		}
		os << indent << "</velocitiesList>";
		std::vector<ROSCommon_msgs::Geometry_msgs_Twist>::const_iterator accelerationsIt;
		std::vector<ROSCommon_msgs::Geometry_msgs_Twist> accelerationsList = getAccelerationsCopy();
		counter = 0;
		os << indent << "<accelerationsList n=\"" << accelerationsList.size() << "\">";
		for(accelerationsIt=accelerationsList.begin(); accelerationsIt!=accelerationsList.end(); accelerationsIt++) {
			os << indent << "<accelerations i=\"" << counter++ << "\">";
			accelerationsIt->to_xml(os, indent);
			os << indent << "</accelerations>";
		}
		os << indent << "</accelerationsList>";
		os << indent << "<time_from_start>";
		getTime_from_start().to_xml(os, indent);
		os << indent << "</time_from_start>";
	}
	
	// restore from xml stream
	void Trajectory_msgs_MultiDOFJointTrajectoryPointCore::from_xml(std::istream &is) {
		size_t counter = 0;
		
		static const Smart::KnuthMorrisPratt kmp_transformsList("<transformsList n=\"");
		static const Smart::KnuthMorrisPratt kmp_transforms("\">");
		static const Smart::KnuthMorrisPratt kmp_velocitiesList("<velocitiesList n=\"");
		static const Smart::KnuthMorrisPratt kmp_velocities("\">");
		static const Smart::KnuthMorrisPratt kmp_accelerationsList("<accelerationsList n=\"");
		static const Smart::KnuthMorrisPratt kmp_accelerations("\">");
		static const Smart::KnuthMorrisPratt kmp_time_from_start("<time_from_start>");
		
		if(kmp_transformsList.search(is)) {
			size_t numberElements;
			is >> numberElements;
			ROSCommon_msgs::Geometry_msgs_Transform transformsItem;
			std::vector<ROSCommon_msgs::Geometry_msgs_Transform> transformsList;
			kmp_transforms.search(is);
			for(counter=0; counter<numberElements; counter++) {
				if(kmp_transforms.search(is)) {
					transformsItem.from_xml(is);
					transformsList.push_back(transformsItem);
				}
			}
			setTransforms(transformsList);
		}
		if(kmp_velocitiesList.search(is)) {
			size_t numberElements;
			is >> numberElements;
			ROSCommon_msgs::Geometry_msgs_Twist velocitiesItem;
			std::vector<ROSCommon_msgs::Geometry_msgs_Twist> velocitiesList;
			kmp_velocities.search(is);
			for(counter=0; counter<numberElements; counter++) {
				if(kmp_velocities.search(is)) {
					velocitiesItem.from_xml(is);
					velocitiesList.push_back(velocitiesItem);
				}
			}
			setVelocities(velocitiesList);
		}
		if(kmp_accelerationsList.search(is)) {
			size_t numberElements;
			is >> numberElements;
			ROSCommon_msgs::Geometry_msgs_Twist accelerationsItem;
			std::vector<ROSCommon_msgs::Geometry_msgs_Twist> accelerationsList;
			kmp_accelerations.search(is);
			for(counter=0; counter<numberElements; counter++) {
				if(kmp_accelerations.search(is)) {
					accelerationsItem.from_xml(is);
					accelerationsList.push_back(accelerationsItem);
				}
			}
			setAccelerations(accelerationsList);
		}
		if(kmp_time_from_start.search(is)) {
			CommBasicObjects::CommTimeStamp time_from_startItem;
			time_from_startItem.from_xml(is);
			setTime_from_start(time_from_startItem);
		}
	}
	
	/*
	void Trajectory_msgs_MultiDOFJointTrajectoryPointCore::get(ACE_Message_Block *&msg) const
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
		// (see Trajectory_msgs_MultiDOFJointTrajectoryPointACE.hh)
		cdr << idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint);
		cdr << data_hash;
		// std::cout << "Trajectory_msgs_MultiDOFJointTrajectoryPointCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void Trajectory_msgs_MultiDOFJointTrajectoryPointCore::set(const ACE_Message_Block *msg)
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
		// (see Trajectory_msgs_MultiDOFJointTrajectoryPointACE.hh)
		cdr >> idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_Trajectory_msgs_MultiDOFJointTrajectoryPoint);
		assert(data_hash == own_hash);
		// std::cout << "Trajectory_msgs_MultiDOFJointTrajectoryPointCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace ROSCommon_msgs */
