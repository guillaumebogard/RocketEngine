#pragma once

namespace rocketengine::ecs
{
    class AComponent
    {
    protected:
        AComponent() noexcept = default;

    public:
        AComponent(AComponent const& rhs) noexcept = default;
        AComponent(AComponent&& rhs) noexcept = default;

        virtual ~AComponent() noexcept = default;

        AComponent& operator=(AComponent const& rhs) noexcept = default;
        AComponent& operator=(AComponent&& rhs) noexcept = default;
    };
} // namespace rocketengine::ecs
