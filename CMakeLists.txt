cmake_minimum_required(VERSION 2.8)
project(catch_ros_example)

find_package(catkin REQUIRED COMPONENTS
  catch_ros
  roscpp
)

catkin_package(
  CATKIN_DEPENDS
    catch_ros
    roscpp
)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(
  ${catkin_INCLUDE_DIRS}
)

if(CATKIN_ENABLE_TESTING)
  add_subdirectory(test)
endif()