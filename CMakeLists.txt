cmake_minimum_required(VERSION 3.11)

###################
# Header settings #
###################

project(RocketEngine VERSION 0.1 LANGUAGES C CXX)

set(CMAKE_C_STANDARD                17  )
set(CMAKE_CXX_STANDARD              20  )
set(CMAKE_CXX_STANDARD_REQUIRED     True)
set(CMAKE_POSITION_INDEPENDENT_CODE True)

# Creates 'compile_commands.json' file
set(CMAKE_EXPORT_COMPILE_COMMANDS ON CACHE INTERNAL "")

###########
# Options #
###########

# Option to launch examples
option(BUILD_EXAMPLES "Builds examples" OFF)
# Option to launch tests
option(BUILD_TESTS    "Builds tests"    OFF)

#######################
# RocketEngine target #
#######################

set(ROCKETENGINE_LIB          rocketengine            )

set(ROCKETENGINE_SRC_PATH     src                     )
set(ROCKETENGINE_INCLUDE_PATH ${ROCKETENGINE_SRC_PATH})

set(ROCKETENGINE_FILES
    ${ROCKETENGINE_SRC_PATH}/RocketEngine/App/App.cpp
    ${ROCKETENGINE_SRC_PATH}/RocketEngine/App/Arguments.cpp
    ${ROCKETENGINE_SRC_PATH}/RocketEngine/ECS/Components/SpriteRenderer.cpp
    ${ROCKETENGINE_SRC_PATH}/RocketEngine/ECS/Components/Transform.cpp
    ${ROCKETENGINE_SRC_PATH}/RocketEngine/ECS/Entities/GameObject.cpp
    ${ROCKETENGINE_SRC_PATH}/RocketEngine/ECS/Scripts/AScript.cpp
    ${ROCKETENGINE_SRC_PATH}/RocketEngine/ECS/Systems/Scene.cpp
    ${ROCKETENGINE_SRC_PATH}/RocketEngine/ECS/Systems/SceneManager.cpp
    ${ROCKETENGINE_SRC_PATH}/RocketEngine/ECS/Object.cpp
)

# Creates ${ROCKETENGINE_LIB} target as a SHARED library from ${ROCKETENGINE_FILES} files
add_library               (
    ${ROCKETENGINE_LIB}
    SHARED
    ${ROCKETENGINE_FILES}
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

# Adds 'deps/CMakeLists.txt' to the build
add_subdirectory(deps)

###################
# Optional Builds #
###################

if(BUILD_EXAMPLES)
    # Adds 'examples/CMakeLists.txt' to the build
    add_subdirectory(examples)
endif()

if(BUILD_TESTS)
    # Adds 'tests/CMakeLists.txt' to the build
    add_subdirectory(tests)
endif()
