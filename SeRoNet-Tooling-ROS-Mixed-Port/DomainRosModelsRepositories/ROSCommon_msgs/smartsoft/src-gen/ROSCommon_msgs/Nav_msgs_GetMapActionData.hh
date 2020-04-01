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
#ifndef ROSCOMMON_MSGS_NAV_MSGS_GETMAPACTION_DATA_H_
#define ROSCOMMON_MSGS_NAV_MSGS_GETMAPACTION_DATA_H_

#include "ROSCommon_msgs/Nav_msgs_GetMapActionResultData.hh"
#include "ROSCommon_msgs/Nav_msgs_GetMapActionFeedbackData.hh"
#include "ROSCommon_msgs/Nav_msgs_GetMapActionGoalData.hh"


namespace ROSCommon_msgsIDL 
{
	struct Nav_msgs_GetMapAction
	{
		ROSCommon_msgsIDL::Nav_msgs_GetMapActionGoal action_goal;
		ROSCommon_msgsIDL::Nav_msgs_GetMapActionResult action_result;
		ROSCommon_msgsIDL::Nav_msgs_GetMapActionFeedback action_feedback;
  	};
};

#endif /* ROSCOMMON_MSGS_NAV_MSGS_GETMAPACTION_DATA_H_ */