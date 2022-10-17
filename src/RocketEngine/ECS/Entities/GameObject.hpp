#pragma once

#include <memory>
#include <string>
#include <string_view>
#include <vector>

#include "RocketEngine/ECS/Components/AComponent.hh"

namespace rocketengine::ecs
{
    template <typename T>
    concept ComponentType = std::is_base_of_v<AComponent, T>;

    class GameObject
    {
    private:
        std::string name;
        std::vector<std::unique_ptr<AComponent>> components;

    public:
        explicit GameObject(std::string_view _name) noexcept;
        GameObject(GameObject const& rhs) noexcept = default;
        GameObject(GameObject&& rhs) noexcept = default;

        ~GameObject() noexcept = default;

        GameObject& operator=(GameObject const& rhs) noexcept = default;
        GameObject& operator=(GameObject&& rhs) noexcept = default;

        [[nodiscard]] std::string const& getName() const noexcept;
        void setName(std::string_view new_name) noexcept;

        template<typename ComponentType, typename... Args>
        void addComponent(Args&&... args) noexcept
        {
            this->components.emplace_back(std::make_unique<ComponentType>(std::forward<Args>(args)...));
        }

        template<typename ComponentType>
        void removeComponent() noexcept
        {
            std::remove_if(
                this->components.begin(),
                this->components.end(),
                [](std::unique_ptr<AComponent> const& element)
                {
                    return dynamic_cast<ComponentType *>(*element);
                }
            );
        }
    };
} // namespace rocketengine::ecs
