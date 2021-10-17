cmake_minimum_required(VERSION 3.21.3)

project(ULTRA)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(src/include)

target_link_libraries(${PROJECT_NAME} Engine)
