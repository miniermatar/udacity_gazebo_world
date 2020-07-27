This project focus on designing a home for a robot using Gazebo 11. The repo includes the Robot’s world, the robot model and a script to interact with Gazebo. The script displays “Welcome to JM’s world” when the gazebo world file is open.

The script need to be built before it can work as expected. To build it follow the following steps:

	Create a folder name "build" under "myrobot" folder
	With terminal in the build directory execute "cmake ../"
	Then execute "make"
	Export the plugin to Gazebo by executing the following command: 
		export GAZEBO_PLUGIN_PATH=${GAZEBO_PLUGIN_PATH}:/home/workspace/myrobot/build
	note: "/home/workspace/myrobot/build" is the path to the build folder
