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
#include "ROSCommon_msgs/Geometry_msgs_TwistWithCovarianceACE.hh"
#include <ace/SString.h>
#include "ROSCommon_msgs/Geometry_msgs_TwistACE.hh"

// serialization operator for element Geometry_msgs_TwistWithCovariance
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSCommon_msgsIDL::Geometry_msgs_TwistWithCovariance &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element twist
	good_bit = good_bit && cdr << data.twist;
	// serialize list-element covariance
	good_bit = good_bit && cdr << ACE_Utils::truncate_cast<ACE_CDR::ULong>(data.covariance.size());
	good_bit = good_bit && cdr.write_double_array(data.covariance.data(), data.covariance.size());
	
	return good_bit;
}

// de-serialization operator for element Geometry_msgs_TwistWithCovariance
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSCommon_msgsIDL::Geometry_msgs_TwistWithCovariance &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize type element twist
	good_bit = good_bit && cdr >> data.twist;
	// deserialize list-type element covariance
	ACE_CDR::ULong data_covarianceNbr;
	good_bit = good_bit && cdr >> data_covarianceNbr;
	data.covariance.resize(data_covarianceNbr);
	good_bit = good_bit && cdr.read_double_array(data.covariance.data(), data_covarianceNbr);
	
	return good_bit;
}

// serialization operator for CommunicationObject Geometry_msgs_TwistWithCovariance
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSCommon_msgs::Geometry_msgs_TwistWithCovariance &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject Geometry_msgs_TwistWithCovariance
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSCommon_msgs::Geometry_msgs_TwistWithCovariance &obj)
{
	return cdr >> obj.set();
}
