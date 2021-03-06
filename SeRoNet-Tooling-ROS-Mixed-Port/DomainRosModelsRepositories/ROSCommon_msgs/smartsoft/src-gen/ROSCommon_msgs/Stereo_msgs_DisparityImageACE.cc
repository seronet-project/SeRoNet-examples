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
#include "ROSCommon_msgs/Stereo_msgs_DisparityImageACE.hh"
#include <ace/SString.h>
#include "ROSCommon_msgs/Sensor_msgs_RegionOfInterestACE.hh"
#include "ROSRos_core/Std_msgs_HeaderACE.hh"
#include "ROSCommon_msgs/Sensor_msgs_ImageACE.hh"

// serialization operator for element Stereo_msgs_DisparityImage
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSCommon_msgsIDL::Stereo_msgs_DisparityImage &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element header
	good_bit = good_bit && cdr << data.header;
	// serialize list-element image
	good_bit = good_bit && cdr << data.image;
	// serialize list-element f
	good_bit = good_bit && cdr.write_float(data.f);
	// serialize list-element T
	good_bit = good_bit && cdr.write_float(data.T);
	// serialize list-element valid_window
	good_bit = good_bit && cdr << data.valid_window;
	// serialize list-element min_disparity
	good_bit = good_bit && cdr.write_float(data.min_disparity);
	// serialize list-element max_disparity
	good_bit = good_bit && cdr.write_float(data.max_disparity);
	// serialize list-element delta_d
	good_bit = good_bit && cdr.write_float(data.delta_d);
	
	return good_bit;
}

// de-serialization operator for element Stereo_msgs_DisparityImage
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSCommon_msgsIDL::Stereo_msgs_DisparityImage &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize type element header
	good_bit = good_bit && cdr >> data.header;
	// deserialize type element image
	good_bit = good_bit && cdr >> data.image;
	// deserialize type element f
	good_bit = good_bit && cdr.read_float(data.f);
	// deserialize type element T
	good_bit = good_bit && cdr.read_float(data.T);
	// deserialize type element valid_window
	good_bit = good_bit && cdr >> data.valid_window;
	// deserialize type element min_disparity
	good_bit = good_bit && cdr.read_float(data.min_disparity);
	// deserialize type element max_disparity
	good_bit = good_bit && cdr.read_float(data.max_disparity);
	// deserialize type element delta_d
	good_bit = good_bit && cdr.read_float(data.delta_d);
	
	return good_bit;
}

// serialization operator for CommunicationObject Stereo_msgs_DisparityImage
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSCommon_msgs::Stereo_msgs_DisparityImage &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject Stereo_msgs_DisparityImage
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSCommon_msgs::Stereo_msgs_DisparityImage &obj)
{
	return cdr >> obj.set();
}
