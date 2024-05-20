cmake_minimum_required(VERSION 3.5)
project(learn-opengl VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)


add_subdirectory(depends/glfw)

add_subdirectory(depends/glad)

add_subdirectory(depends/assimp)

set(MAIN_INCLUDE
  ${PROJECT_SOURCE_DIR}/depends/glad/include/
  ${PROJECT_SOURCE_DIR}/depends/glfw/include/
  ${PROJECT_SOURCE_DIR}/depends/stb/
  ${PROJECT_SOURCE_DIR}/depends/assimp/include/
)
set(MAIN_LIBRARY
  glfw
  glad
  assimp
)

add_subdirectory(src)
