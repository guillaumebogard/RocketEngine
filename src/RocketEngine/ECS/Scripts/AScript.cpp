#include "RocketEngine/ECS/Scripts/AScript.hh"

namespace rocketengine::ecs
{
    bool AScript::isEnabled() const noexcept
    {
        return this->enabled;
    }

    void AScript::setEnabled(bool value) noexcept
    {
        this->enabled = value;
    }
} // namespace rocketengine::ecs
