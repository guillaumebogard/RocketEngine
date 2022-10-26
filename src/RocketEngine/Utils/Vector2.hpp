#pragma once

namespace rocketengine::utils
{
    template<typename T>
    class Vector2
    {
    public:
        T x;
        T y;

    public:
        Vector2() noexcept = default;
        Vector2(Vector2 const& rhs) noexcept = default;
        Vector2(Vector2&& rhs) noexcept = default;

        Vector2(T _x, T _y) noexcept : x{_x}, y{_y}
        {
        }

        ~Vector2() noexcept = default;

        Vector2& operator=(Vector2 const& rhs) noexcept = default;
        Vector2& operator=(Vector2&& rhs) noexcept = default;

    public:
        Vector2& operator+=(Vector2 const& rhs) noexcept
        {
            this->x += rhs.x;
            this->y += rhs.y;
            return *this;
        }

        Vector2& operator-=(Vector2 const& rhs) noexcept
        {
            this->x -= rhs.x;
            this->y -= rhs.y;
            return *this;
        }

        Vector2& operator*=(Vector2 const& rhs) noexcept
        {
            this->x *= rhs.x;
            this->y *= rhs.y;
            return *this;
        }

        Vector2& operator/=(Vector2 const& rhs) noexcept
        {
            this->x /= rhs.x;
            this->y /= rhs.y;
            return *this;
        }
    };

    template<typename T, typename U = T>
    Vector2<T> operator+(Vector2<T> const& lhs, Vector2<U> const& rhs) noexcept
    {
        auto other = lhs;

        other.x += rhs.x;
        other.y += rhs.y;
        return other;
    }

    template<typename T, typename U = T>
    Vector2<T> operator-(Vector2<T> const& lhs, Vector2<U> const& rhs) noexcept
    {
        auto other = lhs;

        other.x -= rhs.x;
        other.y -= rhs.y;
        return other;
    }

    template<typename T, typename U = T>
    Vector2<T> operator*(Vector2<T> const& lhs, Vector2<U> const& rhs) noexcept
    {
        auto other = lhs;

        other.x *= rhs.x;
        other.y *= rhs.y;
        return other;
    }

    template<typename T, typename U = T>
    Vector2<T> operator/(Vector2<T> const& lhs, Vector2<U> const& rhs) noexcept
    {
        auto other = lhs;

        other.x /= rhs.x;
        other.y /= rhs.y;
        return other;
    }

    using Vector2f = Vector2<float>;
    using Vector2i = Vector2<int>;
    using Vector2u = Vector2<unsigned int>;
} // namespace rocketengine::utils
