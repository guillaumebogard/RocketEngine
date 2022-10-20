#include <memory>

#include "RocketEngine/ECS/Systems/SceneManager.hh"
#include "RocketEngine/Exceptions.hh"

namespace rocketengine::ecs
{
    SceneManager& SceneManager::getInstance() noexcept
    {
        static std::unique_ptr<SceneManager> instance = std::make_unique<SceneManager>();

        return *instance;
    }

    Scene& SceneManager::getActiveScene()
    {
        auto& instance = SceneManager::getInstance();

        if (!instance.active_scene)
            throw rocketengine::exception::ecs::NoActiveScene{};
        return *(instance.active_scene);
    }
} // namespace rocketengine::ecs
