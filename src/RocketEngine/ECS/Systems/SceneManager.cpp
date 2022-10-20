#include <memory>

#include "RocketEngine/ECS/Systems/SceneManager.hh"

namespace rocketengine::ecs
{
    SceneManager& SceneManager::getInstance() noexcept
    {
        static std::unique_ptr<SceneManager> instance = std::make_unique<SceneManager>();

        return *instance;
    }
} // namespace rocketengine::ecs
