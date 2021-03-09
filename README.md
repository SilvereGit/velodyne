# Velodyne package for ROS-melodic  

* Velodyne_ is a collection of ROS_ packages supporting `Velodyne high
definition 3D LIDARs`_.

* The motivations behind building this page can be found (here)[https://silvereteam.atlassian.net/wiki/spaces/commondocs/pages/85852167/Velodyne+ROS-Melodic+package]

 
## Dependencies
  * [ROS Melodic](http://wiki.ros.org/melodic/Installation/Ubuntu) with ```rosdep``` installed.
---
## Building
- install ROS Melodic Velodyne package
```
sudo apt-get install ros-melodic-velodyne
```
- change directory to catkin_ws (change the path according your strucutre)
```
cd ~/catking_ws/src
```
- clone the repo to src directory.
- change directory to catkin_ws
```
cd ..
```
- build using catkin make or catkin tool
  * building using catkin make
  ```
  catkin_make
  ```
  * building using catkin build
  ```
  catkin build velodyne
  ```
- source the current workspace
```
source devel/setup.bash
```