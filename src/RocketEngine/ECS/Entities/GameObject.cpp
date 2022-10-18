#include <algorithm>
#include <iomanip>
#include <sstream>

#include "RocketEngine/ECS/Components/Transform.hh"
#include "RocketEngine/ECS/Entities/GameObject.hpp"

namespace rocketengine::ecs
{
    GameObject::GameObject(std::string_view _name) noexcept: name{_name}
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

    GameObject::operator std::string() const noexcept
    {
        std::stringstream stream;

        stream << "GameObject:\n"
               << "Name -> \"" << this->name << "\"\n"
               << "\n"
               << "Components:\n";

        for (auto it = this->components.begin(); it != this->components.end(); it++) {
            stream << **it;
            if (it + 1 != this->components.end())
                stream << "\n\n";
        }
        return stream.str();
    }
} // namespace rocketengine::ecs
