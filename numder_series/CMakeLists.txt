cmake_minimum_required(VERSION 2.6)

project(numder_series)

set(CMAKE_INSTALL_PREFIX ${CMAKE_CURRENT_SOURCE_DIR}/../)
include_directories(${CMAKE_CURRENT_BINARY_DIR} ${CMAKE_CURRENT_SOURCE_DIR})
file(GLOB CPPS "*.cpp")
file(GLOB HPPS "*.hpp")

add_executable(${PROJECT_NAME} ${CPPS} ${HPPS})
install(TARGETS ${PROJECT_NAME} DESTINATION bin)