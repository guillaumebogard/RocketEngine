cmake_minimum_required(VERSION 3.11)

set(ROCKETENGINE_TEST tests)

set(ROCKETENGINE_TESTS_PATH         ./)
set(ROCKETENGINE_TESTS_INCLUDE_PATH ./)

set(ROCKETENGINE_TESTS_FILES
    ${ROCKETENGINE_TESTS_PATH}/RocketEngine/ECS/Entities/GameObject.cpp
)

add_executable(
    ${ROCKETENGINE_TEST}
    ${ROCKETENGINE_TESTS_FILES}
)

target_link_libraries(
    ${ROCKETENGINE_TEST}
    PUBLIC
    rocketengine gtest_main
)

add_test(
    NAME ${ROCKETENGINE_TEST}
    COMMAND ${ROCKETENGINE_TEST}
)
