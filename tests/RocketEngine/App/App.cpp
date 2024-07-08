#include <gtest/gtest.h>

#include "RocketEngine/App/App.hh"
#include "RocketEngine/App/AppConfig.hh"

// NOLINTNEXTLINE
TEST(App, createApp)
{
    char* const argv[] = {(char*)"./app", (char*)"--help"}; // NOLINT
    int const argc = 2;
    auto arguments = rocketengine::app::getArguments(argc, argv); // NOLINT

    std::string name{"Crazy Simple App"};
    std::size_t fps{30};

    rocketengine::app::AppConfig app_config = {
        name,
        fps
    };

    auto app = rocketengine::app::createApp<rocketengine::app::App>(std::move(arguments), std::move(app_config));

    EXPECT_EQ(app->getArguments().size(), argc);
    EXPECT_EQ(app->getArguments()[0], "./app");
    EXPECT_EQ(app->getArguments()[1], "--help");
    EXPECT_EQ(app->getAppConfig().name, name);
    EXPECT_EQ(app->getAppConfig().fps, fps);
}
