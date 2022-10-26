#include <gtest/gtest.h>

#include "RocketEngine/App/Arguments.hh"

// NOLINTNEXTLINE
TEST(Arguments, getArguments)
{
    char* const argv[] = {(char*)"./app", (char*)"--help"}; // NOLINT
    int const argc = 2;
    auto const arguments = rocketengine::app::getArguments(argc, argv); // NOLINT

    EXPECT_EQ(arguments.size(), argc);
    EXPECT_EQ(arguments[0], "./app");
    EXPECT_EQ(arguments[1], "--help");
}
