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
#ifndef ROSCOMMON_MSGS_GEOMETRY_MSGS_ACCELWITHCOVARIANCE_H_
#define ROSCOMMON_MSGS_GEOMETRY_MSGS_ACCELWITHCOVARIANCE_H_

#include "ROSCommon_msgs/Geometry_msgs_AccelWithCovarianceCore.hh"

namespace ROSCommon_msgs {
		
class Geometry_msgs_AccelWithCovariance : public Geometry_msgs_AccelWithCovarianceCore {
	public:
		// default constructors
		Geometry_msgs_AccelWithCovariance();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// Geometry_msgs_AccelWithCovariance(const ROSCommon_msgs::Geometry_msgs_Accel &accel, const std::vector<double> &covariance);
		
		Geometry_msgs_AccelWithCovariance(const Geometry_msgs_AccelWithCovarianceCore &geometry_msgs_AccelWithCovariance);
		Geometry_msgs_AccelWithCovariance(const DATATYPE &geometry_msgs_AccelWithCovariance);
		virtual ~Geometry_msgs_AccelWithCovariance();
		
		// use framework specific getter and setter methods from core (base) class
		using Geometry_msgs_AccelWithCovarianceCore::get;
		using Geometry_msgs_AccelWithCovarianceCore::set;
		
		//
		// feel free to add customized methods here
		//
};

inline std::ostream &operator<<(std::ostream &os, const Geometry_msgs_AccelWithCovariance &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace ROSCommon_msgs */
#endif /* ROSCOMMON_MSGS_GEOMETRY_MSGS_ACCELWITHCOVARIANCE_H_ */
