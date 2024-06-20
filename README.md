# ENPM809Y Final Project- Goal Reacher Robot using ArucoMarkers
This repository contains all necessary files to run the Goal Reacher Robot project, which utilizes Aruco markers for navigation and goal-reaching tasks. This project is designed for use with ROS and Gazebo environments, providing a practical example of robotics control systems in action.

**Note-** The detailed instructions on how to run the project is given in the file [README Pdf](readme.pdf)

## Prerequisites

Before you start, ensure you have the following installed on your system:
- ROS (Robot Operating System) - Recommended version: ROS Noetic
- Gazebo simulator
- Python 3
- OpenCV with contributions package
- git

## Installation

Follow these steps to set up your environment:

1. Create a ROS Workspace:
   ```bash
   mkdir -p ~/goal_reacher_ws/src
   cd ~/goal_reacher_ws/src
   ```
2. Clone the Repository:
```bash
git clone https://github.com/aashrita-chemakura/Goal-Reacher-Robot-using-Arucomarkers.git
cd Goal-Reacher-Robot-using-Arucomarkers
```
3. Install Dependencies:
Make sure all dependent packages are installed.
```bash
rosdep install --from-paths src --ignore-src -r -y
```
## Building the Project
Compile the project using catkin_make from the root of your workspace (goal_reacher_ws):
```bash
cd ~/goal_reacher_ws
catkin_make
source devel/setup.bash
```
## Running the Simulation
To launch the simulation environment and start the robot, use the following commands:
1. Launch the Gazebo Simulation:
   ```bash
   roslaunch goal_reacher_simulation simulation.launch
   ```
2. Run the Goal Reacher Node:
   ```bash
   rosrun goal_reacher goal_reacher_node
   ```
## Using the System
1. Goal Setting:
The robot can be directed towards any goal within the Gazebo environment by placing Aruco markers. The system uses these markers to navigate and reach the designated goals.

3. Monitoring:
Utilize RViz for real-time visualization of the robot's movements and the environment.

## Troubleshooting
- **ROS not found:** Ensure that ROS environment setup is sourced correctly in your `.bashrc` or manually source it using `source /opt/ros/noetic/setup.bash`.
- **Dependencies missing:** Run `rosdep install` as outlined above to ensure all dependencies are correctly installed.
