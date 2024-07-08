#include "BasicApp.hh"

int main(int argc, char* const argv[])
{
    auto arguments = rocketengine::app::getArguments(argc, argv);
    auto app_config = rocketengine::app::AppConfig{
        .name = "Basic App",
        .fps = 60
    };

    auto app = rocketengine::app::createApp<BasicApp>(std::move(arguments), std::move(app_config));
    app->run();
    return 0;
}
