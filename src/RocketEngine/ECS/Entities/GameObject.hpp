#pragma once

#include <algorithm>
#include <memory>
#include <string>
#include <string_view>
#include <vector>

#include "RocketEngine/ECS/Components/AComponent.hh"
#include "RocketEngine/ECS/Object.hh"
#include "RocketEngine/ECS/Scripts/AScript.hh"

namespace rocketengine::ecs
{
    class GameObject : public Object
    {
    private:
        std::string name;
        std::vector<std::unique_ptr<AComponent>> components;
        std::vector<std::unique_ptr<AScript>> scripts;

    public:
        explicit GameObject(std::string_view _name) noexcept;
        GameObject(GameObject const& rhs) noexcept = default;
        GameObject(GameObject&& rhs) noexcept = default;

        ~GameObject() noexcept override = default;

        GameObject& operator=(GameObject const& rhs) noexcept = default;
        GameObject& operator=(GameObject&& rhs) noexcept = default;

    public:
        explicit operator std::string() const noexcept override;

    public:
        [[nodiscard]] std::string const& getName() const noexcept;
        void setName(std::string_view new_name) noexcept;

    public:
        template <typename ComponentType>
        [[nodiscard]] bool hasComponent() const noexcept
        {
            return std::any_of(this->components.begin(), this->components.end(),
                               [](std::unique_ptr<AComponent> const& component_ptr) -> bool
                               {
                                   return dynamic_cast<ComponentType*>(component_ptr.get()) != nullptr;
                               });
        }

        template <typename ComponentType, typename... Args>
        ComponentType& addComponent(Args&&... args) noexcept
        {
            auto& component_ptr = this->components.emplace_back(std::make_unique<ComponentType>(std::forward<Args>(args)...));

            return reinterpret_cast<ComponentType&>(*(component_ptr.get()));
        }

        template <typename ComponentType>
        void removeComponent() noexcept
        {
            std::erase_if(this->components,
                          [](std::unique_ptr<AComponent> const& component_ptr) -> bool
                          {
                              return dynamic_cast<ComponentType*>(component_ptr.get()) != nullptr;
                          });
        }

        template <typename ScriptType>
        [[nodiscard]] bool hasScript() const noexcept
        {
            return std::any_of(this->scripts.begin(), this->scripts.end(),
                               [](std::unique_ptr<AScript> const& script_ptr) -> bool
                               {
                                   return dynamic_cast<ScriptType*>(script_ptr.get()) != nullptr;
                               });
        }

        template <typename ScriptType, typename... Args>
        ScriptType& addScript(Args&&... args) noexcept
        {
            auto& script_ptr = this->scripts.emplace_back(std::make_unique<ScriptType>(std::forward<Args>(args)...));

            return reinterpret_cast<ScriptType&>(*(script_ptr.get()));
        }

        template <typename ScriptType>
        void removeScript() noexcept
        {
            std::erase_if(this->scripts,
                          [](std::unique_ptr<AScript> const& script_ptr) -> bool
                          {
                              return dynamic_cast<ScriptType*>(script_ptr.get()) != nullptr;
                          });
        }
    };
} // namespace rocketengine::ecs
