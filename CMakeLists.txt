cmake_minimum_required(VERSION 3.20)

project(bmp)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

file(GLOB sourcefiles ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)

add_executable(bmp_e ${sourcefiles})
list(FILTER sourcefiles EXCLUDE REGEX "main.c")
add_library(bmp SHARED ${sourcefiles})

target_include_directories(
  bmp
    PUBLIC
      $<INSTALL_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
      $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/include>
      $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
      ${CMAKE_CURRENT_BINARY_DIR}/include
      ${CMAKE_CURRENT_SOURCE_DIR}/include)
