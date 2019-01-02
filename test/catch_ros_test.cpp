#include <catch_ros/catch.hpp>
#include <ros/ros.h>


TEST_CASE("adding duration gives future time", "[ROS Time]") {
  
  ros::NodeHandle nh("~"); // this initializes time

  ros::Time time_now = ros::Time::now();

  ros::Time time_future = time_now + ros::Duration(5.0);

  REQUIRE(time_future > time_now);

}