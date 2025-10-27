cmake_minimum_required(VERSION 3.10)

project(template_cmake)

include(cmake/CPM.cmake)

include(Libs.cmake)

add_subdirectory(src/core)
add_subdirectory(src/app)
