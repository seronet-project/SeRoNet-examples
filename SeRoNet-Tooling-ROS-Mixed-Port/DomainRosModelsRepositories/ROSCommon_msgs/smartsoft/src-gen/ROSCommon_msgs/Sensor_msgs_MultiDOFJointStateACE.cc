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
#include "ROSCommon_msgs/Sensor_msgs_MultiDOFJointStateACE.hh"
#include <ace/SString.h>
#include "ROSCommon_msgs/Geometry_msgs_TransformACE.hh"
#include "ROSCommon_msgs/Geometry_msgs_TwistACE.hh"
#include "ROSRos_core/Std_msgs_HeaderACE.hh"
#include "ROSCommon_msgs/Geometry_msgs_WrenchACE.hh"

// serialization operator for element Sensor_msgs_MultiDOFJointState
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSCommon_msgsIDL::Sensor_msgs_MultiDOFJointState &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element header
	good_bit = good_bit && cdr << data.header;
	// serialize list-element joint_names
	good_bit = good_bit && cdr << ACE_Utils::truncate_cast<ACE_CDR::ULong>(data.joint_names.size());
	std::vector<std::string>::const_iterator data_joint_namesIt;
	for(data_joint_namesIt=data.joint_names.begin(); data_joint_namesIt!=data.joint_names.end(); data_joint_namesIt++) {
		good_bit = good_bit && cdr << ACE_CString(data_joint_namesIt->c_str());
	}
	// serialize list-element transforms
	good_bit = good_bit && cdr << ACE_Utils::truncate_cast<ACE_CDR::ULong>(data.transforms.size());
	std::vector<ROSCommon_msgsIDL::Geometry_msgs_Transform>::const_iterator data_transformsIt;
	for(data_transformsIt=data.transforms.begin(); data_transformsIt!=data.transforms.end(); data_transformsIt++) {
		good_bit = good_bit && cdr << *data_transformsIt;
	}
	// serialize list-element twist
	good_bit = good_bit && cdr << ACE_Utils::truncate_cast<ACE_CDR::ULong>(data.twist.size());
	std::vector<ROSCommon_msgsIDL::Geometry_msgs_Twist>::const_iterator data_twistIt;
	for(data_twistIt=data.twist.begin(); data_twistIt!=data.twist.end(); data_twistIt++) {
		good_bit = good_bit && cdr << *data_twistIt;
	}
	// serialize list-element wrench
	good_bit = good_bit && cdr << ACE_Utils::truncate_cast<ACE_CDR::ULong>(data.wrench.size());
	std::vector<ROSCommon_msgsIDL::Geometry_msgs_Wrench>::const_iterator data_wrenchIt;
	for(data_wrenchIt=data.wrench.begin(); data_wrenchIt!=data.wrench.end(); data_wrenchIt++) {
		good_bit = good_bit && cdr << *data_wrenchIt;
	}
	
	return good_bit;
}

// de-serialization operator for element Sensor_msgs_MultiDOFJointState
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSCommon_msgsIDL::Sensor_msgs_MultiDOFJointState &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize type element header
	good_bit = good_bit && cdr >> data.header;
	// deserialize list-type element joint_names
	ACE_CDR::ULong data_joint_namesNbr;
	good_bit = good_bit && cdr >> data_joint_namesNbr;
	data.joint_names.clear();
	ACE_CString data_joint_namesItem;
	for(ACE_CDR::ULong i=0; i<data_joint_namesNbr; ++i) {
		good_bit = good_bit && cdr >> data_joint_namesItem;
		data.joint_names.push_back(data_joint_namesItem.c_str());
	}
	// deserialize list-type element transforms
	ACE_CDR::ULong data_transformsNbr;
	good_bit = good_bit && cdr >> data_transformsNbr;
	data.transforms.clear();
	ROSCommon_msgsIDL::Geometry_msgs_Transform data_transformsItem;
	for(ACE_CDR::ULong i=0; i<data_transformsNbr; ++i) {
		good_bit = good_bit && cdr >> data_transformsItem;
		data.transforms.push_back(data_transformsItem);
	}
	// deserialize list-type element twist
	ACE_CDR::ULong data_twistNbr;
	good_bit = good_bit && cdr >> data_twistNbr;
	data.twist.clear();
	ROSCommon_msgsIDL::Geometry_msgs_Twist data_twistItem;
	for(ACE_CDR::ULong i=0; i<data_twistNbr; ++i) {
		good_bit = good_bit && cdr >> data_twistItem;
		data.twist.push_back(data_twistItem);
	}
	// deserialize list-type element wrench
	ACE_CDR::ULong data_wrenchNbr;
	good_bit = good_bit && cdr >> data_wrenchNbr;
	data.wrench.clear();
	ROSCommon_msgsIDL::Geometry_msgs_Wrench data_wrenchItem;
	for(ACE_CDR::ULong i=0; i<data_wrenchNbr; ++i) {
		good_bit = good_bit && cdr >> data_wrenchItem;
		data.wrench.push_back(data_wrenchItem);
	}
	
	return good_bit;
}

// serialization operator for CommunicationObject Sensor_msgs_MultiDOFJointState
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSCommon_msgs::Sensor_msgs_MultiDOFJointState &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject Sensor_msgs_MultiDOFJointState
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSCommon_msgs::Sensor_msgs_MultiDOFJointState &obj)
{
	return cdr >> obj.set();
}
