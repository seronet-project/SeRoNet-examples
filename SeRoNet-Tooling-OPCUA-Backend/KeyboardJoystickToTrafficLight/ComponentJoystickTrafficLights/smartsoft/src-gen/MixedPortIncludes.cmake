# includes for ComponentJoystickTrafficLightsROSExtension
GET_FILENAME_COMPONENT(ROS_DIR "${PROJECT_SOURCE_DIR}/../ROS" REALPATH)
IF(EXISTS ${ROS_DIR})
ADD_SUBDIRECTORY(${ROS_DIR}/src-gen/ ${PROJECT_BINARY_DIR}/ROS)
LIST(APPEND FURTHER_SRCS ${ROS_SRCS})
INCLUDE_DIRECTORIES(${ROS_INCLUDES})
ENDIF(EXISTS ${ROS_DIR})

# includes for SeRoNetSDKComponentGeneratorExtension
GET_FILENAME_COMPONENT(SeRoNetSDK_DIR "${PROJECT_SOURCE_DIR}/../SeRoNetSDK" REALPATH)
IF(EXISTS ${SeRoNetSDK_DIR})
INCLUDE("${SeRoNetSDK_DIR}/src-gen/SeRoNetSDK.cmake")
LIST(APPEND FURTHER_SRCS ${SERONET_SDK_SRCS})
ENDIF(EXISTS ${SeRoNetSDK_DIR})

# includes for PlainOpcUaComponentJoystickTrafficLightsExtension
GET_FILENAME_COMPONENT(PlainOPCUA_DIR "${PROJECT_SOURCE_DIR}/../plainOpcUa" REALPATH)
IF(EXISTS ${PlainOPCUA_DIR})
INCLUDE("${PlainOPCUA_DIR}/src-gen/ComponentJoystickTrafficLightsPlainOpcUa.cmake")
LIST(APPEND FURTHER_SRCS ${PLAIN_OPCUA_SRCS})
ENDIF(EXISTS ${PlainOPCUA_DIR})


