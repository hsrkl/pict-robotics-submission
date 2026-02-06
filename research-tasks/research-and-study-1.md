# Background

- ROS is a middleware that lives on a Linux OS running on a robot. 
- It acts like a layer between programs that are deployed on the robot and the robot's actual operating system and gives programmers access to tools for controlling the robot.
- It officially supports python and C++, with community support for several different languages
- It has a lot of applications in several industries, including:
	- Amazon Robotics uses robots in warehouses for tasks like moving and sorting, and they use ROS to control them
	- ROS is a generalized middleware that any computer running Linux can run, so it has applications in low-scale manufacturing (where adaptability reduces costs)
	- Autoware is a widely used open source self-driving car software that's almost entirely built on ROS
	- VIPER (NASA's upcoming polar exploration lunar rover) is using a ROS 2 based software architecture for testing and operations
# Components

### Node
- Process that performs a certain *single* action
- Each node runs in its own process and runtime environment
- Nodes can be in different programming languages
## Topic
- A communication channel consisting of publishers and subscribers
- Nodes can subscribe to a topic, to receive messages that are sent on that topic.
## Service
- A synchronized communication channel where a client can send a request and receives a response from the server
- structure is defined in a `.srv` file
- Contains descriptions of the request and response types

## Message
- Typed data structures defined in `.msg` files
- ROS provides standard messages that you should use while coding to increase compatibility with different hardware
- Can create custom messages using the Interface Development Language

###### Sources
1. https://www.youtube.com/watch?v=mjrxf8EFSb8
2. https://autoware.org/
3. https://science.nasa.gov/mission/viper/lunar-operations/
4. https://docs.ros.org/en/humble/Tutorials/Beginner-CLI-Tools/Understanding-ROS2-Nodes/Understanding-ROS2-Nodes.html
5. https://docs.ros.org/en/humble/Concepts/Basic/About-Interfaces.html
6. https://docs.ros.org/en/humble/Concepts/Basic/About-Topics.html
7. https://docs.ros.org/en/humble/Concepts/Basic/About-Nodes.html