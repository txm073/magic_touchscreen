cmake_minimum_required(VERSION 3.11)

find_package(PkgConfig REQUIRED)
pkg_search_module(LIBEVDEV REQUIRED libevdev)

add_library(magicts STATIC magicts.cpp)
target_link_libraries(magicts PRIVATE ${LIBEVDEV_LIBRARIES})
target_include_directories(magicts PRIVATE ${LIBEVDEV_INCLUDE_DIRS})
