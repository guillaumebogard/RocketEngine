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

    void awake() noexcept
    {
    }

    void start() noexcept
    {
    }

    void update() noexcept
    {
    }

    void lateUpdate() noexcept
    {
    }

    void onTriggerEnter(GameObject&) noexcept
    {
    }

    void onTriggerStay(GameObject&) noexcept
    {
    }

    void onTriggerExit(GameObject&) noexcept
    {
    }

    void onCollisionEnter(GameObject&) noexcept
    {
    }

    void onCollisionStay(GameObject&) noexcept
    {
    }

    void onCollisionExit(GameObject&) noexcept
    {
    }

} // namespace rocketengine::ecs
