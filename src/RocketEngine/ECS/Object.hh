#pragma once

#include <ostream>
#include <string>

namespace rocketengine::ecs
{
    class Object
    {
    protected:
        Object() noexcept = default;

    public:
        Object(Object const& rhs) noexcept = default;
        Object(Object&& rhs) noexcept = default;

        virtual ~Object() noexcept = default;

        Object& operator=(Object const& rhs) noexcept = default;
        Object& operator=(Object&& rhs) noexcept = default;

    public:
        virtual explicit operator std::string() const noexcept = 0;
        friend std::ostream& operator<<(std::ostream &output_stream, Object const& object) noexcept;
    };
} // namespace rocketengine::ecs
