set(SOURCE
    ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
   )

add_executable( cmakesampleproject ${SOURCE} )
target_link_libraries( cmakesampleproject library1 library2 )
include_directories(${CMAKE_SOURCE_DIR})

