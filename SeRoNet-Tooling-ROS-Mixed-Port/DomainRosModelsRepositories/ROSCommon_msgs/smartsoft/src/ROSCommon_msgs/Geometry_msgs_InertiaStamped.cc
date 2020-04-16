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

#include "ROSCommon_msgs/Geometry_msgs_InertiaStamped.hh"

using namespace ROSCommon_msgs;

Geometry_msgs_InertiaStamped::Geometry_msgs_InertiaStamped()
:	Geometry_msgs_InertiaStampedCore()
{  }


/**
 * Constructor to set all values.
 * NOTE that you have to keep this constructor consistent with the model!
 * Use  at your own choice.
 *
 * The preferred way to set values for initialization is:
 *      CommRepository::MyCommObject obj;
 *      obj.setX(1).setY(2).setZ(3)...;
Geometry_msgs_InertiaStamped::Geometry_msgs_InertiaStamped(const ROSRos_core::Std_msgs_Header &header, const ROSCommon_msgs::Geometry_msgs_Inertia &inertia)
:	Geometry_msgs_InertiaStampedCore() // base constructor sets default values as defined in the model
{
	setHeader(header);
	setInertia(inertia);
}
 */

Geometry_msgs_InertiaStamped::Geometry_msgs_InertiaStamped(const Geometry_msgs_InertiaStampedCore &geometry_msgs_InertiaStamped)
:	Geometry_msgs_InertiaStampedCore(geometry_msgs_InertiaStamped)
{  }

Geometry_msgs_InertiaStamped::Geometry_msgs_InertiaStamped(const DATATYPE &geometry_msgs_InertiaStamped)
:	Geometry_msgs_InertiaStampedCore(geometry_msgs_InertiaStamped)
{  }

Geometry_msgs_InertiaStamped::~Geometry_msgs_InertiaStamped()
{  }
