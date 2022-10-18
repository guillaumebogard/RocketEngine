#pragma once

#include "RocketEngine/ECS/Components/AComponent.hh"
#include "RocketEngine/Utils/Vector2.hpp"

namespace rocketengine::ecs
{
    class Transform : public AComponent
    {
    public:
        rocketengine::utils::Vector2f position;
        rocketengine::utils::Vector2f scale;
        rocketengine::utils::Vector2f rotation;

    public:
        Transform() noexcept;
        Transform(Transform const& rhs) noexcept = default;
        Transform(Transform&& rhs) noexcept = default;

        ~Transform() noexcept override = default;

        Transform& operator=(Transform const& rhs) noexcept = default;
        Transform& operator=(Transform&& rhs) noexcept = default;

    public:
        explicit operator std::string() const noexcept override;
    };
} // namespace rocketengine::ecs
