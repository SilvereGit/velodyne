# Velodyne package for ROS-melodic  
========

Velodyne_ is a collection of ROS_ packages supporting `Velodyne high
definition 3D LIDARs`_.

** Why this branch is needed (the problem 1)?**::

 Previously, ROS-Kinetic was the ROS distribution used in SLAM pipeline. Previous velodyne package is ROS-Kinetic compatible. However, ROS-Kinetics will be unsupproted starting from April 2021.
 Therefore, Migrating to ROS-Melodic is important. 

** Why the current Kinetic package will not work on Melodic (the problem 2)?**::

 Velodyne pakcage has a driver package which is OS related. ROS Kinetic and ROS Melodic can not work together because they are supported by different Linux versions ( 16.04 for Kinetic and 18.04 for Melodic).
  

** Why not directly install ROS-Melodic binary packages (the problem 3)?**::

 The velodyne package for pointcloud manipulation has been changed from Kinetic to Melodic. Function signatures have been changed and some features have been Deprecated. Our ROS handling node (packets_to_points.cpp) in the pipeline depends on the function signatures in Kinetic Pointcloud package.
 Therefore, installing ALL Melodic related packages will breake (packets_to_points.cpp) node.

 ** The solution **::

  Fortunately, velodyne pointcloud package does not depend on the underlying OS. Therefore, the binaries of Melodic velodyne driver package will be installed. Then velodyne point cloud package will be built from source (catkin tools) using the code in this repo.  
 
## Dependencies
[ROS Melodic](http://wiki.ros.org/melodic/Installation/Ubuntu) with ```rosdep``` installed.

## Building
1- install ROS Melodic Velodyne package
```
sudo apt-get install ros-melodic-velodyne
```
2- change directory to catkin_ws (change the path according your strucutre)
```
cd ~/catking_ws/src
```
3- clone the repo.
4- change directory to catkin_ws
```
cd ..
```
5- build using catkin make or catkin tool
  * building using catkin make
  ```
  catkin_make
  ```
  * building using catkin build
  ```
  catkin build velodyne
  ```
6- source the current workspace
```
source devel/setup.bash
```
 


 
 
 

The current ``master`` branch works with ROS Kinetic, Jade, and
Indigo.  It may work with Hydro and Groovy, but that has not been
tested recently.  To build for Fuerte from source, check out the
``rosbuild`` branch instead of ``master``.

.. _ROS: http://www.ros.org
.. _Velodyne: http://www.ros.org/wiki/velodyne
.. _`Velodyne high definition 3D LIDARs`: http://www.velodynelidar.com/lidar/lidar.aspx
