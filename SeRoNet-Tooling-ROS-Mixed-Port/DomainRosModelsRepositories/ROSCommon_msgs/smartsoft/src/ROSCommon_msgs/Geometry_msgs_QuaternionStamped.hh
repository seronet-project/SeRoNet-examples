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
#ifndef ROSCOMMON_MSGS_GEOMETRY_MSGS_QUATERNIONSTAMPED_H_
#define ROSCOMMON_MSGS_GEOMETRY_MSGS_QUATERNIONSTAMPED_H_

#include "ROSCommon_msgs/Geometry_msgs_QuaternionStampedCore.hh"

namespace ROSCommon_msgs {
		
class Geometry_msgs_QuaternionStamped : public Geometry_msgs_QuaternionStampedCore {
	public:
		// default constructors
		Geometry_msgs_QuaternionStamped();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// Geometry_msgs_QuaternionStamped(const ROSRos_core::Std_msgs_Header &header, const ROSCommon_msgs::Geometry_msgs_Quaternion &quaternion);
		
		Geometry_msgs_QuaternionStamped(const Geometry_msgs_QuaternionStampedCore &geometry_msgs_QuaternionStamped);
		Geometry_msgs_QuaternionStamped(const DATATYPE &geometry_msgs_QuaternionStamped);
		virtual ~Geometry_msgs_QuaternionStamped();
		
		// use framework specific getter and setter methods from core (base) class
		using Geometry_msgs_QuaternionStampedCore::get;
		using Geometry_msgs_QuaternionStampedCore::set;
		
		//
		// feel free to add customized methods here
		//
};

inline std::ostream &operator<<(std::ostream &os, const Geometry_msgs_QuaternionStamped &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace ROSCommon_msgs */
#endif /* ROSCOMMON_MSGS_GEOMETRY_MSGS_QUATERNIONSTAMPED_H_ */
