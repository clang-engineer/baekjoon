# define SRC_FILES variable to all file in this directory
file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS
  ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
  )

# define the executable
add_executable(${PROJECT_NAME} ${SRC_FILES}
        ../include/_1325.h)


target_link_libraries(${PROJECT_NAME} PUBLIC custom_library)
