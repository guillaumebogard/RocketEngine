cmake_minimum_required(VERSION 3.11)

set(ROCKETENGINE_TESTS_BIN          tests)
set(ROCKETENGINE_TESTS_PATH         ./   )
set(ROCKETENGINE_TESTS_INCLUDE_PATH ./   )

set(ROCKETENGINE_TESTS_FILES
    ${ROCKETENGINE_TESTS_PATH}/RocketEngine/App/Arguments.cpp
    ${ROCKETENGINE_TESTS_PATH}/RocketEngine/ECS/Entities/GameObject.cpp
)

add_executable(
    ${ROCKETENGINE_TESTS_BIN}
    ${ROCKETENGINE_TESTS_FILES}
)

target_link_libraries(
    ${ROCKETENGINE_TESTS_BIN}
    PUBLIC
    rocketengine gtest_main
)

add_test(
    NAME    ${ROCKETENGINE_TESTS_BIN}
    COMMAND ${ROCKETENGINE_TESTS_BIN}
)
