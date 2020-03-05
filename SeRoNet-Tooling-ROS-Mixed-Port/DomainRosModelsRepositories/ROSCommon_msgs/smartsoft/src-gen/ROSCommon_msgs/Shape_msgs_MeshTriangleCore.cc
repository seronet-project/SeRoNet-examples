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
#include "ROSCommon_msgs/Shape_msgs_MeshTriangleCore.hh"

// serialization/deserialization operators
//#include "ROSCommon_msgs/Shape_msgs_MeshTriangleACE.hh"

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
	const char* Shape_msgs_MeshTriangleCore::getCompiledHash()
	{
		return ROSCommon_msgsIDL::REPO_HASH;
	}
	
	void Shape_msgs_MeshTriangleCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
	}
	
	void Shape_msgs_MeshTriangleCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "Shape_msgs_MeshTriangleCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
	}
	
	#ifdef ENABLE_HASH
	size_t Shape_msgs_MeshTriangleCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		std::vector<ACE_CDR::ULong>::const_iterator data_vertex_indicesIt;
		for(data_vertex_indicesIt=data.vertex_indices.begin(); data_vertex_indicesIt!=data.vertex_indices.end(); data_vertex_indicesIt++) {
			boost::hash_combine(seed, *data_vertex_indicesIt);
		}
		
		return seed;
	}
	#endif
	
	// default constructor
	Shape_msgs_MeshTriangleCore::Shape_msgs_MeshTriangleCore()
	:	idl_Shape_msgs_MeshTriangle()
	{  
		setVertex_indices(std::vector<unsigned int>());
	}
	
	Shape_msgs_MeshTriangleCore::Shape_msgs_MeshTriangleCore(const DATATYPE &data)
	:	idl_Shape_msgs_MeshTriangle(data)
	{  }

	Shape_msgs_MeshTriangleCore::~Shape_msgs_MeshTriangleCore()
	{  }
	
	void Shape_msgs_MeshTriangleCore::to_ostream(std::ostream &os) const
	{
	  os << "Shape_msgs_MeshTriangle(";
	  std::vector<unsigned int>::const_iterator vertex_indicesIt;
	  std::vector<unsigned int> vertex_indicesList = getVertex_indicesCopy();
	  for(vertex_indicesIt=vertex_indicesList.begin(); vertex_indicesIt!=vertex_indicesList.end(); vertex_indicesIt++) {
	  	os << *vertex_indicesIt << " ";
	  }
	  os << ") ";
	}
	
	// convert to xml stream
	void Shape_msgs_MeshTriangleCore::to_xml(std::ostream &os, const std::string &indent) const {
		size_t counter = 0;
		
		std::vector<unsigned int>::const_iterator vertex_indicesIt;
		std::vector<unsigned int> vertex_indicesList = getVertex_indicesCopy();
		counter = 0;
		os << indent << "<vertex_indicesList n=\"" << vertex_indicesList.size() << "\">";
		for(vertex_indicesIt=vertex_indicesList.begin(); vertex_indicesIt!=vertex_indicesList.end(); vertex_indicesIt++) {
			os << indent << "<vertex_indices i=\"" << counter++ << "\">" << *vertex_indicesIt << "</vertex_indices>";
		}
		os << indent << "</vertex_indicesList>";
	}
	
	// restore from xml stream
	void Shape_msgs_MeshTriangleCore::from_xml(std::istream &is) {
		size_t counter = 0;
		
		static const Smart::KnuthMorrisPratt kmp_vertex_indicesList("<vertex_indicesList n=\"");
		static const Smart::KnuthMorrisPratt kmp_vertex_indices("\">");
		
		if(kmp_vertex_indicesList.search(is)) {
			size_t numberElements;
			is >> numberElements;
			unsigned int vertex_indicesItem;
			std::vector<unsigned int> vertex_indicesList;
			kmp_vertex_indices.search(is);
			for(counter=0; counter<numberElements; counter++) {
				if(kmp_vertex_indices.search(is)) {
					is >> vertex_indicesItem;
					vertex_indicesList.push_back(vertex_indicesItem);
				}
			}
			setVertex_indices(vertex_indicesList);
		}
	}
	
	/*
	void Shape_msgs_MeshTriangleCore::get(ACE_Message_Block *&msg) const
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
		// (see Shape_msgs_MeshTriangleACE.hh)
		cdr << idl_Shape_msgs_MeshTriangle;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_Shape_msgs_MeshTriangle);
		cdr << data_hash;
		// std::cout << "Shape_msgs_MeshTriangleCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void Shape_msgs_MeshTriangleCore::set(const ACE_Message_Block *msg)
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
		// (see Shape_msgs_MeshTriangleACE.hh)
		cdr >> idl_Shape_msgs_MeshTriangle;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_Shape_msgs_MeshTriangle);
		assert(data_hash == own_hash);
		// std::cout << "Shape_msgs_MeshTriangleCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace ROSCommon_msgs */
