# ROS Service Server relay to SeRoNet network

This tutorial shows how to use the [SeRoNet Mixed port features](https://github.com/seronet-project/SeRoNet-Tooling-ROS-Mixed-Port) to connect a **ROS node model** from the [SeRoNet ROS tooling collection](https://github.com/ipa320/ros-model/) to the SeRoNet network. For this case, we use a **ROS service server** as interface to be relayed and explain the resulted model, the C++ code that will be auto generated and point the code parts where the user can implement further functionalities.

Some of the concepts explained in [SeRoNet Tooling Collection - ROS support](../../README.md) are required to perform this tutorial. A previous default setup of the workspace is necessary to follow the instructions of the tutorial: [WORKSPACE SETUP](../ROSMixedPortTutorials_WSsetup.md).

### System overview

![SystemOverview](Screenshots/rosscli_diagram.png)

### Required packages

**Domain Models projects::**

- [CommBasicObjects](https://github.com/Servicerobotics-Ulm/DomainModelsRepositories/tree/master/CommBasicObjects)

- [ROSRos_core](../../DomainRosModelsRepositories/ROSRos_core)


**ROS projects:**

- [de.fraunhofer.ipa.ros.communication.objects](https://github.com/ipa320/RosCommonObjects/tree/master/de.fraunhofer.ipa.ros.communication.objects)

- [cob4-3](../ROSPublisher_examples/cob4-3)

**Component model projects:**

- [Cob4BaseInit](Cob4BaseInit)

- ComponentROSBaseInit(it will be created in this tutorial)


### ROS components

For this example we selected a native ROS base platform concretely a [Care-O-bot 4](http://wiki.ros.org/Robots/cob4). However, **the component outcome of this tutorial is valid for any ROS component driver that required initialization (for example those using the [ros_canopen](http://wiki.ros.org/ros_canopen) driver**.

For this experiment we decided to use the version 3 of the Care-O-bot 4 family. To easily extract the model of this complex robot system and having already available the source code and a very realistic simulation environment, we used the [ros_graph_parser](https://github.com/ipa-led/ros_graph_parser) to get automatically the complete model.

To apply this to other deployed robot, you have to run together (within the same ROS master) the ROS system to be analyzed and the *ros_graph_parser* node using the following command line:

```
rosrun ros_graph_parser java_snapshot MyRobot.ros MyRobot.rosystem MyRobotName MyRobotName
```
After its execution the folder **ros_graph_parser/result** will contain the output models ( MyRobot.ros and MyRobot.rosystem). Remember that the ROS tooling required also the reference to the communication object types (msgs, srvs and actions). Which packages have to be also generated, please review the [main documentation](../../SeRoNet-Tooling-ROS-Mixed-Port#step-1-use-the-ros-developer-perspective-to-describe-ros-nodes) about how to obtain the required models dependencies.

The ROS tooling project associated to this ROS system  is delivered within this repository, you can import it using the Eclipse menu: **File** => **Import** => **General** => **Existing Projects into Workspace** and click the **Next** button. In the following window, click the **Browse...** button and select your local folder where you cloned the examples repository and choose the project **SeRoNet-examples/SeRoNet-Tooling-ROS-Mixed-Port/ROS-MixedPort-Examples/ROSSubscriber_examples/cob4-3**. Complete the import by clicking the **Finish** button. If you navigate through the **cob4-3** package and open the [representation file](https://www.eclipse.org/sirius/doc/user/general/Aird_Editor.html) you can get an overview o the model.

![cob4-3 Representation](Screenshots/01-cob4-3_representation.jpg)

To get further information about how to create the model using the ROS developer tooling please visit the [ROS tooling documentation](https://github.com/ipa320/ros-model#tutorials).

### SeRoNet components

By default the tooling automatically auto generates the corresponding component interface (a generic model of a component) of all the nodes and  systems on your ROS project. The auto generated components are always located under a new folder called *components/*. 

![cob4-3 Component Interfaces](Screenshots/02-cob4-3_componentinterfaces.png)

This *ComponentInterface* model is the bridge from ROS to other frameworks. For the case of SeRoNet the tooling includes a special function that can be activated by a right-click on the file an choosing the option *Generate ROS-SeRoNet Mixed Port*, for this example we will use the *cob4-3.componentinterface* file as input. The result of this call is a *rospoolinterface* file. Complementarity and to make easier the relay of interfaces we incorporated an extra help function that automatically relays one of the ROS interfaces. The previous function through its pop-up dialog guides the user to generates not only the *rospoolinterface* model but also a suggestion of a SeRoNet component with a ROS mixed Port, for this example we will use the **Server** for the service **/base/driver/init** . The resulted files will be generated under the folder *src-gen/SeRoNetComponent*.

![JoystickSubPortRelay](Screenshots/03-transform-toSeRoNet-Component.gif)

These two files can be used to create a new SeRoNet component. We can, for this example, rename  the component in order to don't mix the outcome of this tutorial with the [ROSSubscriber](../ROSSubscriber_examples) one. For the consistency of the SeRoNet component we have to give a new name to the component on the *.component* file but also rename that file, both the file and the *ComponentDefinition* must have the same name, for example **ComponentROSBaseInit**.

![renameComponents](Screenshots/04-renameComponents.gif)

First, the perspective have to be changed to the *Component Supplier* one. This perspective will add the option to [create a new Component Project](https://wiki.servicerobotik-ulm.de/tutorials:develop-your-first-component:start). Using the help dialog menu you can give the following description to your new component project:

- Project name: **ComponentROSBaseInit** (it is very important that the name of the project is the same than the name of the component, by default the ROS->SeRoNet converter set as component name **ComponentRos**MyRosNodeName )
- Model type: **ComponentDefinition** and **ComponentDatasheet**
- Dependencies: **ROSRos_core** and **CommBasicObjects**

![JoystickNewMixedPortComponent](Screenshots/05-NewSeRoNetComponent.gif)

Once the *Component Project* is created switch again to the ROS developer perspective and move the two previously auto-generated files: *cob4-3/src-gen/SeRoNetComponent/ComponentROSBaseInit.component* and *cob4-3/src-gen/SeRoNetComponent/cob4_3.gateway.rosinterfacespool* to the folder  *ComponentROSBaseInit/model*.

The next figure shows the resulted SeRoNet component:

<img src="ComponentROSBaseInit/model/ComponentROSBaseInitComponentDefinition.jpg" alt="ComponentROSBaseInit" style="zoom:50%;" />



The other SeRoNet component that we will use for this example is the [Cob4BaseInit](Cob4BaseInit) the [SeRoNet workspace setup](../ROSMixedPortTutorials_WSsetup.md) should install this component automatically under the path *$SMART_PACKAGE_PATH/SeRoNet-examples/SeRoNet-Tooling-ROS-Mixed-Port*, you can import it to your workspace  (**File** => **Import** => **General** => **Existing Projects into Workspace** and click the **Next** button. In the following window, click the **Browse...** button and select your local folder **~/SOFTWARE/smartsoft/repos/SeRoNet-examples/SeRoNet-Tooling-ROS-Mixed-Port/ROS-MixedPort-Examples/ROSServiceCall_example/Cob4BaseInit**) and build it on your system using the *Build Project* button ![Build Project button](Screenshots/build_button.png).

<img src="Cob4BaseInit/model/Cob4BaseInitComponentDefinition.jpg" alt="Cob4BaseInitComponentDefinition" style="zoom:50%;" />



### Code implementation

In this section, we will adapt the auto generated C++ code to transform the incoming SeRoNet  communication object update from a *base_driver_initServiceAnsw*  into a ROS service (std_srvs/Trigger) and call with this object the ROS service */base/driver/init*.

In case the *AutoCodeGeneration* ![AutoCodeGeneration_button](../ROSPublisher_examples/Screenshots/05-AutoCodeGeneration_button.png) button is disabled, you can select your project from the project Explorer  and press the *RunCodeGeneration*  ![ManualCodeGeneration_button](../ROSPublisher_examples/Screenshots/06-ManualCodeGeneration_button.png) , these two buttons are only available for the *Component Supplier* perspective.

The code generator will create 3 folders to hold the C++ code implementation of your component:

- ROS : this is the code related to the ROS Mixed Port. For this concrete case, it holds the implementation of the ROS Service (*_base_driver_init_srvcli* Port) to the *base/driver/init* service.
- smartsoft: this folder contains the code associated to the SeRoNet plain port and body of the component. For this example, it holds the implementation of the Push Port *base_driver_initServiceAnsw* and the service handler *base_driver_init*
- opcua-backend: this is the code related to the OPC UA backend for the SeRoNet plain port. For this concrete example this code is not relevant.

For the ROS Mixed components the code generator is designed to completely implement the ports and prepare the Service Handler classes to be completed manually. This approach reduces considerably the integration effort for the user, who can concentrate on a particular area of the code to implement the logic of the component, consistently with the implementation of [SeRoNet plain components](../../../SeRoNet-Tooling-Hello-World/#creating-two-new-example-components).

That means that the user should be mostly interested on the code related  to the service handler, which can be found under *smartsoft/src*. There you we can find for this example the  source file (*smartsoft/src/Base_driver_init.cc*).

The source code of the Base_driver_init. (*smartsoft/src/Base_driver_init..cc*) contains the method *handleQuery* which getting as input the current message from the SeRoNet middleware (type ROSRos_core::Std_srvs_TriggerRequest) tranform it to a ROS type (std_srvs/Trigger)  and send the data to ROS through the ROS service */base/driver/init* (implemented in the *ComponentROSBaseInitRosPortBaseClass* class; code -> *ROS/src-gen/ComponentROSBaseInitRosPortBaseClass.hh* ):

![Service Handler Source Code 01](Screenshots/06-servicehandler_Implementation.png)

--> [Solution code](ComponentROSBaseInit) :wink:

### Execution

This section requires a proper installation of the SeRoNet backend and the correct setup  of the workspaces (see [SeRoNet workspace setup](../ROSMixedPortTutorials_WSsetup.md))

The first step, before we execute the code, is build the software. Unfortunately, the ROS build environment is not well supported by Eclipse which means that for the ROS Mixed Port examples the code have to be compiled using a terminal. 

```
source /opt/ros/*DISTRO*/setup.bash
cd *YourWSPath*/ComponentROSBaseInit
cd smartsoft
mkdir build
cd build
cmake ..
make
```

The previous commands have to create a SeRoNet executable file for the ComponentROSBaseInit under the folder *$SMART_ROOT_ACE/bin*, which execution will create a ROS service call  to the  */base/driver/init* service and relay the command got by the SeRoNet *Cob4BaseInit* component.

As usual, open a new terminal window and start the ROS master:

```
roscore
```

In a second terminal window execute your robot simulation for example the Care-O-bot one: 
```
roslaunch cob_bringup_sim robot.launch robot:=cob4-3 robot_env:=empty
```

To configure the connection ACE at startup searches for an according configuration file for every component within a local folder named etc. For instance, for the Cob4BaseInit component, an ini-file named *Cob4BaseInit.ini* can be created within the folder *$SMART_ROOT_ACE/etc*:

```
mkdir $SMART_ROOT_ACE/etc
cp $SMART_PACKAGE_PATH/SeRoNet-examples/SeRoNet-Tooling-ROS-Mixed-Port/ROS-MixedPort-Examples/ROSServiceCall_examples/*.ini $SMART_ROOT_ACE/etc/.
```

And lastly, in a two new terminal we have to start the *ACE Naming Service* daemon to allow the communication or the ACE side, the *SmartJoystickServer* device and our created ComponentRoscob4_3 as Follows:

```
cd $SMART_ROOT_ACE
./startSmartSoftNamingService
./bin/ComponentROSBaseInit
./bin/Cob4BaseInit
```

![Terminal solution](Screenshots/10-terminal.png)

