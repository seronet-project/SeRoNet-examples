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
#ifndef ROSCOMMON_MSGS_SENSOR_MSGS_JOYFEEDBACK_H_
#define ROSCOMMON_MSGS_SENSOR_MSGS_JOYFEEDBACK_H_

#include "ROSCommon_msgs/Sensor_msgs_JoyFeedbackCore.hh"

namespace ROSCommon_msgs {
		
class Sensor_msgs_JoyFeedback : public Sensor_msgs_JoyFeedbackCore {
	public:
		// default constructors
		Sensor_msgs_JoyFeedback();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// Sensor_msgs_JoyFeedback(const unsigned char &type, const unsigned char &id, const float &intensity);
		
		Sensor_msgs_JoyFeedback(const Sensor_msgs_JoyFeedbackCore &sensor_msgs_JoyFeedback);
		Sensor_msgs_JoyFeedback(const DATATYPE &sensor_msgs_JoyFeedback);
		virtual ~Sensor_msgs_JoyFeedback();
		
		// use framework specific getter and setter methods from core (base) class
		using Sensor_msgs_JoyFeedbackCore::get;
		using Sensor_msgs_JoyFeedbackCore::set;
		
		//
		// feel free to add customized methods here
		//
};

inline std::ostream &operator<<(std::ostream &os, const Sensor_msgs_JoyFeedback &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace ROSCommon_msgs */
#endif /* ROSCOMMON_MSGS_SENSOR_MSGS_JOYFEEDBACK_H_ */
