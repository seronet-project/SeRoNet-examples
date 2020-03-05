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
#ifndef ROSROS_CORE_STD_MSGS_FLOAT32MULTIARRAY_CORE_H_
#define ROSROS_CORE_STD_MSGS_FLOAT32MULTIARRAY_CORE_H_

#include "ROSRos_core/Std_msgs_Float32MultiArrayData.hh"
#include "ROSRos_core/Std_msgs_MultiArrayLayout.hh"

#include <iostream>
#include <string>
#include <list>

namespace ROSRos_core {
	
class Std_msgs_Float32MultiArrayCore {
protected:
	// data structure
	ROSRos_coreIDL::Std_msgs_Float32MultiArray idl_Std_msgs_Float32MultiArray;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef ROSRos_coreIDL::Std_msgs_Float32MultiArray DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	Std_msgs_Float32MultiArrayCore();
	Std_msgs_Float32MultiArrayCore(const DATATYPE &data);
	// default destructor
	virtual ~Std_msgs_Float32MultiArrayCore();
	
	const DATATYPE& get() const { return idl_Std_msgs_Float32MultiArray; }
	operator const DATATYPE&() const { return idl_Std_msgs_Float32MultiArray; }
	DATATYPE& set() { return idl_Std_msgs_Float32MultiArray; }

	static inline std::string identifier(void) { return "ROSRos_core::Std_msgs_Float32MultiArray"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Layout
	inline ROSRos_core::Std_msgs_MultiArrayLayout getLayout() const { return ROSRos_core::Std_msgs_MultiArrayLayout(idl_Std_msgs_Float32MultiArray.layout); }
	inline Std_msgs_Float32MultiArrayCore& setLayout(const ROSRos_core::Std_msgs_MultiArrayLayout &layout) { idl_Std_msgs_Float32MultiArray.layout = layout; return *this; }
	
	// getter and setter for element Data
	/**
	 * Getter methods for idl_Std_msgs_Float32MultiArray.data of type vector<float>
	 */
	inline std::vector<float>& getDataRef() { return idl_Std_msgs_Float32MultiArray.data; }
	inline std::vector<float> getDataCopy() const {
		return std::vector<float>(idl_Std_msgs_Float32MultiArray.data.begin(), idl_Std_msgs_Float32MultiArray.data.end());
	}
	inline float getDataElemAtPos(const size_t &pos) const { return idl_Std_msgs_Float32MultiArray.data[pos]; }
	inline size_t getDataSize() const { return idl_Std_msgs_Float32MultiArray.data.size(); }
	inline bool isDataEmpty() const { return idl_Std_msgs_Float32MultiArray.data.empty(); }
	/**
	 * Setter methods for idl_Std_msgs_Float32MultiArray.data of type vector<float>
	 */
	inline Std_msgs_Float32MultiArrayCore& setData(const std::vector<float> &data) { idl_Std_msgs_Float32MultiArray.data = data; return *this; }
	inline bool setDataElemAtPos(const size_t &pos, const float &elem) {
		if(pos < idl_Std_msgs_Float32MultiArray.data.size()) {
			idl_Std_msgs_Float32MultiArray.data[pos] = elem;
			return true;
		}
		return false;
	}
	inline bool insertDataVectorAtPos(const size_t &pos, const std::vector<float> &data) {
		if(pos < idl_Std_msgs_Float32MultiArray.data.size()) {
			idl_Std_msgs_Float32MultiArray.data.insert(idl_Std_msgs_Float32MultiArray.data.begin()+pos, data.begin(), data.end());
			return true;
		}
		return false;
	}
	inline void resizeData(const size_t &size) { idl_Std_msgs_Float32MultiArray.data.resize(size); }
	inline bool eraseDataElemsAtPos(const size_t &pos, const size_t &nbr_elems) {
		if( (pos+nbr_elems) <= idl_Std_msgs_Float32MultiArray.data.size() ) {
			idl_Std_msgs_Float32MultiArray.data.erase(idl_Std_msgs_Float32MultiArray.data.begin()+pos, idl_Std_msgs_Float32MultiArray.data.begin()+pos+nbr_elems);
			return true;
		}
		return false;
	}
	inline void clearData() { idl_Std_msgs_Float32MultiArray.data.clear(); }
};

} /* namespace ROSRos_core */
#endif /* ROSROS_CORE_STD_MSGS_FLOAT32MULTIARRAY_CORE_H_ */
