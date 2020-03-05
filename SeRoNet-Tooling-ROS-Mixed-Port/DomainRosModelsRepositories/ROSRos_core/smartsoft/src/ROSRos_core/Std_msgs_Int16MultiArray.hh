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
#ifndef ROSROS_CORE_STD_MSGS_INT16MULTIARRAY_H_
#define ROSROS_CORE_STD_MSGS_INT16MULTIARRAY_H_

#include "ROSRos_core/Std_msgs_Int16MultiArrayCore.hh"

namespace ROSRos_core {
		
class Std_msgs_Int16MultiArray : public Std_msgs_Int16MultiArrayCore {
	public:
		// default constructors
		Std_msgs_Int16MultiArray();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// Std_msgs_Int16MultiArray(const ROSRos_core::Std_msgs_MultiArrayLayout &layout, const std::vector<short> &data);
		
		Std_msgs_Int16MultiArray(const Std_msgs_Int16MultiArrayCore &std_msgs_Int16MultiArray);
		Std_msgs_Int16MultiArray(const DATATYPE &std_msgs_Int16MultiArray);
		virtual ~Std_msgs_Int16MultiArray();
		
		// use framework specific getter and setter methods from core (base) class
		using Std_msgs_Int16MultiArrayCore::get;
		using Std_msgs_Int16MultiArrayCore::set;
		
		//
		// feel free to add customized methods here
		//
};

inline std::ostream &operator<<(std::ostream &os, const Std_msgs_Int16MultiArray &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace ROSRos_core */
#endif /* ROSROS_CORE_STD_MSGS_INT16MULTIARRAY_H_ */
