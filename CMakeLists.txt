cmake_minimum_required(VERSION 3.18)

project(util VERSION 1.0)

set(BUILD_SHARED_LIBS ON)

file(GLOB FILES ${PROJECT_SOURCE_DIR}/src/*.c)

add_library(${PROJECT_NAME} ${FILES})

set_property(TARGET ${PROJECT_NAME} PROPERTY C_STANDARD 99)

target_include_directories(${PROJECT_NAME}
    PUBLIC ${PROJECT_SOURCE_DIR}/inc
    PRIVATE ${PROJECT_SOURCE_DIR}/src # may not be needed
)