#!/bin/bash
#--------------------------------------------------------------------------
# Code generated by the SmartSoft MDSD Toolchain
# The SmartSoft Toolchain has been developed by:
#  
# Service Robotics Research Center
# University of Applied Sciences Ulm
# Prittwitzstr. 10
# 89075 Ulm (Germany)
#
# Information about the SmartSoft MDSD Toolchain is available at:
# www.servicerobotik-ulm.de
#
# Please do not modify this file. It will be re-generated
# running the code generator.
#--------------------------------------------------------------------------
#
# run this script from the component's root folder to deploy the scenario to device.
#

TARGET_SSHUSER=
TARGET_IP=localhost
TARGET_DIRECTORY="/tmp"
DEPLOYMENT_DIRECTORY=SystemHelloPubSub.deployment/

echo "#######################################################"
echo "## Deployment of Device LocalPC / $TARGET_IP"
echo "#######################################################"
echo "Target SSH user:      $TARGET_SSHUSER"
echo "Target IP:            $TARGET_IP"
echo "Target directory:     $TARGET_DIRECTORY"
echo "Deployment directory: $DEPLOYMENT_DIRECTORY"

echo "Working directory of deployment script: "`pwd`

echo Sourcing referenced projects
source src-gen/deployment/referenced-projects

DEPLOY_LIBRARIES_USER=""
###############################
echo "Sourcing pre-deployment script for ComponentHelloPublisher... (errors might be ignored)"
DEPLOY_LIBRARIES=""
DEPLOY_COMPONENT_FILES=""
source src/predeploy-ComponentHelloPublisher.sh 2>&1

for I in $DEPLOY_LIBRARIES; do
	if [ -e "$SMART_ROOT_ACE/bin/$I" ]; then
		FILE="$SMART_ROOT_ACE/bin/$I"
	else
		FILE="$SMART_ROOT_ACE/lib/$I"
	fi
	DEPLOY_LIBRARIES_USER="$DEPLOY_LIBRARIES_USER $FILE"
done

DEPLOY_COMPONENT_FILES_PATHS_ComponentHelloPublisher=""
for I in $DEPLOY_COMPONENT_FILES; do
	if ls $REFERENCED_PROJECT_ComponentHelloPublisher/$I > /dev/null 2>&1; then
		DEPLOY_COMPONENT_FILES_PATHS_ComponentHelloPublisher="$DEPLOY_COMPONENT_FILES_PATHS_ComponentHelloPublisher $REFERENCED_PROJECT_ComponentHelloPublisher/$I"
	elif ls $I > /dev/null 2>&1; then
		DEPLOY_COMPONENT_FILES_PATHS_ComponentHelloPublisher="$DEPLOY_COMPONENT_FILES_PATHS_ComponentHelloPublisher $I"
	fi
done

