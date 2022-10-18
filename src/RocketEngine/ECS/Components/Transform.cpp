#include <iomanip>
#include <sstream>

#include "RocketEngine/ECS/Components/Transform.hh"

namespace rocketengine::ecs
{
    Transform::Transform() noexcept: position{0, 0}, scale{1, 1}, rotation{0, 0}
    {
    }

    Transform::operator std::string() const noexcept
    {
        std::stringstream stream;

        stream << "Component Type -> Transform";

        std::string component_metadata_to_string = stream.str();
        stream.str("");
        stream.clear();

        stream << "Position -> "
               << "(x: " << std::fixed << std::setprecision(2) << position.x << ", y: " << std::fixed << std::setprecision(2)
               << position.y << ")";

        std::string position_to_string = stream.str();
        stream.str("");
        stream.clear();

        stream << "Scale    -> "
               << "(x: " << std::fixed << std::setprecision(2) << scale.x << ", y: " << std::fixed << std::setprecision(2)
               << scale.y << ")";

        std::string scale_to_string = stream.str();
        stream.str("");
        stream.clear();

        stream << "Rotation -> "
               << "(x: " << std::fixed << std::setprecision(2) << rotation.x << ", y: " << std::fixed << std::setprecision(2)
               << rotation.y << ")";

        std::string rotation_to_string = stream.str();

        return component_metadata_to_string + "\n" + "\n" + position_to_string + "\n" + scale_to_string + "\n" +
               rotation_to_string;
    }
} // namespace rocketengine::ecs
