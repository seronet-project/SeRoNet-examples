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
#ifndef ROSROS_CORE_STD_MSGS_BYTEMULTIARRAY_DATA_H_
#define ROSROS_CORE_STD_MSGS_BYTEMULTIARRAY_DATA_H_

#include "ROSRos_core/Std_msgs_MultiArrayLayoutData.hh"

#include <vector>

namespace ROSRos_coreIDL 
{
	typedef std::vector<unsigned char> Std_msgs_ByteMultiArray_data_type;
	struct Std_msgs_ByteMultiArray
	{
		ROSRos_coreIDL::Std_msgs_MultiArrayLayout layout;
		Std_msgs_ByteMultiArray_data_type data;
  	};
};

#endif /* ROSROS_CORE_STD_MSGS_BYTEMULTIARRAY_DATA_H_ */
