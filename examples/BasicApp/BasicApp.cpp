#include "BasicApp.hh"

BasicApp::BasicApp(std::string_view name, rocketengine::app::Arguments&& arguments, rocketengine::app::AppConfig const& app_config) noexcept:
    App{name, std::move(arguments), app_config}
{
}