#########################
## BEHAVIOR FILES
shopt -u | grep -q nullglob && changed=true && shopt -s nullglob
for entry in "$REFERENCED_PROJECT_ComponentHelloPublisher"/model/*.smartTcl
do
  DEPLOY_COMPONENT_BEHAVIOR_MODEL_FILES_ComponentHelloPublisher="$DEPLOY_COMPONENT_TCL_MODEL_FILES_ComponentHelloPublisher $entry"
done
[ $changed ] && shopt -u nullglob; unset changed

echo "$DEPLOY_COMPONENT_BEHAVIOR_MODEL_FILES_ComponentHelloPublisher "
#########################

echo
###############################
 
###############################
echo "Sourcing pre-deployment script for ComponentHelloSubscriber... (errors might be ignored)"
DEPLOY_LIBRARIES=""
DEPLOY_COMPONENT_FILES=""
source src/predeploy-ComponentHelloSubscriber.sh 2>&1

for I in $DEPLOY_LIBRARIES; do
	if [ -e "$SMART_ROOT_ACE/bin/$I" ]; then
		FILE="$SMART_ROOT_ACE/bin/$I"
	else
		FILE="$SMART_ROOT_ACE/lib/$I"
	fi
	DEPLOY_LIBRARIES_USER="$DEPLOY_LIBRARIES_USER $FILE"
done

DEPLOY_COMPONENT_FILES_PATHS_ComponentHelloSubscriber=""
for I in $DEPLOY_COMPONENT_FILES; do
	if ls $REFERENCED_PROJECT_ComponentHelloSubscriber/$I > /dev/null 2>&1; then
		DEPLOY_COMPONENT_FILES_PATHS_ComponentHelloSubscriber="$DEPLOY_COMPONENT_FILES_PATHS_ComponentHelloSubscriber $REFERENCED_PROJECT_ComponentHelloSubscriber/$I"
	elif ls $I > /dev/null 2>&1; then
		DEPLOY_COMPONENT_FILES_PATHS_ComponentHelloSubscriber="$DEPLOY_COMPONENT_FILES_PATHS_ComponentHelloSubscriber $I"
	fi
done

#########################
## BEHAVIOR FILES
shopt -u | grep -q nullglob && changed=true && shopt -s nullglob
for entry in "$REFERENCED_PROJECT_ComponentHelloSubscriber"/model/*.smartTcl
do
  DEPLOY_COMPONENT_BEHAVIOR_MODEL_FILES_ComponentHelloSubscriber="$DEPLOY_COMPONENT_TCL_MODEL_FILES_ComponentHelloSubscriber $entry"
done
[ $changed ] && shopt -u nullglob; unset changed

echo "$DEPLOY_COMPONENT_BEHAVIOR_MODEL_FILES_ComponentHelloSubscriber "
#########################

echo
###############################
 


DEPL_FILES="
$SMART_ROOT_ACE/lib/libAceSmartSoftKernel.so.*
$SMART_ROOT_ACE/lib/libSmartProperty.so.*
src-gen/deployment/tiler.sh
src-gen/deployment/start-LocalPC.sh
$SMART_ROOT_ACE/bin/NamingService
src-gen/deployment/ns_config.ini
src/ComponentHelloPublisher_data
src/startstop-hooks-ComponentHelloPublisher.sh
$SMART_ROOT_ACE/bin/ComponentHelloPublisher
src-gen/combined-ini-files/ComponentHelloPublisher.ini
$SMART_ROOT_ACE/lib/libDomainHelloServices.so*
src/ComponentHelloSubscriber_data
src/startstop-hooks-ComponentHelloSubscriber.sh
$SMART_ROOT_ACE/bin/ComponentHelloSubscriber
src-gen/combined-ini-files/ComponentHelloSubscriber.ini
$SMART_ROOT_ACE/lib/libDomainHelloServices.so*

$DEPLOY_LIBRARIES_USER
"

FILES_MISSING=false
for FILE in $DEPL_FILES; do
	if [ ! -e $FILE ]; then
		echo "Deployment: No such file or directory: $FILE"
		FILES_MISSING=true
	fi
done

if [ "$FILES_MISSING" = "true" ]; then
	echo
	echo "ERROR: FILES ARE MISSING FROM THE DEPLOYMENT (see above). Did you compile all components?"
	echo 
	exit 1
fi


if [ "$1" = "local" ]; then
	# local deployment
	mkdir -p $DEPLOYMENT_DIRECTORY
	rsync -l -r -v --progress --exclude ".svn" $DEPL_FILES $DEPLOYMENT_DIRECTORY/LocalPC
else
	# remote deployment
	SSH_TARGET=localhost:$TARGET_DIRECTORY/$DEPLOYMENT_DIRECTORY
	echo "Deployment to $SSH_TARGET"
	ssh localhost mkdir -p $TARGET_DIRECTORY/$DEPLOYMENT_DIRECTORY
	
	TMPDIR=$(mktemp -d --suffix=.deployment) || exit 1
	echo "Temporary directory: $TMPDIR"
	mkdir $TMPDIR/behaviorFiles
	trap "rm -rf $TMPDIR" EXIT
	
	# collect files in $TMPDIR
	#rsync -l -r -v --progress --exclude ".svn" $DEPL_FILES $TMPDIR/
	cp -rv $DEPL_FILES $TMPDIR 2>&1
#rsync -l -r -v --progress --exclude ".svn" $DEPLOY_COMPONENT_FILES_PATHS_ComponentHelloPublisher $TMPDIR/ComponentHelloPublisher_data/
if [ ! "$DEPLOY_COMPONENT_FILES_PATHS_ComponentHelloPublisher" = "" ]; then
	cp -rv $DEPLOY_COMPONENT_FILES_PATHS_ComponentHelloPublisher $TMPDIR/ComponentHelloPublisher_data/ 2>&1
fi

if [ ! "$DEPLOY_COMPONENT_BEHAVIOR_MODEL_FILES_ComponentHelloPublisher" = "" ]; then
	cp -rv $DEPLOY_COMPONENT_BEHAVIOR_MODEL_FILES_ComponentHelloPublisher $TMPDIR/behaviorFiles/ 2>&1
fi

cp -v $REFERENCED_PROJECT_ComponentHelloPublisher/smartsoft/src/startstop-hooks.sh $TMPDIR/startstop-hooks-component-ComponentHelloPublisher.sh 2>/dev/null
#rsync -l -r -v --progress --exclude ".svn" $DEPLOY_COMPONENT_FILES_PATHS_ComponentHelloSubscriber $TMPDIR/ComponentHelloSubscriber_data/
if [ ! "$DEPLOY_COMPONENT_FILES_PATHS_ComponentHelloSubscriber" = "" ]; then
	cp -rv $DEPLOY_COMPONENT_FILES_PATHS_ComponentHelloSubscriber $TMPDIR/ComponentHelloSubscriber_data/ 2>&1
fi

if [ ! "$DEPLOY_COMPONENT_BEHAVIOR_MODEL_FILES_ComponentHelloSubscriber" = "" ]; then
	cp -rv $DEPLOY_COMPONENT_BEHAVIOR_MODEL_FILES_ComponentHelloSubscriber $TMPDIR/behaviorFiles/ 2>&1
fi

cp -v $REFERENCED_PROJECT_ComponentHelloSubscriber/smartsoft/src/startstop-hooks.sh $TMPDIR/startstop-hooks-component-ComponentHelloSubscriber.sh 2>/dev/null
	
	#collect and copy behavior related files
	echo "Sourcing behavior files..."
	test -f src-gen/deployment/deploy-behavior-files.sh && source src-gen/deployment/deploy-behavior-files.sh
	
	# actually deploy:
	rsync -z -l -r -v --progress --exclude ".svn" -e ssh $TMPDIR/ $SSH_TARGET
fi


if [ "$?" != "0" ]; then
	echo "ERROR: Files could not be deployed to remote host."
	#gdialog --title ERROR --msgbox "Files could not be deployed host."
	exit 1
fi

echo -e "\n\nDeployment to device LocalPC finished.\n\n"
