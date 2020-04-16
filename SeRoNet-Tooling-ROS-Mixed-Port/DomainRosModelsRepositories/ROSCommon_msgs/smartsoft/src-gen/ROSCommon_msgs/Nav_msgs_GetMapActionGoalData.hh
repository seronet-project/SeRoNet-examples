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
#ifndef ROSCOMMON_MSGS_NAV_MSGS_GETMAPACTIONGOAL_DATA_H_
#define ROSCOMMON_MSGS_NAV_MSGS_GETMAPACTIONGOAL_DATA_H_

#include "ROSRos_core/Std_msgs_HeaderData.hh"
#include "ROSCommon_msgs/Actionlib_msgs_GoalIDData.hh"
#include "ROSCommon_msgs/Nav_msgs_GetMapGoalData.hh"


namespace ROSCommon_msgsIDL 
{
	struct Nav_msgs_GetMapActionGoal
	{
		ROSRos_coreIDL::Std_msgs_Header header;
		ROSCommon_msgsIDL::Actionlib_msgs_GoalID goal_id;
		ROSCommon_msgsIDL::Nav_msgs_GetMapGoal goal;
  	};
};

#endif /* ROSCOMMON_MSGS_NAV_MSGS_GETMAPACTIONGOAL_DATA_H_ */
