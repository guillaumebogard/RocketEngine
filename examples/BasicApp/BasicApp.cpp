#include "BasicApp.hh"

BasicApp::BasicApp(rocketengine::app::Arguments&& arguments, rocketengine::app::AppConfig&& app_config) noexcept:
    App{std::move(arguments), std::move(app_config)}
{
}

BasicApp::BasicApp(rocketengine::app::Arguments const& arguments, rocketengine::app::AppConfig const& app_config) noexcept:
    App{arguments, app_config}
{
}
