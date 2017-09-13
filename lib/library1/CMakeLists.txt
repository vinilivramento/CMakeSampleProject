file(GLOB library1_SRC
    "*.cpp"
)

add_library(library1 ${library1_SRC})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
