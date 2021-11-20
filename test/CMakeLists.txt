cmake_minimum_required(VERSION 3.13.0)
project(test_ci_tests)
enable_testing()


include(FetchContent)
FetchContent_Declare(
  googletest
  # Specify the commit you depend on and update it regularly.
  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
FetchContent_MakeAvailable(googletest)


add_executable(test_ci_tests $<TARGET_OBJECTS:test_ci>
  test_add.cpp
)

target_include_directories(test_ci_tests PUBLIC
  ${CMAKE_MODULE_PATH}
)

target_link_libraries(test_ci_tests PUBLIC 
    gtest_main gtest
)

add_test(NAME runtest COMMAND test_ci_tests)
