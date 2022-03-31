#pragma once

#include <string>
#include <string_view>

namespace rocketengine::ecs
{
    class GameObject
    {
    private:
        std::string name;

    public:
        GameObject(std::string_view _name) noexcept;
        GameObject(GameObject const& rhs) noexcept = default;
        GameObject(GameObject&& rhs) noexcept = default;

        ~GameObject() noexcept = default;

        GameObject& operator=(GameObject const& rhs) noexcept = default;
        GameObject& operator=(GameObject&& rhs) noexcept = default;
    };
} // namespace rocketengine::ecs
