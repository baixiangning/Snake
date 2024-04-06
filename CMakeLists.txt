cmake_minimum_required(VERSION 3.0.0)
project(learn-opengl VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)


add_subdirectory(depends/glfw)

add_subdirectory(depends/glad)

set(MAIN_INCLUDE
  ${PROJECT_SOURCE_DIR}/depends/glad/include/
  ${PROJECT_SOURCE_DIR}/depends/glfw/include/
  ${PROJECT_SOURCE_DIR}/depends/stb/
)
set(MAIN_LIBRARY
  glfw
  glad
)

add_subdirectory(src)
