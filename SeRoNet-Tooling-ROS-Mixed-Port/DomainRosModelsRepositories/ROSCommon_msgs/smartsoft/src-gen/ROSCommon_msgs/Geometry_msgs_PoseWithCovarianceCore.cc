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
#include "ROSCommon_msgs/Geometry_msgs_PoseWithCovarianceCore.hh"

// serialization/deserialization operators
//#include "ROSCommon_msgs/Geometry_msgs_PoseWithCovarianceACE.hh"

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
	const char* Geometry_msgs_PoseWithCovarianceCore::getCompiledHash()
	{
		return ROSCommon_msgsIDL::REPO_HASH;
	}
	
	void Geometry_msgs_PoseWithCovarianceCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
		// get hash value(s) for ROSCommon_msgs::Geometry_msgs_Pose(idl_Geometry_msgs_PoseWithCovariance.pose)
		ROSCommon_msgs::Geometry_msgs_Pose::getAllHashValues(hashes);
	}
	
	void Geometry_msgs_PoseWithCovarianceCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "Geometry_msgs_PoseWithCovarianceCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
		// check hash value(s) for ROSCommon_msgs::Geometry_msgs_Pose(idl_Geometry_msgs_PoseWithCovariance.pose)
		ROSCommon_msgs::Geometry_msgs_Pose::checkAllHashValues(hashes);
	}
	
	#ifdef ENABLE_HASH
	size_t Geometry_msgs_PoseWithCovarianceCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		seed += ROSCommon_msgs::Geometry_msgs_Pose::generateDataHash(data.pose);
		std::vector<ACE_CDR::Double>::const_iterator data_covarianceIt;
		for(data_covarianceIt=data.covariance.begin(); data_covarianceIt!=data.covariance.end(); data_covarianceIt++) {
			boost::hash_combine(seed, *data_covarianceIt);
		}
		
		return seed;
	}
	#endif
	
	// default constructor
	Geometry_msgs_PoseWithCovarianceCore::Geometry_msgs_PoseWithCovarianceCore()
	:	idl_Geometry_msgs_PoseWithCovariance()
	{  
		setPose(ROSCommon_msgs::Geometry_msgs_Pose());
		setCovariance(std::vector<double>());
	}
	
	Geometry_msgs_PoseWithCovarianceCore::Geometry_msgs_PoseWithCovarianceCore(const DATATYPE &data)
	:	idl_Geometry_msgs_PoseWithCovariance(data)
	{  }

	Geometry_msgs_PoseWithCovarianceCore::~Geometry_msgs_PoseWithCovarianceCore()
	{  }
	
	void Geometry_msgs_PoseWithCovarianceCore::to_ostream(std::ostream &os) const
	{
	  os << "Geometry_msgs_PoseWithCovariance(";
	  getPose().to_ostream(os);
	  std::vector<double>::const_iterator covarianceIt;
	  std::vector<double> covarianceList = getCovarianceCopy();
	  for(covarianceIt=covarianceList.begin(); covarianceIt!=covarianceList.end(); covarianceIt++) {
	  	os << *covarianceIt << " ";
	  }
	  os << ") ";
	}
	
	// convert to xml stream
	void Geometry_msgs_PoseWithCovarianceCore::to_xml(std::ostream &os, const std::string &indent) const {
		size_t counter = 0;
		
		os << indent << "<pose>";
		getPose().to_xml(os, indent);
		os << indent << "</pose>";
		std::vector<double>::const_iterator covarianceIt;
		std::vector<double> covarianceList = getCovarianceCopy();
		counter = 0;
		os << indent << "<covarianceList n=\"" << covarianceList.size() << "\">";
		for(covarianceIt=covarianceList.begin(); covarianceIt!=covarianceList.end(); covarianceIt++) {
			os << indent << "<covariance i=\"" << counter++ << "\">" << *covarianceIt << "</covariance>";
		}
		os << indent << "</covarianceList>";
	}
	
	// restore from xml stream
	void Geometry_msgs_PoseWithCovarianceCore::from_xml(std::istream &is) {
		size_t counter = 0;
		
		static const Smart::KnuthMorrisPratt kmp_pose("<pose>");
		static const Smart::KnuthMorrisPratt kmp_covarianceList("<covarianceList n=\"");
		static const Smart::KnuthMorrisPratt kmp_covariance("\">");
		
		if(kmp_pose.search(is)) {
			ROSCommon_msgs::Geometry_msgs_Pose poseItem;
			poseItem.from_xml(is);
			setPose(poseItem);
		}
		if(kmp_covarianceList.search(is)) {
			size_t numberElements;
			is >> numberElements;
			double covarianceItem;
			std::vector<double> covarianceList;
			kmp_covariance.search(is);
			for(counter=0; counter<numberElements; counter++) {
				if(kmp_covariance.search(is)) {
					is >> covarianceItem;
					covarianceList.push_back(covarianceItem);
				}
			}
			setCovariance(covarianceList);
		}
	}
	
	/*
	void Geometry_msgs_PoseWithCovarianceCore::get(ACE_Message_Block *&msg) const
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
		// (see Geometry_msgs_PoseWithCovarianceACE.hh)
		cdr << idl_Geometry_msgs_PoseWithCovariance;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_Geometry_msgs_PoseWithCovariance);
		cdr << data_hash;
		// std::cout << "Geometry_msgs_PoseWithCovarianceCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void Geometry_msgs_PoseWithCovarianceCore::set(const ACE_Message_Block *msg)
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
		// (see Geometry_msgs_PoseWithCovarianceACE.hh)
		cdr >> idl_Geometry_msgs_PoseWithCovariance;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_Geometry_msgs_PoseWithCovariance);
		assert(data_hash == own_hash);
		// std::cout << "Geometry_msgs_PoseWithCovarianceCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace ROSCommon_msgs */
