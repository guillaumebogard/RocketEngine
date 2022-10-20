#pragma once

#include "RocketEngine/Exceptions/AException.hh"

namespace rocketengine::exception::ecs
{
    class ComponentAlreadyPresent : public rocketengine::exception::AException
    {
    public:
        ComponentAlreadyPresent() noexcept = default;
        ComponentAlreadyPresent(ComponentAlreadyPresent const& rhs) noexcept = default;
        ComponentAlreadyPresent(ComponentAlreadyPresent&& rhs) noexcept = default;

        ~ComponentAlreadyPresent() noexcept override = default;

        ComponentAlreadyPresent& operator=(ComponentAlreadyPresent const& rhs) noexcept = default;
        ComponentAlreadyPresent& operator=(ComponentAlreadyPresent&& rhs) noexcept = default;
    };
} // namespace rocketengine::exception::ecs
