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
// This file is generated once. Modify this file to your needs. 
// If you want the toolchain to re-generate this file, please 
// delete it before running the code generator.
//--------------------------------------------------------------------------

#include "ROSCommon_msgs/Trajectory_msgs_MultiDOFJointTrajectoryPoint.hh"

using namespace ROSCommon_msgs;

Trajectory_msgs_MultiDOFJointTrajectoryPoint::Trajectory_msgs_MultiDOFJointTrajectoryPoint()
:	Trajectory_msgs_MultiDOFJointTrajectoryPointCore()
{  }


/**
 * Constructor to set all values.
 * NOTE that you have to keep this constructor consistent with the model!
 * Use  at your own choice.
 *
 * The preferred way to set values for initialization is:
 *      CommRepository::MyCommObject obj;
 *      obj.setX(1).setY(2).setZ(3)...;
Trajectory_msgs_MultiDOFJointTrajectoryPoint::Trajectory_msgs_MultiDOFJointTrajectoryPoint(const std::vector<ROSCommon_msgs::Geometry_msgs_Transform> &transforms, const std::vector<ROSCommon_msgs::Geometry_msgs_Twist> &velocities, const std::vector<ROSCommon_msgs::Geometry_msgs_Twist> &accelerations, const CommBasicObjects::CommTimeStamp &time_from_start)
:	Trajectory_msgs_MultiDOFJointTrajectoryPointCore() // base constructor sets default values as defined in the model
{
	setTransforms(transforms);
	setVelocities(velocities);
	setAccelerations(accelerations);
	setTime_from_start(time_from_start);
}
 */

Trajectory_msgs_MultiDOFJointTrajectoryPoint::Trajectory_msgs_MultiDOFJointTrajectoryPoint(const Trajectory_msgs_MultiDOFJointTrajectoryPointCore &trajectory_msgs_MultiDOFJointTrajectoryPoint)
:	Trajectory_msgs_MultiDOFJointTrajectoryPointCore(trajectory_msgs_MultiDOFJointTrajectoryPoint)
{  }

Trajectory_msgs_MultiDOFJointTrajectoryPoint::Trajectory_msgs_MultiDOFJointTrajectoryPoint(const DATATYPE &trajectory_msgs_MultiDOFJointTrajectoryPoint)
:	Trajectory_msgs_MultiDOFJointTrajectoryPointCore(trajectory_msgs_MultiDOFJointTrajectoryPoint)
{  }

Trajectory_msgs_MultiDOFJointTrajectoryPoint::~Trajectory_msgs_MultiDOFJointTrajectoryPoint()
{  }
