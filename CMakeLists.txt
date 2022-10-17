cmake_minimum_required(VERSION 3.11)

project(RocketEngine VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD              20  )
set(CMAKE_CXX_STANDARD_REQUIRED     True)
set(CMAKE_POSITION_INDEPENDENT_CODE True)

# Creates 'compile_commands.json' file
set(CMAKE_EXPORT_COMPILE_COMMANDS ON CACHE INTERNAL "")

set(ROCKETENGINE_LIB          rocketengine            )

set(ROCKETENGINE_SRC_PATH     src                     )

set(ROCKETENGINE_INCLUDE_PATH ${ROCKETENGINE_SRC_PATH})

set(ROCKETENGINE_SRC_FILES
    ${ROCKETENGINE_SRC_PATH}/RocketEngine/ECS/Components/Transform.cpp
    ${ROCKETENGINE_SRC_PATH}/RocketEngine/ECS/Entities/GameObject.cpp
)

# Creates ${ROCKETENGINE_LIB} target as a SHARED library from ${ROCKETENGINE_SRC_FILES} files
add_library               (
    ${ROCKETENGINE_LIB}
    SHARED
    ${ROCKETENGINE_SRC_FILES}
    )

# Adds include directories to the ${ROCKETENGINE_LIB} target
target_include_directories(
    ${ROCKETENGINE_LIB}
    PUBLIC
    ${ROCKETENGINE_INCLUDE_PATH}
)

# Adds compilation options to the ${ROCKETENGINE_LIB} target
target_compile_options    (
    ${ROCKETENGINE_LIB}
    PRIVATE
    -W -Wall -Wextra -Wshadow -pedantic
)
