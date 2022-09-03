

project(team_lib)

set(CMAKE_CXX_STANDARD 20)

#Build library

set(HEADER_FILES
        Person.hpp
        )

set(SOURCE_FILES
        Person.cpp
        )

add_library(team_lib ${SOURCE_FILES} ${HEADER_FILES})



