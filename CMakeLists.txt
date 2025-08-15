cmake_minimum_required(VERSION 3.11)
project(magicts)

find_package(PkgConfig REQUIRED)
pkg_search_module(LIBEVDEV REQUIRED libevdev)

add_library(${CMAKE_PROJECT_NAME} STATIC magicts.cpp)
target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE ${LIBEVDEV_LIBRARIES})
target_include_directories(${CMAKE_PROJECT_NAME} PRIVATE ${LIBEVDEV_INCLUDE_DIRS})
