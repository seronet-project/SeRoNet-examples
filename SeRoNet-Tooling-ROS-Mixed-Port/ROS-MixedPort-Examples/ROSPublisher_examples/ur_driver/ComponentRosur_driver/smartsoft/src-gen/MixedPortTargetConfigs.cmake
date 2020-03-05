# target configurations for ComponentRosur_driverROSExtension
IF(EXISTS ${ROS_DIR})
TARGET_LINK_LIBRARIES(${PROJECT_NAME} ${ROS_LIBS})
ENDIF(EXISTS ${ROS_DIR})

# target configurations for OpcUaBackendComponentGeneratorExtension
IF(SeRoNetSDK_FOUND)
#TARGET_LINK_LIBRARIES(${PROJECT_NAME} SeRoNetSDK::SeRoNetSDK)
TARGET_LINK_LIBRARIES(${PROJECT_NAME} ROSCommon_msgsOpcUa)
ENDIF(SeRoNetSDK_FOUND)

# target configurations for PlainOpcUaComponentRosur_driverExtension
IF(Open62541CppWrapper_FOUND)
TARGET_LINK_LIBRARIES(${PROJECT_NAME} Open62541CppWrapper)
TARGET_COMPILE_DEFINITIONS(${PROJECT_NAME} PUBLIC HAS_OPCUA)
ENDIF(Open62541CppWrapper_FOUND)

