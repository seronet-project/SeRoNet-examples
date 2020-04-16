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
#ifndef ROSCOMMON_MSGS_SENSOR_MSGS_CAMERAINFO_CORE_H_
#define ROSCOMMON_MSGS_SENSOR_MSGS_CAMERAINFO_CORE_H_

#include "ROSCommon_msgs/Sensor_msgs_CameraInfoData.hh"
#include "ROSRos_core/Std_msgs_Header.hh"
#include "ROSCommon_msgs/Sensor_msgs_RegionOfInterest.hh"

#include <iostream>
#include <string>
#include <list>

namespace ROSCommon_msgs {
	
class Sensor_msgs_CameraInfoCore {
protected:
	// data structure
	ROSCommon_msgsIDL::Sensor_msgs_CameraInfo idl_Sensor_msgs_CameraInfo;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef ROSCommon_msgsIDL::Sensor_msgs_CameraInfo DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	Sensor_msgs_CameraInfoCore();
	Sensor_msgs_CameraInfoCore(const DATATYPE &data);
	// default destructor
	virtual ~Sensor_msgs_CameraInfoCore();
	
	const DATATYPE& get() const { return idl_Sensor_msgs_CameraInfo; }
	operator const DATATYPE&() const { return idl_Sensor_msgs_CameraInfo; }
	DATATYPE& set() { return idl_Sensor_msgs_CameraInfo; }

