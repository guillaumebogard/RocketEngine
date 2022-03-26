cmake_minimum_required(VERSION 3.11)

project(greenblade VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# creates the compile_commands.json file
set(CMAKE_EXPORT_COMPILE_COMMANDS ON CACHE INTERNAL "")

set(GREENBLADE_BINARY_NAME greenblade)

set(GREENBLADE_SRC_PATH    src       )

set(GREENBLADE_SRC
    ${GREENBLADE_SRC_PATH}/main.cpp
)

set(GREENBLADE_INCLUDE_PATHS
    ${GREENBLADE_SRC_PATH}/
)

add_executable(${GREENBLADE_BINARY_NAME} ${GREENBLADE_SRC})

target_include_directories(${GREENBLADE_BINARY_NAME} PUBLIC  ${RTYPE_SERVER_INCLUDE})
target_compile_options    (${GREENBLADE_BINARY_NAME} PRIVATE -W -Wall -Wextra -Wshadow -pedantic)
