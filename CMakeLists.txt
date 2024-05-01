cmake_minimum_required(VERSION 3.7)

project(SDL2Test)
set( CMAKE_EXPORT_COMPILE_COMMANDS ON )
# set(CMAKE_CXX_FLAGS "-lSDL2_image")

find_package(SDL2 REQUIRED)
include_directories(
    ${SDL2_INCLUDE_DIRS}
    ${SDL2_image_INCLUDE_DIRS}
)

file(GLOB SOURCES "src/*.cpp")
add_executable(SDL2Test ${SOURCES})

target_include_directories(${PROJECT_NAME} 
    PRIVATE 
    ${CMAKE_SOURCE_DIR}/include
)
target_link_libraries(SDL2Test 
    ${SDL2_LIBRARIES}
    ${SDL2_image_LIBRARIES}
    SDL2_image
)
