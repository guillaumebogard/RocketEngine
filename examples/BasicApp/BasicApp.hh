#pragma once

#include "RocketEngine/App/App.hh"

class BasicApp final : public rocketengine::app::App
{
public:
    BasicApp(rocketengine::app::Arguments&& arguments, rocketengine::app::AppConfig&& app_config) noexcept;
    BasicApp(rocketengine::app::Arguments const& arguments, rocketengine::app::AppConfig const& app_config) noexcept;

    BasicApp(BasicApp const& rhs) noexcept = default;
    BasicApp(BasicApp&& rhs) noexcept = default;

    ~BasicApp() noexcept override = default;

    BasicApp& operator=(BasicApp const& rhs) noexcept = default;
    BasicApp& operator=(BasicApp&& rhs) noexcept = default;
};
