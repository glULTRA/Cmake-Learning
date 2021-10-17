cmake_minimum_required(VERSION 3.21.3)

project(ULTRA)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(external/glfw)
add_subdirectory(src/include)

target_include_directories(${PROJECT_NAME}
    PUBLIC src/include
    PUBLIC external/glfw/include
)

target_link_directories(${PROJECT_NAME}
    PRIVATE src/lib
    PRIVATE external/glfw/src
)

target_link_libraries(${PROJECT_NAME} Engine glfw shell32 user32 gdi32 opengl32)
