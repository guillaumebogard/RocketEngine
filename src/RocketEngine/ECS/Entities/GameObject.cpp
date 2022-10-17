#include "RocketEngine/ECS/Components/Transform.hh"
#include "RocketEngine/ECS/Entities/GameObject.hpp"

namespace rocketengine::ecs
{
GameObject::GameObject(std::string_view name) noexcept : name{name}
{
    this->addComponent<Transform>();
}
} // namespace rocketengine::ecs
