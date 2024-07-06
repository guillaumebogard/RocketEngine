#pragma once

#include <cstddef>

namespace rocketengine::app
{
    struct AppConfig
    {
    public:
        std::size_t fps{1};

    public:
        AppConfig() noexcept = default;
        AppConfig(AppConfig const& rhs) noexcept = default;
        AppConfig(AppConfig&& rhs) noexcept = default;

        ~AppConfig() noexcept = default;

        AppConfig& operator=(AppConfig const& rhs) noexcept = default;
        AppConfig& operator=(AppConfig&& rhs) noexcept = default;
    };
} // namespace rocketengine::app
