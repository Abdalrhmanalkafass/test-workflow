cmake_minimum_required(VERSION 3.10)
project(MyCalculatorTests)

# Enable testing with CMake
enable_testing()

# Find the Google Test package
find_package(GTest REQUIRED)

include_directories(${GTEST_INCLUDE_DIRS})

# Add your test cpp file
add_executable(calctest calctest.cpp)
target_link_libraries(calctest ${GTEST_LIBRARIES} pthread)

# Add the test to CMake's test runner
add_test(NAME calctest COMMAND calctest)
