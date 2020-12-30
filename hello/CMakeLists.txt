cmake_minimum_required(VERSION 2.8)

project(hello)

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}/../add_static/include
)

link_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/../lib
)

add_executable(${PROJECT_NAME}
    ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/add.cpp
)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/../bin)

target_link_libraries(${PROJECT_NAME}
    add_static
)
