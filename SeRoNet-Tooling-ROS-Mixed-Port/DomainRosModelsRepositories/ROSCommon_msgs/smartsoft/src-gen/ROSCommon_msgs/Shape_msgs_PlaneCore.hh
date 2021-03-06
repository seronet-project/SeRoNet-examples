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
#ifndef ROSCOMMON_MSGS_SHAPE_MSGS_PLANE_CORE_H_
#define ROSCOMMON_MSGS_SHAPE_MSGS_PLANE_CORE_H_

#include "ROSCommon_msgs/Shape_msgs_PlaneData.hh"

#include <iostream>
#include <string>
#include <list>

namespace ROSCommon_msgs {
	
class Shape_msgs_PlaneCore {
protected:
	// data structure
	ROSCommon_msgsIDL::Shape_msgs_Plane idl_Shape_msgs_Plane;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef ROSCommon_msgsIDL::Shape_msgs_Plane DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	Shape_msgs_PlaneCore();
	Shape_msgs_PlaneCore(const DATATYPE &data);
	// default destructor
	virtual ~Shape_msgs_PlaneCore();
	
	const DATATYPE& get() const { return idl_Shape_msgs_Plane; }
	operator const DATATYPE&() const { return idl_Shape_msgs_Plane; }
	DATATYPE& set() { return idl_Shape_msgs_Plane; }

	static inline std::string identifier(void) { return "ROSCommon_msgs::Shape_msgs_Plane"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Coef
	/**
	 * Getter methods for idl_Shape_msgs_Plane.coef of type vector<double>
	 */
	inline std::vector<double>& getCoefRef() { return idl_Shape_msgs_Plane.coef; }
	inline std::vector<double> getCoefCopy() const {
		return std::vector<double>(idl_Shape_msgs_Plane.coef.begin(), idl_Shape_msgs_Plane.coef.end());
	}
	inline double getCoefElemAtPos(const size_t &pos) const { return idl_Shape_msgs_Plane.coef[pos]; }
	inline size_t getCoefSize() const { return idl_Shape_msgs_Plane.coef.size(); }
	inline bool isCoefEmpty() const { return idl_Shape_msgs_Plane.coef.empty(); }
	/**
	 * Setter methods for idl_Shape_msgs_Plane.coef of type vector<double>
	 */
	inline Shape_msgs_PlaneCore& setCoef(const std::vector<double> &coef) { idl_Shape_msgs_Plane.coef = coef; return *this; }
	inline bool setCoefElemAtPos(const size_t &pos, const double &elem) {
		if(pos < idl_Shape_msgs_Plane.coef.size()) {
			idl_Shape_msgs_Plane.coef[pos] = elem;
			return true;
		}
		return false;
	}
	inline bool insertCoefVectorAtPos(const size_t &pos, const std::vector<double> &data) {
		if(pos < idl_Shape_msgs_Plane.coef.size()) {
			idl_Shape_msgs_Plane.coef.insert(idl_Shape_msgs_Plane.coef.begin()+pos, data.begin(), data.end());
			return true;
		}
		return false;
	}
	inline void resizeCoef(const size_t &size) { idl_Shape_msgs_Plane.coef.resize(size); }
	inline bool eraseCoefElemsAtPos(const size_t &pos, const size_t &nbr_elems) {
		if( (pos+nbr_elems) <= idl_Shape_msgs_Plane.coef.size() ) {
			idl_Shape_msgs_Plane.coef.erase(idl_Shape_msgs_Plane.coef.begin()+pos, idl_Shape_msgs_Plane.coef.begin()+pos+nbr_elems);
			return true;
		}
		return false;
	}
	inline void clearCoef() { idl_Shape_msgs_Plane.coef.clear(); }
};

} /* namespace ROSCommon_msgs */
#endif /* ROSCOMMON_MSGS_SHAPE_MSGS_PLANE_CORE_H_ */
