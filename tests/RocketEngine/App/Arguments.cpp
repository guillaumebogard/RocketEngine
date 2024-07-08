#include <gtest/gtest.h>

#include "RocketEngine/App/Arguments.hh"

// NOLINTNEXTLINE
TEST(Arguments, getArgumentsOneArgument)
{
    char* const argv[] = {(char*)"./app", (char*)"--help"}; // NOLINT
    int const argc = 2;
    auto const arguments = rocketengine::app::getArguments(argc, argv); // NOLINT

    EXPECT_EQ(arguments.size(), argc);
    EXPECT_EQ(arguments[0], "./app");
    EXPECT_EQ(arguments[1], "--help");
}

// NOLINTNEXTLINE
TEST(Arguments, getArgumentsMultipleArguments)
{
    char* const argv[] = {(char*)"./app", (char*)"--help", (char*)"--verbose"}; // NOLINT
    int const argc = 3;
    auto const arguments = rocketengine::app::getArguments(argc, argv); // NOLINT

    EXPECT_EQ(arguments.size(), argc);
    EXPECT_EQ(arguments[0], "./app");
    EXPECT_EQ(arguments[1], "--help");
    EXPECT_EQ(arguments[2], "--verbose");
}

// NOLINTNEXTLINE
TEST(Arguments, getArgumentsNoArguments)
{
    char* const argv[] = {(char*)"./app"}; // NOLINT
    int const argc = 1;
    auto const arguments = rocketengine::app::getArguments(argc, argv); // NOLINT

    EXPECT_EQ(arguments.size(), argc);
    EXPECT_EQ(arguments[0], "./app");
}

// NOLINTNEXTLINE
TEST(Arguments, getArgumentsEmptyArguments)
{
    char* const argv[] = {}; // NOLINT
    int const argc = 0;
    auto const arguments = rocketengine::app::getArguments(argc, argv); // NOLINT

    EXPECT_EQ(arguments.size(), argc);
}

// NOLINTNEXTLINE
TEST(Arguments, getArgumentsNullptr)
{
    char* const* argv = nullptr;
    int const argc = 0;
    auto const arguments = rocketengine::app::getArguments(argc, argv); // NOLINT

    EXPECT_EQ(arguments.size(), argc);
}
