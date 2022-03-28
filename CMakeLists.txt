cmake_minimum_required(VERSION 3.11)

project(rocketengine VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# creates the compile_commands.json file
set(CMAKE_EXPORT_COMPILE_COMMANDS ON CACHE INTERNAL "")

set(ROCKETENGINE_BINARY_NAME rocketengine)

set(ROCKETENGINE_SRC_PATH    src         )

set(ROCKETENGINE_SRC
    ${ROCKETENGINE_SRC_PATH}/main.cpp
)

set(ROCKETENGINE_INCLUDE_PATHS
    ${ROCKETENGINE_SRC_PATH}/
)

add_executable(${ROCKETENGINE_BINARY_NAME} ${ROCKETENGINE_SRC})

target_include_directories(${ROCKETENGINE_BINARY_NAME} PUBLIC  ${ROCKETENGINE_INCLUDE_PATHS})
target_compile_options    (${ROCKETENGINE_BINARY_NAME} PRIVATE -W -Wall -Wextra -Wshadow -pedantic)
