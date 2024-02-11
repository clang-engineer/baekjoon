include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        release-1.12.0
)

FetchContent_MakeAvailable(googletest)

file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS 
  ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)

add_executable(${PROJECT_NAME}_test ${SRC_FILES}
        _2252.cpp
        _1753.cpp
        _1916.cpp
        _1219.cpp)
target_link_libraries(${PROJECT_NAME}_test PRIVATE custom_library gtest gmock gtest_main)
