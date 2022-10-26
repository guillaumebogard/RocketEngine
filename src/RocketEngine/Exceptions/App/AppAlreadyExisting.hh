#pragma once

#include "RocketEngine/Exceptions/AException.hh"

namespace rocketengine::exception::app
{
    class AppAlreadyExisting : public rocketengine::exception::AException
    {
    public:
        AppAlreadyExisting() noexcept = default;
        AppAlreadyExisting(AppAlreadyExisting const& rhs) noexcept = default;
        AppAlreadyExisting(AppAlreadyExisting&& rhs) noexcept = default;

        ~AppAlreadyExisting() noexcept override = default;

        AppAlreadyExisting& operator=(AppAlreadyExisting const& rhs) noexcept = default;
        AppAlreadyExisting& operator=(AppAlreadyExisting&& rhs) noexcept = default;
    };
} // namespace rocketengine::exception::app
