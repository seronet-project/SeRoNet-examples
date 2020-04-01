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
#ifndef ROSCOMMON_MSGS_VISUALIZATION_MSGS_IMAGEMARKER_CORE_H_
#define ROSCOMMON_MSGS_VISUALIZATION_MSGS_IMAGEMARKER_CORE_H_

#include "ROSCommon_msgs/Visualization_msgs_ImageMarkerData.hh"
#include "CommBasicObjects/CommTimeStamp.hh"
#include "ROSRos_core/Std_msgs_ColorRGBA.hh"
#include "ROSRos_core/Std_msgs_Header.hh"
#include "ROSCommon_msgs/Geometry_msgs_Point.hh"

#include <iostream>
#include <string>
#include <list>

namespace ROSCommon_msgs {
	
class Visualization_msgs_ImageMarkerCore {
protected:
	// data structure
	ROSCommon_msgsIDL::Visualization_msgs_ImageMarker idl_Visualization_msgs_ImageMarker;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef ROSCommon_msgsIDL::Visualization_msgs_ImageMarker DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	Visualization_msgs_ImageMarkerCore();
	Visualization_msgs_ImageMarkerCore(const DATATYPE &data);
	// default destructor
	virtual ~Visualization_msgs_ImageMarkerCore();
	
	const DATATYPE& get() const { return idl_Visualization_msgs_ImageMarker; }
	operator const DATATYPE&() const { return idl_Visualization_msgs_ImageMarker; }
	DATATYPE& set() { return idl_Visualization_msgs_ImageMarker; }

