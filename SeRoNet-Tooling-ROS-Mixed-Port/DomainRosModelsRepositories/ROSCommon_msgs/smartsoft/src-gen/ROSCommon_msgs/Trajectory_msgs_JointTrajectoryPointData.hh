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
#ifndef ROSCOMMON_MSGS_TRAJECTORY_MSGS_JOINTTRAJECTORYPOINT_DATA_H_
#define ROSCOMMON_MSGS_TRAJECTORY_MSGS_JOINTTRAJECTORYPOINT_DATA_H_

#include "CommBasicObjects/CommTimeStampData.hh"

#include <vector>

namespace ROSCommon_msgsIDL 
{
	typedef std::vector<double> Trajectory_msgs_JointTrajectoryPoint_positions_type;
	typedef std::vector<double> Trajectory_msgs_JointTrajectoryPoint_velocities_type;
	typedef std::vector<double> Trajectory_msgs_JointTrajectoryPoint_accelerations_type;
	typedef std::vector<double> Trajectory_msgs_JointTrajectoryPoint_effort_type;
	struct Trajectory_msgs_JointTrajectoryPoint
	{
		Trajectory_msgs_JointTrajectoryPoint_positions_type positions;
		Trajectory_msgs_JointTrajectoryPoint_velocities_type velocities;
		Trajectory_msgs_JointTrajectoryPoint_accelerations_type accelerations;
		Trajectory_msgs_JointTrajectoryPoint_effort_type effort;
		CommBasicObjectsIDL::CommTimeStamp time_from_start;
  	};
};

#endif /* ROSCOMMON_MSGS_TRAJECTORY_MSGS_JOINTTRAJECTORYPOINT_DATA_H_ */