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
#ifndef ROSCOMMON_MSGS_NAV_MSGS_GETMAPGOAL_H_
#define ROSCOMMON_MSGS_NAV_MSGS_GETMAPGOAL_H_

#include "ROSCommon_msgs/Nav_msgs_GetMapGoalCore.hh"

namespace ROSCommon_msgs {
		
class Nav_msgs_GetMapGoal : public Nav_msgs_GetMapGoalCore {
	public:
		// default constructors
		Nav_msgs_GetMapGoal();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// Nav_msgs_GetMapGoal();
		
		Nav_msgs_GetMapGoal(const Nav_msgs_GetMapGoalCore &nav_msgs_GetMapGoal);
		Nav_msgs_GetMapGoal(const DATATYPE &nav_msgs_GetMapGoal);
		virtual ~Nav_msgs_GetMapGoal();
		
		// use framework specific getter and setter methods from core (base) class
		using Nav_msgs_GetMapGoalCore::get;
		using Nav_msgs_GetMapGoalCore::set;
		
		//
		// feel free to add customized methods here
		//
};

inline std::ostream &operator<<(std::ostream &os, const Nav_msgs_GetMapGoal &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace ROSCommon_msgs */
#endif /* ROSCOMMON_MSGS_NAV_MSGS_GETMAPGOAL_H_ */
