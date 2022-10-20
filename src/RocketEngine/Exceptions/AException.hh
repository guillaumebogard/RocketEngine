#pragma once

#include <exception>

namespace rocketengine::exception
{
    class AException : public std::exception
    {
    protected:
        AException() noexcept = default;

    public:
        AException(AException const& rhs) noexcept = default;
        AException(AException&& rhs) noexcept = default;

        ~AException() noexcept override = default;

        AException& operator=(AException const& rhs) noexcept = default;
        AException& operator=(AException&& rhs) noexcept = default;
    };
} // namespace rocketengine::exception
