

project(team_lib)

set(CMAKE_CXX_STANDARD 20)

#Build library

set(HEADER_FILES
        Person.hpp
        Team_Db.hpp
        )

set(SOURCE_FILES
        Person.cpp
        Team_Db.cpp
        )

add_library(team_lib ${SOURCE_FILES} ${HEADER_FILES})

target_link_libraries(team_lib PRIVATE nlohmann_json::nlohmann_json)





