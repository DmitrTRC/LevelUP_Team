cmake_minimum_required(VERSION 3.23)
project(LevelUP_Reviewers_Assign)

set(CMAKE_CXX_STANDARD 20)

include(FetchContent)

FetchContent_Declare(json URL https://github.com/nlohmann/json/releases/download/v3.11.2/json.tar.xz)
FetchContent_MakeAvailable(json)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
message(STATUS "HW_3_5 Output directory: ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}")


#add_subdirectory(src)
#add_subdirectory(tests)

add_executable(team main.cpp)

target_link_libraries(team PRIVATE nlohmann_json::nlohmann_json)