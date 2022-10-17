#include "RocketEngine/ECS/Components/Transform.hh"

namespace rocketengine::ecs
{
Transform::Transform() noexcept : position{0, 0}, scale{1, 1}, rotation{0, 0}
{
}
} // namespace rocketengine::ecs
