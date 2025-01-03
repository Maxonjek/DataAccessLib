cmake_minimum_required(VERSION 3.25)
project(DataAccessLib)

set(CMAKE_CXX_STANDARD 23)

add_library(DataAccessLib SHARED
        src/DataAccess.cpp)

target_include_directories(DataAccessLib PUBLIC include)

add_executable(testAccess test/testAcc.cpp)
target_link_libraries(testAccess PRIVATE DataAccessLib)