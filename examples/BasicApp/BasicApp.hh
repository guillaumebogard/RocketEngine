#pragma once

#include "RocketEngine/App/App.hh"

class BasicApp final : public rocketengine::app::App
{
public:
    BasicApp(std::string_view _name, rocketengine::app::Arguments&& arguments,
             rocketengine::app::AppConfig const& app_config) noexcept:
        App{_name, std::move(arguments), app_config}
    {
    }

    BasicApp(BasicApp const& rhs) noexcept = default;
    BasicApp(BasicApp&& rhs) noexcept = default;

    ~BasicApp() noexcept override = default;

    BasicApp& operator=(BasicApp const& rhs) noexcept = default;
    BasicApp& operator=(BasicApp&& rhs) noexcept = default;
};
