# coordination interfaces extensions
GET_FILENAME_COMPONENT(Coordination_DIR "${PROJECT_SOURCE_DIR}/../coordination" REALPATH)
IF(EXISTS ${Coordination_DIR})
MESSAGE("-- Include CoordinationInterfaces")
INCLUDE("${Coordination_DIR}/src-gen/coordinationInterfaces.cmake")
ENDIF(EXISTS ${Coordination_DIR})

