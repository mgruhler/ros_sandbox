#include "ros/ros.h"
#include "std_msgs/String.h"
#include <sstream>

void chatterCallback(const std_msgs::String& msg)
{
 ROS_INFO("I just heard \"%s\".", msg.data.c_str());
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "cpp_test");
  ros::NodeHandle n;
  ros::Rate loop_rate(10);

  ros::Subscriber sub = n.subscribe("/test", 1000, chatterCallback);

  while (ros::ok())
  {
    ros::spinOnce();
    loop_rate.sleep();
  }


  return 0;
}
