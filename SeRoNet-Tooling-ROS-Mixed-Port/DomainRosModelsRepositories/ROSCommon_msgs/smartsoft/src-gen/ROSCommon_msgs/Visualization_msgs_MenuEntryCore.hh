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
#ifndef ROSCOMMON_MSGS_VISUALIZATION_MSGS_MENUENTRY_CORE_H_
#define ROSCOMMON_MSGS_VISUALIZATION_MSGS_MENUENTRY_CORE_H_

#include "ROSCommon_msgs/Visualization_msgs_MenuEntryData.hh"

#include <iostream>
#include <string>
#include <list>

namespace ROSCommon_msgs {
	
class Visualization_msgs_MenuEntryCore {
protected:
	// data structure
	ROSCommon_msgsIDL::Visualization_msgs_MenuEntry idl_Visualization_msgs_MenuEntry;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef ROSCommon_msgsIDL::Visualization_msgs_MenuEntry DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	Visualization_msgs_MenuEntryCore();
	Visualization_msgs_MenuEntryCore(const DATATYPE &data);
	// default destructor
	virtual ~Visualization_msgs_MenuEntryCore();
	
	const DATATYPE& get() const { return idl_Visualization_msgs_MenuEntry; }
	operator const DATATYPE&() const { return idl_Visualization_msgs_MenuEntry; }
	DATATYPE& set() { return idl_Visualization_msgs_MenuEntry; }

	static inline std::string identifier(void) { return "ROSCommon_msgs::Visualization_msgs_MenuEntry"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Id
	inline unsigned int getId() const { return idl_Visualization_msgs_MenuEntry.id; }
	inline Visualization_msgs_MenuEntryCore& setId(const unsigned int &id) { idl_Visualization_msgs_MenuEntry.id = id; return *this; }
	
	// getter and setter for element Parent_id
	inline unsigned int getParent_id() const { return idl_Visualization_msgs_MenuEntry.parent_id; }
	inline Visualization_msgs_MenuEntryCore& setParent_id(const unsigned int &parent_id) { idl_Visualization_msgs_MenuEntry.parent_id = parent_id; return *this; }
	
	// getter and setter for element Title
	inline std::string getTitle() const { return idl_Visualization_msgs_MenuEntry.title; }
	inline Visualization_msgs_MenuEntryCore& setTitle(const std::string &title) { idl_Visualization_msgs_MenuEntry.title = title; return *this; }
	
	// getter and setter for element Command
	inline std::string getCommand() const { return idl_Visualization_msgs_MenuEntry.command; }
	inline Visualization_msgs_MenuEntryCore& setCommand(const std::string &command) { idl_Visualization_msgs_MenuEntry.command = command; return *this; }
	
	// getter and setter for element Command_type
	inline unsigned char getCommand_type() const { return idl_Visualization_msgs_MenuEntry.command_type; }
	inline Visualization_msgs_MenuEntryCore& setCommand_type(const unsigned char &command_type) { idl_Visualization_msgs_MenuEntry.command_type = command_type; return *this; }
};

} /* namespace ROSCommon_msgs */
#endif /* ROSCOMMON_MSGS_VISUALIZATION_MSGS_MENUENTRY_CORE_H_ */
