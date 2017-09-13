project(cmakesampleproject)
cmake_minimum_required(VERSION 3.2.2)
set (CMAKE_CXX_STANDARD 14)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

if (CMAKE_COMPILER_IS_GNUCXX)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fext-numeric-literals -Wall -Werror")
endif()

message("CXX FLAGS FOR CURRENT PROJECT:" ${CMAKE_CXX_FLAGS})
#Generate a compile_commands.json
set(CMAKE_EXPORT_COMPILE_COMMANDS 1)

enable_testing()
add_subdirectory(lib)
add_subdirectory(src)
add_subdirectory(test)
