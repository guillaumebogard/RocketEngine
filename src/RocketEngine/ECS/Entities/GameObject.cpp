#include "RocketEngine/ECS/Components/Transform.hh"
#include "RocketEngine/ECS/Entities/GameObject.hpp"

namespace rocketengine::ecs
{
GameObject::GameObject(std::string_view _name) noexcept : name{_name}
{
    this->addComponent<Transform>();
}

std::string const& GameObject::getName() const noexcept
{
    return this->name;
}

void GameObject::setName(std::string_view new_name) noexcept
{
    this->name = new_name;
}
} // namespace rocketengine::ecs
