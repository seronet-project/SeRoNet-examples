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
#ifndef ROSCOMMON_MSGS_STEREO_MSGS_DISPARITYIMAGE_CORE_H_
#define ROSCOMMON_MSGS_STEREO_MSGS_DISPARITYIMAGE_CORE_H_

#include "ROSCommon_msgs/Stereo_msgs_DisparityImageData.hh"
#include "ROSRos_core/Std_msgs_Header.hh"
#include "ROSCommon_msgs/Sensor_msgs_Image.hh"
#include "ROSCommon_msgs/Sensor_msgs_RegionOfInterest.hh"

#include <iostream>
#include <string>
#include <list>

namespace ROSCommon_msgs {
	
class Stereo_msgs_DisparityImageCore {
protected:
	// data structure
	ROSCommon_msgsIDL::Stereo_msgs_DisparityImage idl_Stereo_msgs_DisparityImage;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef ROSCommon_msgsIDL::Stereo_msgs_DisparityImage DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	Stereo_msgs_DisparityImageCore();
	Stereo_msgs_DisparityImageCore(const DATATYPE &data);
	// default destructor
	virtual ~Stereo_msgs_DisparityImageCore();
	
	const DATATYPE& get() const { return idl_Stereo_msgs_DisparityImage; }
	operator const DATATYPE&() const { return idl_Stereo_msgs_DisparityImage; }
	DATATYPE& set() { return idl_Stereo_msgs_DisparityImage; }

	static inline std::string identifier(void) { return "ROSCommon_msgs::Stereo_msgs_DisparityImage"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Header
	inline ROSRos_core::Std_msgs_Header getHeader() const { return ROSRos_core::Std_msgs_Header(idl_Stereo_msgs_DisparityImage.header); }
	inline Stereo_msgs_DisparityImageCore& setHeader(const ROSRos_core::Std_msgs_Header &header) { idl_Stereo_msgs_DisparityImage.header = header; return *this; }
	
	// getter and setter for element Image
	inline ROSCommon_msgs::Sensor_msgs_Image getImage() const { return ROSCommon_msgs::Sensor_msgs_Image(idl_Stereo_msgs_DisparityImage.image); }
	inline Stereo_msgs_DisparityImageCore& setImage(const ROSCommon_msgs::Sensor_msgs_Image &image) { idl_Stereo_msgs_DisparityImage.image = image; return *this; }
	
	// getter and setter for element F
	inline float getF() const { return idl_Stereo_msgs_DisparityImage.f; }
	inline Stereo_msgs_DisparityImageCore& setF(const float &f) { idl_Stereo_msgs_DisparityImage.f = f; return *this; }
	
	// getter and setter for element T
	inline float getT() const { return idl_Stereo_msgs_DisparityImage.T; }
	inline Stereo_msgs_DisparityImageCore& setT(const float &T) { idl_Stereo_msgs_DisparityImage.T = T; return *this; }
	
	// getter and setter for element Valid_window
	inline ROSCommon_msgs::Sensor_msgs_RegionOfInterest getValid_window() const { return ROSCommon_msgs::Sensor_msgs_RegionOfInterest(idl_Stereo_msgs_DisparityImage.valid_window); }
	inline Stereo_msgs_DisparityImageCore& setValid_window(const ROSCommon_msgs::Sensor_msgs_RegionOfInterest &valid_window) { idl_Stereo_msgs_DisparityImage.valid_window = valid_window; return *this; }
	
	// getter and setter for element Min_disparity
	inline float getMin_disparity() const { return idl_Stereo_msgs_DisparityImage.min_disparity; }
	inline Stereo_msgs_DisparityImageCore& setMin_disparity(const float &min_disparity) { idl_Stereo_msgs_DisparityImage.min_disparity = min_disparity; return *this; }
	
	// getter and setter for element Max_disparity
	inline float getMax_disparity() const { return idl_Stereo_msgs_DisparityImage.max_disparity; }
	inline Stereo_msgs_DisparityImageCore& setMax_disparity(const float &max_disparity) { idl_Stereo_msgs_DisparityImage.max_disparity = max_disparity; return *this; }
	
	// getter and setter for element Delta_d
	inline float getDelta_d() const { return idl_Stereo_msgs_DisparityImage.delta_d; }
	inline Stereo_msgs_DisparityImageCore& setDelta_d(const float &delta_d) { idl_Stereo_msgs_DisparityImage.delta_d = delta_d; return *this; }
};

} /* namespace ROSCommon_msgs */
#endif /* ROSCOMMON_MSGS_STEREO_MSGS_DISPARITYIMAGE_CORE_H_ */
