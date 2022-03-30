#include "GameObject.hh"

namespace rocketengine::ecs
{
GameObject::GameObject(std::string_view _name) noexcept : name{_name}
{
}
} // rocketengine::ecs