	static inline std::string identifier(void) { return "ROSCommon_msgs::Visualization_msgs_ImageMarker"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Header
	inline ROSRos_core::Std_msgs_Header getHeader() const { return ROSRos_core::Std_msgs_Header(idl_Visualization_msgs_ImageMarker.header); }
	inline Visualization_msgs_ImageMarkerCore& setHeader(const ROSRos_core::Std_msgs_Header &header) { idl_Visualization_msgs_ImageMarker.header = header; return *this; }
	
	// getter and setter for element Ns
	inline std::string getNs() const { return idl_Visualization_msgs_ImageMarker.ns; }
	inline Visualization_msgs_ImageMarkerCore& setNs(const std::string &ns) { idl_Visualization_msgs_ImageMarker.ns = ns; return *this; }
	
	// getter and setter for element Id
	inline int getId() const { return idl_Visualization_msgs_ImageMarker.id; }
	inline Visualization_msgs_ImageMarkerCore& setId(const int &id) { idl_Visualization_msgs_ImageMarker.id = id; return *this; }
	
	// getter and setter for element Type
	inline int getType() const { return idl_Visualization_msgs_ImageMarker.type; }
	inline Visualization_msgs_ImageMarkerCore& setType(const int &type) { idl_Visualization_msgs_ImageMarker.type = type; return *this; }
	
	// getter and setter for element Action
	inline int getAction() const { return idl_Visualization_msgs_ImageMarker.action; }
	inline Visualization_msgs_ImageMarkerCore& setAction(const int &action) { idl_Visualization_msgs_ImageMarker.action = action; return *this; }
	
	// getter and setter for element Position
	inline ROSCommon_msgs::Geometry_msgs_Point getPosition() const { return ROSCommon_msgs::Geometry_msgs_Point(idl_Visualization_msgs_ImageMarker.position); }
	inline Visualization_msgs_ImageMarkerCore& setPosition(const ROSCommon_msgs::Geometry_msgs_Point &position) { idl_Visualization_msgs_ImageMarker.position = position; return *this; }
	
	// getter and setter for element Scale
	inline float getScale() const { return idl_Visualization_msgs_ImageMarker.scale; }
	inline Visualization_msgs_ImageMarkerCore& setScale(const float &scale) { idl_Visualization_msgs_ImageMarker.scale = scale; return *this; }
	
	// getter and setter for element Outline_color
	inline ROSRos_core::Std_msgs_ColorRGBA getOutline_color() const { return ROSRos_core::Std_msgs_ColorRGBA(idl_Visualization_msgs_ImageMarker.outline_color); }
	inline Visualization_msgs_ImageMarkerCore& setOutline_color(const ROSRos_core::Std_msgs_ColorRGBA &outline_color) { idl_Visualization_msgs_ImageMarker.outline_color = outline_color; return *this; }
	
	// getter and setter for element Filled
	inline unsigned char getFilled() const { return idl_Visualization_msgs_ImageMarker.filled; }
	inline Visualization_msgs_ImageMarkerCore& setFilled(const unsigned char &filled) { idl_Visualization_msgs_ImageMarker.filled = filled; return *this; }
	
	// getter and setter for element Fill_color
	inline ROSRos_core::Std_msgs_ColorRGBA getFill_color() const { return ROSRos_core::Std_msgs_ColorRGBA(idl_Visualization_msgs_ImageMarker.fill_color); }
	inline Visualization_msgs_ImageMarkerCore& setFill_color(const ROSRos_core::Std_msgs_ColorRGBA &fill_color) { idl_Visualization_msgs_ImageMarker.fill_color = fill_color; return *this; }
	
	// getter and setter for element Lifetime
	inline CommBasicObjects::CommTimeStamp getLifetime() const { return CommBasicObjects::CommTimeStamp(idl_Visualization_msgs_ImageMarker.lifetime); }
	inline Visualization_msgs_ImageMarkerCore& setLifetime(const CommBasicObjects::CommTimeStamp &lifetime) { idl_Visualization_msgs_ImageMarker.lifetime = lifetime; return *this; }
	
	// getter and setter for element Points
	/**
	 * Getter methods for element idl_Visualization_msgs_ImageMarker.points of type vector<ROSCommon_msgs::Geometry_msgs_Point>
	 */
	inline std::vector<ROSCommon_msgs::Geometry_msgs_Point> getPointsCopy() const { 
		return std::vector<ROSCommon_msgs::Geometry_msgs_Point>(idl_Visualization_msgs_ImageMarker.points.begin(), idl_Visualization_msgs_ImageMarker.points.end());
	}
	inline ROSCommon_msgs::Geometry_msgs_Point getPointsElemAtPos(const size_t &pos) const {
		return ROSCommon_msgs::Geometry_msgs_Point(idl_Visualization_msgs_ImageMarker.points[pos]);
	}
	inline size_t getPointsSize() const { return idl_Visualization_msgs_ImageMarker.points.size(); }
	inline bool isPointsEmpty() const { return idl_Visualization_msgs_ImageMarker.points.empty(); }
	/**
	 * Setter methods for idl_Visualization_msgs_ImageMarker.points of type vector<ROSCommon_msgs::Geometry_msgs_Point>
	 */
	inline Visualization_msgs_ImageMarkerCore& setPoints(const std::vector<ROSCommon_msgs::Geometry_msgs_Point> &points) { 
		idl_Visualization_msgs_ImageMarker.points.assign(points.begin(), points.end());
		return *this;
	}
	inline bool setPointsElemAtPos(const size_t &pos, const ROSCommon_msgs::Geometry_msgs_Point &elem) {
		if(pos < idl_Visualization_msgs_ImageMarker.points.size()) {
			idl_Visualization_msgs_ImageMarker.points[pos] = elem;
			return true;
		}
		return false;
	}
	inline bool insertPointsVectorAtPos(const size_t &pos, const std::vector<ROSCommon_msgs::Geometry_msgs_Point> &data) {
		if(pos < idl_Visualization_msgs_ImageMarker.points.size()) {
			idl_Visualization_msgs_ImageMarker.points.insert(idl_Visualization_msgs_ImageMarker.points.begin()+pos, data.begin(), data.end());
			return true;
		}
		return false;
	}
	inline void resizePoints(const size_t &size) { idl_Visualization_msgs_ImageMarker.points.resize(size); }
	inline bool erasePointsElemsAtPos(const size_t &pos, const size_t &nbr_elems) {
		if( (pos+nbr_elems) <= idl_Visualization_msgs_ImageMarker.points.size() ) {
			idl_Visualization_msgs_ImageMarker.points.erase(idl_Visualization_msgs_ImageMarker.points.begin()+pos, idl_Visualization_msgs_ImageMarker.points.begin()+pos+nbr_elems);
			return true;
		}
		return false;
	}
	inline void clearPoints() { idl_Visualization_msgs_ImageMarker.points.clear(); }
	
	// getter and setter for element Outline_colors
	/**
	 * Getter methods for element idl_Visualization_msgs_ImageMarker.outline_colors of type vector<ROSRos_core::Std_msgs_ColorRGBA>
	 */
	inline std::vector<ROSRos_core::Std_msgs_ColorRGBA> getOutline_colorsCopy() const { 
		return std::vector<ROSRos_core::Std_msgs_ColorRGBA>(idl_Visualization_msgs_ImageMarker.outline_colors.begin(), idl_Visualization_msgs_ImageMarker.outline_colors.end());
	}
	inline ROSRos_core::Std_msgs_ColorRGBA getOutline_colorsElemAtPos(const size_t &pos) const {
		return ROSRos_core::Std_msgs_ColorRGBA(idl_Visualization_msgs_ImageMarker.outline_colors[pos]);
	}
	inline size_t getOutline_colorsSize() const { return idl_Visualization_msgs_ImageMarker.outline_colors.size(); }
	inline bool isOutline_colorsEmpty() const { return idl_Visualization_msgs_ImageMarker.outline_colors.empty(); }
	/**
	 * Setter methods for idl_Visualization_msgs_ImageMarker.outline_colors of type vector<ROSRos_core::Std_msgs_ColorRGBA>
	 */
	inline Visualization_msgs_ImageMarkerCore& setOutline_colors(const std::vector<ROSRos_core::Std_msgs_ColorRGBA> &outline_colors) { 
		idl_Visualization_msgs_ImageMarker.outline_colors.assign(outline_colors.begin(), outline_colors.end());
		return *this;
	}
	inline bool setOutline_colorsElemAtPos(const size_t &pos, const ROSRos_core::Std_msgs_ColorRGBA &elem) {
		if(pos < idl_Visualization_msgs_ImageMarker.outline_colors.size()) {
			idl_Visualization_msgs_ImageMarker.outline_colors[pos] = elem;
			return true;
		}
		return false;
	}
	inline bool insertOutline_colorsVectorAtPos(const size_t &pos, const std::vector<ROSRos_core::Std_msgs_ColorRGBA> &data) {
		if(pos < idl_Visualization_msgs_ImageMarker.outline_colors.size()) {
			idl_Visualization_msgs_ImageMarker.outline_colors.insert(idl_Visualization_msgs_ImageMarker.outline_colors.begin()+pos, data.begin(), data.end());
			return true;
		}
		return false;
	}
	inline void resizeOutline_colors(const size_t &size) { idl_Visualization_msgs_ImageMarker.outline_colors.resize(size); }
	inline bool eraseOutline_colorsElemsAtPos(const size_t &pos, const size_t &nbr_elems) {
		if( (pos+nbr_elems) <= idl_Visualization_msgs_ImageMarker.outline_colors.size() ) {
			idl_Visualization_msgs_ImageMarker.outline_colors.erase(idl_Visualization_msgs_ImageMarker.outline_colors.begin()+pos, idl_Visualization_msgs_ImageMarker.outline_colors.begin()+pos+nbr_elems);
			return true;
		}
		return false;
	}
	inline void clearOutline_colors() { idl_Visualization_msgs_ImageMarker.outline_colors.clear(); }
};

} /* namespace ROSCommon_msgs */
#endif /* ROSCOMMON_MSGS_VISUALIZATION_MSGS_IMAGEMARKER_CORE_H_ */