#include "vector2.hpp"

template <typename T>
Vector2<T>::Vector2(T x, T y)
    :   x(x), y(y)
{}

template <typename T>
Vector2<T>::Vector2(Vector2<T> const& n)
    : x(n.x), y(n.y)
{}

template <typename T>
bool Vector2<T>::operator==(Vector2<T> const &rhs)
{
    return x == rhs.x && y == rhs.y;
}

template <typename T>
bool Vector2<T>::operator==(Vector2<T> const &rhs) const
{
    return *this == rhs;
}

template <typename T>
Vector2<T>& Vector2<T>::operator+=(Vector2<T> const& rhs)
{
    x += rhs.x;
    y += rhs.y;

    return *this;
}

template <typename T>
Vector2<T> Vector2<T>::operator+(Vector2<T> const &rhs)
{
    return *this;
}

template <typename T>
std::ostream &operator<<(std::ostream &os, Vector2<T> const &obj)
{
    os << "{ " << obj.x << ", " << obj.y << " }";

    return os;
}