	static inline std::string identifier(void) { return "ROSCommon_msgs::Sensor_msgs_CameraInfo"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Header
	inline ROSRos_core::Std_msgs_Header getHeader() const { return ROSRos_core::Std_msgs_Header(idl_Sensor_msgs_CameraInfo.header); }
	inline Sensor_msgs_CameraInfoCore& setHeader(const ROSRos_core::Std_msgs_Header &header) { idl_Sensor_msgs_CameraInfo.header = header; return *this; }
	
	// getter and setter for element Height
	inline unsigned int getHeight() const { return idl_Sensor_msgs_CameraInfo.height; }
	inline Sensor_msgs_CameraInfoCore& setHeight(const unsigned int &height) { idl_Sensor_msgs_CameraInfo.height = height; return *this; }
	
	// getter and setter for element Width
	inline unsigned int getWidth() const { return idl_Sensor_msgs_CameraInfo.width; }
	inline Sensor_msgs_CameraInfoCore& setWidth(const unsigned int &width) { idl_Sensor_msgs_CameraInfo.width = width; return *this; }
	
	// getter and setter for element Distortion_model
	inline std::string getDistortion_model() const { return idl_Sensor_msgs_CameraInfo.distortion_model; }
	inline Sensor_msgs_CameraInfoCore& setDistortion_model(const std::string &distortion_model) { idl_Sensor_msgs_CameraInfo.distortion_model = distortion_model; return *this; }
	
	// getter and setter for element D
	/**
	 * Getter methods for idl_Sensor_msgs_CameraInfo.D of type vector<double>
	 */
	inline std::vector<double>& getDRef() { return idl_Sensor_msgs_CameraInfo.D; }
	inline std::vector<double> getDCopy() const {
		return std::vector<double>(idl_Sensor_msgs_CameraInfo.D.begin(), idl_Sensor_msgs_CameraInfo.D.end());
	}
	inline double getDElemAtPos(const size_t &pos) const { return idl_Sensor_msgs_CameraInfo.D[pos]; }
	inline size_t getDSize() const { return idl_Sensor_msgs_CameraInfo.D.size(); }
	inline bool isDEmpty() const { return idl_Sensor_msgs_CameraInfo.D.empty(); }
	/**
	 * Setter methods for idl_Sensor_msgs_CameraInfo.D of type vector<double>
	 */
	inline Sensor_msgs_CameraInfoCore& setD(const std::vector<double> &D) { idl_Sensor_msgs_CameraInfo.D = D; return *this; }
	inline bool setDElemAtPos(const size_t &pos, const double &elem) {
		if(pos < idl_Sensor_msgs_CameraInfo.D.size()) {
			idl_Sensor_msgs_CameraInfo.D[pos] = elem;
			return true;
		}
		return false;
	}
	inline bool insertDVectorAtPos(const size_t &pos, const std::vector<double> &data) {
		if(pos < idl_Sensor_msgs_CameraInfo.D.size()) {
			idl_Sensor_msgs_CameraInfo.D.insert(idl_Sensor_msgs_CameraInfo.D.begin()+pos, data.begin(), data.end());
			return true;
		}
		return false;
	}
	inline void resizeD(const size_t &size) { idl_Sensor_msgs_CameraInfo.D.resize(size); }
	inline bool eraseDElemsAtPos(const size_t &pos, const size_t &nbr_elems) {
		if( (pos+nbr_elems) <= idl_Sensor_msgs_CameraInfo.D.size() ) {
			idl_Sensor_msgs_CameraInfo.D.erase(idl_Sensor_msgs_CameraInfo.D.begin()+pos, idl_Sensor_msgs_CameraInfo.D.begin()+pos+nbr_elems);
			return true;
		}
		return false;
	}
	inline void clearD() { idl_Sensor_msgs_CameraInfo.D.clear(); }
	
	// getter and setter for element K
	/**
	 * Getter methods for idl_Sensor_msgs_CameraInfo.K of type vector<double>
	 */
	inline std::vector<double>& getKRef() { return idl_Sensor_msgs_CameraInfo.K; }
	inline std::vector<double> getKCopy() const {
		return std::vector<double>(idl_Sensor_msgs_CameraInfo.K.begin(), idl_Sensor_msgs_CameraInfo.K.end());
	}
	inline double getKElemAtPos(const size_t &pos) const { return idl_Sensor_msgs_CameraInfo.K[pos]; }
	inline size_t getKSize() const { return idl_Sensor_msgs_CameraInfo.K.size(); }
	inline bool isKEmpty() const { return idl_Sensor_msgs_CameraInfo.K.empty(); }
	/**
	 * Setter methods for idl_Sensor_msgs_CameraInfo.K of type vector<double>
	 */
	inline Sensor_msgs_CameraInfoCore& setK(const std::vector<double> &K) { idl_Sensor_msgs_CameraInfo.K = K; return *this; }
	inline bool setKElemAtPos(const size_t &pos, const double &elem) {
		if(pos < idl_Sensor_msgs_CameraInfo.K.size()) {
			idl_Sensor_msgs_CameraInfo.K[pos] = elem;
			return true;
		}
		return false;
	}
	inline bool insertKVectorAtPos(const size_t &pos, const std::vector<double> &data) {
		if(pos < idl_Sensor_msgs_CameraInfo.K.size()) {
			idl_Sensor_msgs_CameraInfo.K.insert(idl_Sensor_msgs_CameraInfo.K.begin()+pos, data.begin(), data.end());
			return true;
		}
		return false;
	}
	inline void resizeK(const size_t &size) { idl_Sensor_msgs_CameraInfo.K.resize(size); }
	inline bool eraseKElemsAtPos(const size_t &pos, const size_t &nbr_elems) {
		if( (pos+nbr_elems) <= idl_Sensor_msgs_CameraInfo.K.size() ) {
			idl_Sensor_msgs_CameraInfo.K.erase(idl_Sensor_msgs_CameraInfo.K.begin()+pos, idl_Sensor_msgs_CameraInfo.K.begin()+pos+nbr_elems);
			return true;
		}
		return false;
	}
	inline void clearK() { idl_Sensor_msgs_CameraInfo.K.clear(); }
	
	// getter and setter for element R
	/**
	 * Getter methods for idl_Sensor_msgs_CameraInfo.R of type vector<double>
	 */
	inline std::vector<double>& getRRef() { return idl_Sensor_msgs_CameraInfo.R; }
	inline std::vector<double> getRCopy() const {
		return std::vector<double>(idl_Sensor_msgs_CameraInfo.R.begin(), idl_Sensor_msgs_CameraInfo.R.end());
	}
	inline double getRElemAtPos(const size_t &pos) const { return idl_Sensor_msgs_CameraInfo.R[pos]; }
	inline size_t getRSize() const { return idl_Sensor_msgs_CameraInfo.R.size(); }
	inline bool isREmpty() const { return idl_Sensor_msgs_CameraInfo.R.empty(); }
	/**
	 * Setter methods for idl_Sensor_msgs_CameraInfo.R of type vector<double>
	 */
	inline Sensor_msgs_CameraInfoCore& setR(const std::vector<double> &R) { idl_Sensor_msgs_CameraInfo.R = R; return *this; }
	inline bool setRElemAtPos(const size_t &pos, const double &elem) {
		if(pos < idl_Sensor_msgs_CameraInfo.R.size()) {
			idl_Sensor_msgs_CameraInfo.R[pos] = elem;
			return true;
		}
		return false;
	}
	inline bool insertRVectorAtPos(const size_t &pos, const std::vector<double> &data) {
		if(pos < idl_Sensor_msgs_CameraInfo.R.size()) {
			idl_Sensor_msgs_CameraInfo.R.insert(idl_Sensor_msgs_CameraInfo.R.begin()+pos, data.begin(), data.end());
			return true;
		}
		return false;
	}
	inline void resizeR(const size_t &size) { idl_Sensor_msgs_CameraInfo.R.resize(size); }
	inline bool eraseRElemsAtPos(const size_t &pos, const size_t &nbr_elems) {
		if( (pos+nbr_elems) <= idl_Sensor_msgs_CameraInfo.R.size() ) {
			idl_Sensor_msgs_CameraInfo.R.erase(idl_Sensor_msgs_CameraInfo.R.begin()+pos, idl_Sensor_msgs_CameraInfo.R.begin()+pos+nbr_elems);
			return true;
		}
		return false;
	}
	inline void clearR() { idl_Sensor_msgs_CameraInfo.R.clear(); }
	
	// getter and setter for element P
	/**
	 * Getter methods for idl_Sensor_msgs_CameraInfo.P of type vector<double>
	 */
	inline std::vector<double>& getPRef() { return idl_Sensor_msgs_CameraInfo.P; }
	inline std::vector<double> getPCopy() const {
		return std::vector<double>(idl_Sensor_msgs_CameraInfo.P.begin(), idl_Sensor_msgs_CameraInfo.P.end());
	}
	inline double getPElemAtPos(const size_t &pos) const { return idl_Sensor_msgs_CameraInfo.P[pos]; }
	inline size_t getPSize() const { return idl_Sensor_msgs_CameraInfo.P.size(); }
	inline bool isPEmpty() const { return idl_Sensor_msgs_CameraInfo.P.empty(); }
	/**
	 * Setter methods for idl_Sensor_msgs_CameraInfo.P of type vector<double>
	 */
	inline Sensor_msgs_CameraInfoCore& setP(const std::vector<double> &P) { idl_Sensor_msgs_CameraInfo.P = P; return *this; }
	inline bool setPElemAtPos(const size_t &pos, const double &elem) {
		if(pos < idl_Sensor_msgs_CameraInfo.P.size()) {
			idl_Sensor_msgs_CameraInfo.P[pos] = elem;
			return true;
		}
		return false;
	}
	inline bool insertPVectorAtPos(const size_t &pos, const std::vector<double> &data) {
		if(pos < idl_Sensor_msgs_CameraInfo.P.size()) {
			idl_Sensor_msgs_CameraInfo.P.insert(idl_Sensor_msgs_CameraInfo.P.begin()+pos, data.begin(), data.end());
			return true;
		}
		return false;
	}
	inline void resizeP(const size_t &size) { idl_Sensor_msgs_CameraInfo.P.resize(size); }
	inline bool erasePElemsAtPos(const size_t &pos, const size_t &nbr_elems) {
		if( (pos+nbr_elems) <= idl_Sensor_msgs_CameraInfo.P.size() ) {
			idl_Sensor_msgs_CameraInfo.P.erase(idl_Sensor_msgs_CameraInfo.P.begin()+pos, idl_Sensor_msgs_CameraInfo.P.begin()+pos+nbr_elems);
			return true;
		}
		return false;
	}
	inline void clearP() { idl_Sensor_msgs_CameraInfo.P.clear(); }
	
	// getter and setter for element Binning_x
	inline unsigned int getBinning_x() const { return idl_Sensor_msgs_CameraInfo.binning_x; }
	inline Sensor_msgs_CameraInfoCore& setBinning_x(const unsigned int &binning_x) { idl_Sensor_msgs_CameraInfo.binning_x = binning_x; return *this; }
	
	// getter and setter for element Binning_y
	inline unsigned int getBinning_y() const { return idl_Sensor_msgs_CameraInfo.binning_y; }
	inline Sensor_msgs_CameraInfoCore& setBinning_y(const unsigned int &binning_y) { idl_Sensor_msgs_CameraInfo.binning_y = binning_y; return *this; }
	
	// getter and setter for element Roi
	inline ROSCommon_msgs::Sensor_msgs_RegionOfInterest getRoi() const { return ROSCommon_msgs::Sensor_msgs_RegionOfInterest(idl_Sensor_msgs_CameraInfo.roi); }
	inline Sensor_msgs_CameraInfoCore& setRoi(const ROSCommon_msgs::Sensor_msgs_RegionOfInterest &roi) { idl_Sensor_msgs_CameraInfo.roi = roi; return *this; }
};

} /* namespace ROSCommon_msgs */
#endif /* ROSCOMMON_MSGS_SENSOR_MSGS_CAMERAINFO_CORE_H_ */
