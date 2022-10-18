#pragma once

#include <type_traits>

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

    template <typename T>
    concept ScriptType = std::is_base_of_v<AScript, T>;
} // namespace rocketengine::ecs
