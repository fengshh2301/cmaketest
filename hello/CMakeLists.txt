cmake_minimum_required(VERSION 2.8)

project(hello)

add_executable(${PROJECT_NAME}
    ./src/main.cpp
)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/../bin)