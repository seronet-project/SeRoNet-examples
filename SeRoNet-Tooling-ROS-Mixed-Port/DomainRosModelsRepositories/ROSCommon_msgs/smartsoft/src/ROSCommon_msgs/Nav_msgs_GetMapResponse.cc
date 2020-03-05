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

#include "ROSCommon_msgs/Nav_msgs_GetMapResponse.hh"

using namespace ROSCommon_msgs;

Nav_msgs_GetMapResponse::Nav_msgs_GetMapResponse()
:	Nav_msgs_GetMapResponseCore()
{  }


/**
 * Constructor to set all values.
 * NOTE that you have to keep this constructor consistent with the model!
 * Use  at your own choice.
 *
 * The preferred way to set values for initialization is:
 *      CommRepository::MyCommObject obj;
 *      obj.setX(1).setY(2).setZ(3)...;
Nav_msgs_GetMapResponse::Nav_msgs_GetMapResponse(const ROSCommon_msgs::Nav_msgs_OccupancyGrid &map)
:	Nav_msgs_GetMapResponseCore() // base constructor sets default values as defined in the model
{
	setMap(map);
}
 */

Nav_msgs_GetMapResponse::Nav_msgs_GetMapResponse(const Nav_msgs_GetMapResponseCore &nav_msgs_GetMapResponse)
:	Nav_msgs_GetMapResponseCore(nav_msgs_GetMapResponse)
{  }

Nav_msgs_GetMapResponse::Nav_msgs_GetMapResponse(const DATATYPE &nav_msgs_GetMapResponse)
:	Nav_msgs_GetMapResponseCore(nav_msgs_GetMapResponse)
{  }

Nav_msgs_GetMapResponse::~Nav_msgs_GetMapResponse()
{  }
