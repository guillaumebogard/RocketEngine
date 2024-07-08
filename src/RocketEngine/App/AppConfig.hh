#pragma once

#include <cstddef>
#include <string>

namespace rocketengine::app
{
    struct AppConfig
    {
    public:
        std::string name{"App"};
        std::size_t fps{60};
    };
} // namespace rocketengine::app
