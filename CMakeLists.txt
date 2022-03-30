cmake_minimum_required(VERSION 3.11)

project(RocketEngine VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# creates the compile_commands.json file
set(CMAKE_EXPORT_COMPILE_COMMANDS ON CACHE INTERNAL "")

set(ROCKETENGINE_LIB          RocketEngine            )

set(ROCKETENGINE_SRC_PATH     src                     )

set(ROCKETENGINE_INCLUDE_PATH ${ROCKETENGINE_SRC_PATH})

set(ROCKETENGINE_SRC
    ${ROCKETENGINE_SRC_PATH}/RocketEngine/ECS/Entities/GameObject.cpp
)

add_library(${ROCKETENGINE_LIB} SHARED ${ROCKETENGINE_SRC})

target_include_directories(${ROCKETENGINE_LIB} PUBLIC ${ROCKETENGINE_INCLUDE_PATH})
target_compile_options    (${ROCKETENGINE_LIB} PRIVATE -W -Wall -Wextra -Wshadow -pedantic)
