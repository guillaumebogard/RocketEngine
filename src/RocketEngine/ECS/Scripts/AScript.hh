#pragma once

namespace rocketengine::ecs
{
    class AScript
    {
    private:
        bool enabled = false;

    protected:
        AScript() noexcept = default;

    public:
        AScript(AScript const& rhs) noexcept = default;
        AScript(AScript&& rhs) noexcept = default;

        virtual ~AScript() noexcept = default;

        AScript& operator=(AScript const& rhs) noexcept = default;
        AScript& operator=(AScript&& rhs) noexcept = default;

    public:
        [[nodiscard]] bool isEnabled() const noexcept;
        void setEnabled(bool value) noexcept;
    };
} // namespace rocketengine::ecs
