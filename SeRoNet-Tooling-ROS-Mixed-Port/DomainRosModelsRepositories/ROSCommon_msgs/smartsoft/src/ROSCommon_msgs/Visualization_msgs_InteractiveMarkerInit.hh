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
#ifndef ROSCOMMON_MSGS_VISUALIZATION_MSGS_INTERACTIVEMARKERINIT_H_
#define ROSCOMMON_MSGS_VISUALIZATION_MSGS_INTERACTIVEMARKERINIT_H_

#include "ROSCommon_msgs/Visualization_msgs_InteractiveMarkerInitCore.hh"

namespace ROSCommon_msgs {
		
class Visualization_msgs_InteractiveMarkerInit : public Visualization_msgs_InteractiveMarkerInitCore {
	public:
		// default constructors
		Visualization_msgs_InteractiveMarkerInit();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// Visualization_msgs_InteractiveMarkerInit(const std::string &server_id, const unsigned long int &seq_num, const std::vector<ROSCommon_msgs::Visualization_msgs_InteractiveMarker> &markers);
		
		Visualization_msgs_InteractiveMarkerInit(const Visualization_msgs_InteractiveMarkerInitCore &visualization_msgs_InteractiveMarkerInit);
		Visualization_msgs_InteractiveMarkerInit(const DATATYPE &visualization_msgs_InteractiveMarkerInit);
		virtual ~Visualization_msgs_InteractiveMarkerInit();
		
		// use framework specific getter and setter methods from core (base) class
		using Visualization_msgs_InteractiveMarkerInitCore::get;
		using Visualization_msgs_InteractiveMarkerInitCore::set;
		
		//
		// feel free to add customized methods here
		//
};

inline std::ostream &operator<<(std::ostream &os, const Visualization_msgs_InteractiveMarkerInit &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace ROSCommon_msgs */
#endif /* ROSCOMMON_MSGS_VISUALIZATION_MSGS_INTERACTIVEMARKERINIT_H_ */
