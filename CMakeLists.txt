cmake_minimum_required(VERSION 3.1)
# Enable C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

project(image_modification)
find_package(OpenCV REQUIRED)

#include directory
include_directories(include ${OpenCV_INCLUDE_DIRS})

#Can manually add the sources using the set command as follows:
set(SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp
            ${CMAKE_CURRENT_SOURCE_DIR}/src/BaseClass.hpp 
            ${CMAKE_CURRENT_SOURCE_DIR}/src/ImageToGreyscale.cpp 
            ${CMAKE_CURRENT_SOURCE_DIR}/src/ImageToGreyscale.hpp
            ${CMAKE_CURRENT_SOURCE_DIR}/src/ImageRotator.cpp
            ${CMAKE_CURRENT_SOURCE_DIR}/src/ImageRotator.hpp)

add_executable(image_modification ${SOURCES})
target_link_libraries(image_modification ${OpenCV_LIBS})
