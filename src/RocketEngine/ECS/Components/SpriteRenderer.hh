#pragma once

#include "RocketEngine/ECS/Components/AComponent.hh"

namespace rocketengine::ecs
{
    class SpriteRenderer : public AComponent
    {
    public:
        SpriteRenderer() noexcept = default;
        SpriteRenderer(SpriteRenderer const& rhs) noexcept = default;
        SpriteRenderer(SpriteRenderer&& rhs) noexcept = default;

        ~SpriteRenderer() noexcept override = default;

        SpriteRenderer& operator=(SpriteRenderer const& rhs) noexcept = default;
        SpriteRenderer& operator=(SpriteRenderer&& rhs) noexcept = default;
    };
} // namespace rocketengine::ecs
