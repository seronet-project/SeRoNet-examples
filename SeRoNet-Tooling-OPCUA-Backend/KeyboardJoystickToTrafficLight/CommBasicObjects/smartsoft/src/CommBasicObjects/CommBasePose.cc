//--------------------------------------------------------------------------
// Code generated by the SmartSoft MDSD Toolchain
// The SmartSoft Toolchain has been developed by:
//  
// Christian Schlegel (schlegel@hs-ulm.de)
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

#include "CommBasicObjects/CommBasePose.hh"

using namespace CommBasicObjects;

CommBasePose::CommBasePose()
:	CommBasePoseCore()
{  }


/**
 * Constructor to set all values.
 * NOTE that you have to keep this constructor consistent with the model!
 * Use  at your own choice.
 *
 * The preferred way to set values for initialization is:
 *      CommRepository::MyCommObject obj;
 *      obj.setX(1).setY(2).setZ(3)...;
CommBasePose::CommBasePose(const bool &covInvalid, const CommBasicObjects::CommPose3d &pose3D, const CommBasicObjects::CommTimeStamp &timeStamp, const std::vector<double> &covMatrix, const unsigned int &updateCount)
:	CommBasePoseCore() // base constructor sets default values as defined in the model
{
	setCovInvalid(covInvalid);
	setCovMatrix(covMatrix);
	setUpdateCount(updateCount);
	setPose3D(pose3D);
	setTimeStamp(timeStamp);
}
 */

CommBasePose::CommBasePose(const CommBasePoseCore &commBasePose)
:	CommBasePoseCore(commBasePose)
{  }

CommBasePose::CommBasePose(const DATATYPE &commBasePose)
:	CommBasePoseCore(commBasePose)
{  }

CommBasePose::~CommBasePose()
{  }
