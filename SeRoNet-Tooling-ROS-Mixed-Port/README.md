# SeRoNet Tooling Collection - ROS support

The [Robot Operanting System (ROS)](https://www.ros.org/) is a flexible framework for writing robot software. It is a collection of tools, libraries, and conventions that aim to simplify the task of creating complex and robust robot behavior across a wide variety of robotic platforms.

ROS offers components (called packages) that cover most robotics sub-domains, there are already over 3000 packages available. The ROS code, mostly hand written, lack habitually a proper formal description of its architecture, in other words models. The RoS tooling, part of the SeRoNet tooling collection, aims to compensate this shortcoming providing a formal language that allows to the user the description of ROS basic concepts. Thanks to this language we can very easily connect ROS existing code with SeRoNet structures.

To switch to the ROS Tooling perspective within the SeRoNet tooling, you have to go the menu **Window**=>**Perspective**=>**Open Perspective** and choose **ROS developer**.

As ROS does the first objects to be defined are the types of messages, services and actions. To make easier the setup of the workspace, a button clones from Git and import automatically the most common ROS types (this function works only with Internet connection):

 ![ImportROSCommonObjects](Screenshots/01-ImportCommnObjects.png)

A new project will be automatically loaded to your project explorer including a set of ROS package descriptions:

 ![de.fraunhofer.ipa.ros.communication.objects.png](Screenshots/de.fraunhofer.ipa.ros.communication.objects.png)

In case, likely, that the ROS software to be described use other type of object specifications, we facilitate a couple of tools to auto generate the corresponding model (these tools work only for messages and services, the action types have to be unfortunately implemented manually):

- Use our cloud facilities : [ROS Model Extractor](http://ros-model.seronet-project.de/) and navigate to the tag "Specification Analysis". There, if the package that contains the message types is released for Melodic you just have to give the name of the package and press **Submit**. Otherwise please specify first the name of the Git repository that hold the package

- Use locally the helper script:

    ```
    source /your_ROS_workspace
    wget https://raw.githubusercontent.com/ipa320/ros-model-cloud/master/extractor-interface/scripts/generate_messages_model_helper.sh
    chmod +x generate_messages_model_helper.sh
    ./generate_messages_model_helper.sh ROS_PACKAGE_NAME > ROS_PACKAGE_NAME.ros
    ```

The file generated, independently of the method, will have a *.ros* extension and can be copied to the folder "basic_msgs" of the "de.fraunhofer.ipa.ros.communication.objects" project.


