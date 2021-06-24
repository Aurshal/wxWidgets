cmake_minimum_required(VERSION 3.20.3)

project(shareit)

find_package(wxWidgets REQUIRED COMPONENTS net core base)
include(${wxWidgets_USE_FILE})
include_directories(myapp include/)
add_executable(myapp main.cpp src/simple.cpp src/icon.cpp)
target_link_libraries(myapp ${wxWidgets_LIBRARIES})