#include "RocketEngine/ECS/Components/SpriteRenderer.hh"

namespace rocketengine::ecs
{
    SpriteRenderer::operator std::string() const noexcept
    {
        return "Component Type -> SpriteRenderer";
    }
} // namespace rocketengine::ecs
