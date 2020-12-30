cmake_minimum_required(VERSION 2.8)

project(add_static)

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_library(${PROJECT_NAME} STATIC
    ${CMAKE_CURRENT_SOURCE_DIR}/src/add_st.cpp
)

#set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/../lib)

set_target_properties(${PROJECT_NAME} PROPERTIES
                        OUTPUT_NAME ${PROJECT_NAME}
                        CLEAN_DIRECT_OUTPUT 1
                        ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/../lib
)
