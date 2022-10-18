#include "RocketEngine/ECS/Object.hh"

namespace rocketengine::ecs
{
    std::ostream& operator<<(std::ostream &output_stream, Object const& object) noexcept
    {
        return output_stream << std::string(object);
    }
} // namespace rocketengine::ecs
