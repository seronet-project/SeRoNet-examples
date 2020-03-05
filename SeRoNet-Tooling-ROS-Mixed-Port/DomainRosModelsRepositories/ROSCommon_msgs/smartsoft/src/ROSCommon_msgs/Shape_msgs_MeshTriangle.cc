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

#include "ROSCommon_msgs/Shape_msgs_MeshTriangle.hh"

using namespace ROSCommon_msgs;

Shape_msgs_MeshTriangle::Shape_msgs_MeshTriangle()
:	Shape_msgs_MeshTriangleCore()
{  }


/**
 * Constructor to set all values.
 * NOTE that you have to keep this constructor consistent with the model!
 * Use  at your own choice.
 *
 * The preferred way to set values for initialization is:
 *      CommRepository::MyCommObject obj;
 *      obj.setX(1).setY(2).setZ(3)...;
Shape_msgs_MeshTriangle::Shape_msgs_MeshTriangle(const std::vector<unsigned int> &vertex_indices)
:	Shape_msgs_MeshTriangleCore() // base constructor sets default values as defined in the model
{
	setVertex_indices(vertex_indices);
}
 */

Shape_msgs_MeshTriangle::Shape_msgs_MeshTriangle(const Shape_msgs_MeshTriangleCore &shape_msgs_MeshTriangle)
:	Shape_msgs_MeshTriangleCore(shape_msgs_MeshTriangle)
{  }

Shape_msgs_MeshTriangle::Shape_msgs_MeshTriangle(const DATATYPE &shape_msgs_MeshTriangle)
:	Shape_msgs_MeshTriangleCore(shape_msgs_MeshTriangle)
{  }

Shape_msgs_MeshTriangle::~Shape_msgs_MeshTriangle()
{  }