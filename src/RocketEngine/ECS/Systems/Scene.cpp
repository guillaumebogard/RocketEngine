#include "RocketEngine/ECS/Systems/Scene.hh"

namespace rocketengine::ecs
{
    Scene::Scene(std::string_view _name) noexcept : name{_name}
    {
    }
} // namespace rocketengine::ecs
