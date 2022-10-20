#pragma once

#include "RocketEngine/Exceptions/AException.hh"

namespace rocketengine::exception::ecs
{
    class ScriptAlreadyPresent : public rocketengine::exception::AException
    {
    public:
        ScriptAlreadyPresent() noexcept = default;
        ScriptAlreadyPresent(ScriptAlreadyPresent const& rhs) noexcept = default;
        ScriptAlreadyPresent(ScriptAlreadyPresent&& rhs) noexcept = default;

        ~ScriptAlreadyPresent() noexcept override = default;

        ScriptAlreadyPresent& operator=(ScriptAlreadyPresent const& rhs) noexcept = default;
        ScriptAlreadyPresent& operator=(ScriptAlreadyPresent&& rhs) noexcept = default;
    };
} // namespace rocketengine::exception::ecs
