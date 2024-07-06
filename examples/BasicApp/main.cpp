#include "BasicApp.hh"

int main(int argc, char* const argv[])
{
    auto arguments = rocketengine::app::getArguments(argc, argv);
    auto const app_config = rocketengine::app::AppConfig{};

    auto app = rocketengine::app::createApp<BasicApp>("BasicApp", std::move(arguments), app_config);
    app->run();
    return 0;
}
