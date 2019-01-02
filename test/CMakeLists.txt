catch_add_test(catch_test catch_test.cpp)
target_link_libraries(catch_test ${catkin_LIBRARIES})

find_package(rostest REQUIRED)

catch_add_rostest_node(catch_ros_test catch_ros_test.cpp)
target_link_libraries(catch_ros_test ${catkin_LIBRARIES})
add_rostest(catch_ros_test.test DEPENDENCIES catch_ros_test)