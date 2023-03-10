cmake_minimum_required(VERSION 3.14)
project(tdd_potter_kata)

set(CMAKE_CXX_STANDARD 14)

include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)
enable_testing()

aux_source_directory(${CMAKE_CURRENT_LIST_DIR}/src src)

include_directories(
    ${CMAKE_CURRENT_LIST_DIR}/inc
)

add_executable(
    ${PROJECT_NAME}
    ${src}
)

target_link_libraries(
    ${PROJECT_NAME}
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(
    ${PROJECT_NAME}
)
