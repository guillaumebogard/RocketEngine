#include "RocketEngine/ECS/Components/Transform.hh"
#include "RocketEngine/ECS/Entities/GameObject.hpp"

namespace rocketengine::ecs
{
GameObject::GameObject(std::string_view _name) noexcept : name{_name}
{
    this->addComponent<Transform>();
}
} // namespace rocketengine::ecs
