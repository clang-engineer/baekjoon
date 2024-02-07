# declare SRC_FILES variable
file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS
    ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)

# declare executable library
add_library(custom_library STATIC ${SRC_FILES})

# set include directories
target_include_directories(custom_library PUBLIC ${CMAKE_SOURCE_DIR}/include)

# set compile options
target_compile_options(custom_library PRIVATE -Wall -Werror)

# set compile features
target_compile_features(custom_library PUBLIC cxx_std_17)

include(FetchContent)

FetchContent_Declare(
  Fmt
  GIT_REPOSITORY "https://github.com/fmtlib/fmt"
  GIT_TAG "7.1.3"
)

FetchContent_MakeAvailable(Fmt)

target_link_libraries(custom_library PRIVATE fmt)
