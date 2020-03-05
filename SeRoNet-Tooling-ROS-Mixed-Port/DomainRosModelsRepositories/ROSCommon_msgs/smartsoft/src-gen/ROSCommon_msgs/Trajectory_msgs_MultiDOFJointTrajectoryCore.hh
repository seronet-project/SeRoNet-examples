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
#ifndef ROSCOMMON_MSGS_TRAJECTORY_MSGS_MULTIDOFJOINTTRAJECTORY_CORE_H_
#define ROSCOMMON_MSGS_TRAJECTORY_MSGS_MULTIDOFJOINTTRAJECTORY_CORE_H_

#include "ROSCommon_msgs/Trajectory_msgs_MultiDOFJointTrajectoryData.hh"
#include "ROSRos_core/Std_msgs_Header.hh"
#include "ROSCommon_msgs/Trajectory_msgs_MultiDOFJointTrajectoryPoint.hh"

#include <iostream>
#include <string>
#include <list>
#include <algorithm> // for using std::transform

namespace ROSCommon_msgs {
	
class Trajectory_msgs_MultiDOFJointTrajectoryCore {
protected:
	// data structure
	ROSCommon_msgsIDL::Trajectory_msgs_MultiDOFJointTrajectory idl_Trajectory_msgs_MultiDOFJointTrajectory;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef ROSCommon_msgsIDL::Trajectory_msgs_MultiDOFJointTrajectory DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	Trajectory_msgs_MultiDOFJointTrajectoryCore();
	Trajectory_msgs_MultiDOFJointTrajectoryCore(const DATATYPE &data);
	// default destructor
	virtual ~Trajectory_msgs_MultiDOFJointTrajectoryCore();
	
	const DATATYPE& get() const { return idl_Trajectory_msgs_MultiDOFJointTrajectory; }
	operator const DATATYPE&() const { return idl_Trajectory_msgs_MultiDOFJointTrajectory; }
	DATATYPE& set() { return idl_Trajectory_msgs_MultiDOFJointTrajectory; }

