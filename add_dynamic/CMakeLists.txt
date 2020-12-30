cmake_minimum_required(VERSION 2.8)

project(add_dynamic)

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_library(${PROJECT_NAME} SHARED
    ${CMAKE_CURRENT_SOURCE_DIR}/src/add_dy.cpp
)

#set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/../lib)
if(MSVC)
add_definitions(
    -DEFIMPL
)
endif()

set_target_properties(${PROJECT_NAME} PROPERTIES
                      VERSION 1.0
                      SOVERSION 1
                      OUTPUT_NAME ${PROJECT_NAME}
                      CLEAN_DIRECT_OUTPUT 1
                      RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/../lib
                      ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/../lib
)
