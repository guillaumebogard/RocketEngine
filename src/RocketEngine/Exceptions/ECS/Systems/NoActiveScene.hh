#pragma once

#include "RocketEngine/Exceptions/AException.hh"

namespace rocketengine::exception::ecs
{
    class NoActiveScene : public AException
    {
    public:
        NoActiveScene() noexcept = default;
        NoActiveScene(NoActiveScene const& rhs) noexcept = default;
        NoActiveScene(NoActiveScene&& rhs) noexcept = default;

        ~NoActiveScene() noexcept override = default;

        NoActiveScene& operator=(NoActiveScene const& rhs) noexcept = default;
        NoActiveScene& operator=(NoActiveScene&& rhs) noexcept = default;
    };
} // namespace rocketengine::exception::ecs
