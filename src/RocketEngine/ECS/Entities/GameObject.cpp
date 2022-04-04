#include "GameObject.hpp"
#include "RocketEngine/ECS/Components/Transform.hh"

namespace rocketengine::ecs
{
GameObject::GameObject(std::string_view _name) noexcept : name{_name}
{
    this->addComponent<Transform>();
}
} // rocketengine::ecs
