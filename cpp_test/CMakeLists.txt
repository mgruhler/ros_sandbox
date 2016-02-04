cmake_minimum_required(VERSION 2.8.3)
project(cpp_test)

find_package(catkin REQUIRED COMPONENTS roscpp std_msgs)

catkin_package()

include_directories(src ${catkin_INCLUDE_DIRS})
add_executable(cpp_test_node src/cpp_test_node.cpp)
target_link_libraries(cpp_test_node ${catkin_LIBRARIES})