	static inline std::string identifier(void) { return "ROSCommon_msgs::Trajectory_msgs_MultiDOFJointTrajectory"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Header
	inline ROSRos_core::Std_msgs_Header getHeader() const { return ROSRos_core::Std_msgs_Header(idl_Trajectory_msgs_MultiDOFJointTrajectory.header); }
	inline Trajectory_msgs_MultiDOFJointTrajectoryCore& setHeader(const ROSRos_core::Std_msgs_Header &header) { idl_Trajectory_msgs_MultiDOFJointTrajectory.header = header; return *this; }
	
	// getter and setter for element Joint_names
	/**
	 * Getter methods for idl_Trajectory_msgs_MultiDOFJointTrajectory.joint_names of type vector<std::string>
	 */
	inline std::vector<std::string> getJoint_namesCopy() const {
		return std::vector<std::string>(idl_Trajectory_msgs_MultiDOFJointTrajectory.joint_names.begin(), idl_Trajectory_msgs_MultiDOFJointTrajectory.joint_names.end());
		//std::transform(idl_Trajectory_msgs_MultiDOFJointTrajectory.joint_names.begin(), idl_Trajectory_msgs_MultiDOFJointTrajectory.joint_names.end(), copy.begin(), getStlString);
		//return copy;
	}
	inline std::string getJoint_namesElemAtPos(const size_t &pos) const { return idl_Trajectory_msgs_MultiDOFJointTrajectory.joint_names[pos].c_str(); }
	inline size_t getJoint_namesSize() const { return idl_Trajectory_msgs_MultiDOFJointTrajectory.joint_names.size(); }
	inline bool isJoint_namesEmpty() const { return idl_Trajectory_msgs_MultiDOFJointTrajectory.joint_names.empty(); }
	/**
	 * Setter methods for idl_Trajectory_msgs_MultiDOFJointTrajectory.joint_names of type vector<std::string>
	 */
	inline Trajectory_msgs_MultiDOFJointTrajectoryCore& setJoint_names(const std::vector<std::string> &joint_names) { 
		idl_Trajectory_msgs_MultiDOFJointTrajectory.joint_names = joint_names;
		//resizeJoint_names(joint_names.size());
		//std::transform(joint_names.begin(), joint_names.end(), idl_Trajectory_msgs_MultiDOFJointTrajectory.joint_names.begin(), getIdlString);
		return *this;
	}
	inline bool setJoint_namesElemAtPos(const size_t &pos, const std::string &elem) {
		if(pos < idl_Trajectory_msgs_MultiDOFJointTrajectory.joint_names.size()) {
			idl_Trajectory_msgs_MultiDOFJointTrajectory.joint_names[pos] = elem.c_str();
			return true;
		}
		return false;
	}
	inline bool insertJoint_namesVectorAtPos(const size_t &pos, const std::vector<std::string> &data) {
		if(pos < idl_Trajectory_msgs_MultiDOFJointTrajectory.joint_names.size()) {
			//std::vector<ACE_CString> copy(data.size());
			//std::transform(data.begin(), data.end(), copy.begin(), getIdlString);
			idl_Trajectory_msgs_MultiDOFJointTrajectory.joint_names.insert(idl_Trajectory_msgs_MultiDOFJointTrajectory.joint_names.begin()+pos, data.begin(), data.end());
			return true;
		}
		return false;
	}
	inline void resizeJoint_names(const size_t &size) { idl_Trajectory_msgs_MultiDOFJointTrajectory.joint_names.resize(size); }
	inline bool eraseJoint_namesElemsAtPos(const size_t &pos, const size_t &nbr_elems) {
		if( (pos+nbr_elems) <= idl_Trajectory_msgs_MultiDOFJointTrajectory.joint_names.size() ) {
			idl_Trajectory_msgs_MultiDOFJointTrajectory.joint_names.erase(idl_Trajectory_msgs_MultiDOFJointTrajectory.joint_names.begin()+pos, idl_Trajectory_msgs_MultiDOFJointTrajectory.joint_names.begin()+pos+nbr_elems);
			return true;
		}
		return false;
	}
	inline void clearJoint_names() { idl_Trajectory_msgs_MultiDOFJointTrajectory.joint_names.clear(); }
	
	// getter and setter for element Points
	/**
	 * Getter methods for element idl_Trajectory_msgs_MultiDOFJointTrajectory.points of type vector<ROSCommon_msgs::Trajectory_msgs_MultiDOFJointTrajectoryPoint>
	 */
	inline std::vector<ROSCommon_msgs::Trajectory_msgs_MultiDOFJointTrajectoryPoint> getPointsCopy() const { 
		return std::vector<ROSCommon_msgs::Trajectory_msgs_MultiDOFJointTrajectoryPoint>(idl_Trajectory_msgs_MultiDOFJointTrajectory.points.begin(), idl_Trajectory_msgs_MultiDOFJointTrajectory.points.end());
	}
	inline ROSCommon_msgs::Trajectory_msgs_MultiDOFJointTrajectoryPoint getPointsElemAtPos(const size_t &pos) const {
		return ROSCommon_msgs::Trajectory_msgs_MultiDOFJointTrajectoryPoint(idl_Trajectory_msgs_MultiDOFJointTrajectory.points[pos]);
	}
	inline size_t getPointsSize() const { return idl_Trajectory_msgs_MultiDOFJointTrajectory.points.size(); }
	inline bool isPointsEmpty() const { return idl_Trajectory_msgs_MultiDOFJointTrajectory.points.empty(); }
	/**
	 * Setter methods for idl_Trajectory_msgs_MultiDOFJointTrajectory.points of type vector<ROSCommon_msgs::Trajectory_msgs_MultiDOFJointTrajectoryPoint>
	 */
	inline Trajectory_msgs_MultiDOFJointTrajectoryCore& setPoints(const std::vector<ROSCommon_msgs::Trajectory_msgs_MultiDOFJointTrajectoryPoint> &points) { 
		idl_Trajectory_msgs_MultiDOFJointTrajectory.points.assign(points.begin(), points.end());
		return *this;
	}
	inline bool setPointsElemAtPos(const size_t &pos, const ROSCommon_msgs::Trajectory_msgs_MultiDOFJointTrajectoryPoint &elem) {
		if(pos < idl_Trajectory_msgs_MultiDOFJointTrajectory.points.size()) {
			idl_Trajectory_msgs_MultiDOFJointTrajectory.points[pos] = elem;
			return true;
		}
		return false;
	}
	inline bool insertPointsVectorAtPos(const size_t &pos, const std::vector<ROSCommon_msgs::Trajectory_msgs_MultiDOFJointTrajectoryPoint> &data) {
		if(pos < idl_Trajectory_msgs_MultiDOFJointTrajectory.points.size()) {
			idl_Trajectory_msgs_MultiDOFJointTrajectory.points.insert(idl_Trajectory_msgs_MultiDOFJointTrajectory.points.begin()+pos, data.begin(), data.end());
			return true;
		}
		return false;
	}
	inline void resizePoints(const size_t &size) { idl_Trajectory_msgs_MultiDOFJointTrajectory.points.resize(size); }
	inline bool erasePointsElemsAtPos(const size_t &pos, const size_t &nbr_elems) {
		if( (pos+nbr_elems) <= idl_Trajectory_msgs_MultiDOFJointTrajectory.points.size() ) {
			idl_Trajectory_msgs_MultiDOFJointTrajectory.points.erase(idl_Trajectory_msgs_MultiDOFJointTrajectory.points.begin()+pos, idl_Trajectory_msgs_MultiDOFJointTrajectory.points.begin()+pos+nbr_elems);
			return true;
		}
		return false;
	}
	inline void clearPoints() { idl_Trajectory_msgs_MultiDOFJointTrajectory.points.clear(); }
};

} /* namespace ROSCommon_msgs */
#endif /* ROSCOMMON_MSGS_TRAJECTORY_MSGS_MULTIDOFJOINTTRAJECTORY_CORE_H_ */