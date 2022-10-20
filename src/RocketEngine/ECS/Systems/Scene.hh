#pragma once

#include <string>
#include <string_view>

#include "RocketEngine/ECS/Entities/GameObject.hpp"

namespace rocketengine::ecs
{
    class Scene
    {
    private:
        std::string name;

    public:
        explicit Scene(std::string_view _name) noexcept;
        Scene(Scene const& rhs) noexcept = default;
        Scene(Scene&& rhs) noexcept = default;

        ~Scene() noexcept = default;

        Scene& operator=(Scene const& rhs) noexcept = default;
        Scene& operator=(Scene&& rhs) noexcept = default;
    };
} // namespace rocketengine::ecs
