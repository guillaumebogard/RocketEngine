#pragma once

#include "AComponent.hh"
#include "RocketEngine/Utils/Vector2.hpp"

using namespace rocketengine::utils;

namespace rocketengine::ecs
{
    class Transform : public AComponent
    {
    public:
        Vector2f position;
        Vector2f scale;
        Vector2f rotation;

    public:
        Transform() noexcept;
        Transform(Transform const& rhs) noexcept = default;
        Transform(Transform&& rhs) noexcept = default;

        ~Transform() noexcept = default;

        Transform& operator=(Transform const& rhs) noexcept = default;
        Transform& operator=(Transform&& rhs) noexcept = default;
    };
} // namespace rocketengine::ecs
