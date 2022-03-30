#pragma once

namespace rocketengine::ecs
{
    class AScript
    {
    protected:
        AScript() noexcept = default;

    public:
        AScript(AScript const& rhs) noexcept = default;
        AScript(AScript&& rhs) noexcept = default;

        ~AScript() noexcept = default;

        AScript& operator=(AScript const& rhs) noexcept = default;
        AScript& operator=(AScript&& rhs) noexcept = default;
    };
} // namespace rocketengine::ecs
