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
#include "CommBasicObjects/CommIMUDataACE.hh"
#include <ace/SString.h>

// serialization operator for element CommIMUData
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommBasicObjectsIDL::CommIMUData &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element timestamp
	good_bit = good_bit && cdr.write_ushort(data.timestamp);
	// serialize list-element temperature
	good_bit = good_bit && cdr.write_double(data.temperature);
	// serialize list-element accelerometer_x
	good_bit = good_bit && cdr.write_double(data.accelerometer_x);
	// serialize list-element accelerometer_y
	good_bit = good_bit && cdr.write_double(data.accelerometer_y);
	// serialize list-element accelerometer_z
	good_bit = good_bit && cdr.write_double(data.accelerometer_z);
	// serialize list-element gyroscope_x
	good_bit = good_bit && cdr.write_double(data.gyroscope_x);
	// serialize list-element gyroscope_y
	good_bit = good_bit && cdr.write_double(data.gyroscope_y);
	// serialize list-element gyroscope_z
	good_bit = good_bit && cdr.write_double(data.gyroscope_z);
	// serialize list-element magnetometer_x
	good_bit = good_bit && cdr.write_double(data.magnetometer_x);
	// serialize list-element magnetometer_y
	good_bit = good_bit && cdr.write_double(data.magnetometer_y);
	// serialize list-element magnetometer_z
	good_bit = good_bit && cdr.write_double(data.magnetometer_z);
	// serialize list-element roll
	good_bit = good_bit && cdr.write_double(data.roll);
	// serialize list-element pitch
	good_bit = good_bit && cdr.write_double(data.pitch);
	// serialize list-element yaw
	good_bit = good_bit && cdr.write_double(data.yaw);
	
	return good_bit;
}

// de-serialization operator for element CommIMUData
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommBasicObjectsIDL::CommIMUData &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize type element timestamp
	good_bit = good_bit && cdr.read_ushort(data.timestamp);
	// deserialize type element temperature
	good_bit = good_bit && cdr.read_double(data.temperature);
	// deserialize type element accelerometer_x
	good_bit = good_bit && cdr.read_double(data.accelerometer_x);
	// deserialize type element accelerometer_y
	good_bit = good_bit && cdr.read_double(data.accelerometer_y);
	// deserialize type element accelerometer_z
	good_bit = good_bit && cdr.read_double(data.accelerometer_z);
	// deserialize type element gyroscope_x
	good_bit = good_bit && cdr.read_double(data.gyroscope_x);
	// deserialize type element gyroscope_y
	good_bit = good_bit && cdr.read_double(data.gyroscope_y);
	// deserialize type element gyroscope_z
	good_bit = good_bit && cdr.read_double(data.gyroscope_z);
	// deserialize type element magnetometer_x
	good_bit = good_bit && cdr.read_double(data.magnetometer_x);
	// deserialize type element magnetometer_y
	good_bit = good_bit && cdr.read_double(data.magnetometer_y);
	// deserialize type element magnetometer_z
	good_bit = good_bit && cdr.read_double(data.magnetometer_z);
	// deserialize type element roll
	good_bit = good_bit && cdr.read_double(data.roll);
	// deserialize type element pitch
	good_bit = good_bit && cdr.read_double(data.pitch);
	// deserialize type element yaw
	good_bit = good_bit && cdr.read_double(data.yaw);
	
	return good_bit;
}

// serialization operator for CommunicationObject CommIMUData
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommBasicObjects::CommIMUData &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject CommIMUData
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommBasicObjects::CommIMUData &obj)
{
	return cdr >> obj.set();
}