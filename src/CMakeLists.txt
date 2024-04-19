message("main ${MAIN_INCLUDE}")



aux_source_directory(. _SOURCES)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../depends/glm)

add_executable(main ${_SOURCES})

target_include_directories(
  main PUBLIC ${MAIN_INCLUDE}
)

target_link_libraries(
  main PUBLIC ${MAIN_LIBRARY}
)