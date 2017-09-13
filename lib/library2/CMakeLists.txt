file(GLOB library2_SRC
    "*.cpp"
)

add_library(library2 ${library2_SRC})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
