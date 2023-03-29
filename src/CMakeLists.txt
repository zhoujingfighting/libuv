
set(SRC_SOURCE
    fs.cpp
    hello-word.cpp
)
add_library(demo SHARED ${SRC_SOURCE})
target_link_directories(demo PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../libuv-learning/install/lib)
target_link_libraries(demo  PUBLIC uv)
target_include_directories(demo PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../libuv-learning/install/include ${CMAKE_CURRENT_SOURCE_DIR}/../include)