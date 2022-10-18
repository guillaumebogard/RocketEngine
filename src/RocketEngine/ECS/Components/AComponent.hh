#pragma once

#include <type_traits>

#include "RocketEngine/ECS/Object.hh"

namespace rocketengine::ecs
{
    class AComponent : public Object
    {
    protected:
        AComponent() noexcept = default;

    public:
        AComponent(AComponent const& rhs) noexcept = default;
        AComponent(AComponent&& rhs) noexcept = default;

        ~AComponent() noexcept override = default;

        AComponent& operator=(AComponent const& rhs) noexcept = default;
        AComponent& operator=(AComponent&& rhs) noexcept = default;
    };

    template <typename T>
    concept ComponentType = std::is_base_of_v<AComponent, T>;
} // namespace rocketengine::ecs
