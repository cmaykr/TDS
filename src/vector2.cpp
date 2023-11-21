#include "include/vector2.h"

template <typename T>
Vector2<T>::Vector2(T x, T y)
    :   x(x), y(y)
{}

template <typename T>
Vector2<T>::Vector2(Vector2<T> const& n)
    : x(n.x), y(n.y)
{}

template <typename T>
void Vector2<T>::operator=(Vector2 rhs)
{
    /// Implement
}

template <typename T>
Vector2<T> Vector2<T>::operator-(Vector2 rhs)
{
    Vector2<T> n{*this};

    n.x -= rhs.x,
    n.y -= rhs.y;

    return n;
}

template <typename T>
Vector2<T> Vector2<T>::operator+(Vector2 rhs)
{
    Vector2<T> n{*this};

    n.x += rhs.x;
    n.y += rhs.y;

    return n;
}

template <typename T>
Vector2<T> Vector2<T>::operator*(Vector2 rhs)
{
    // Implement
}

template <typename T>
std::ostream& operator<<(std::ostream & os, Vector2<T> const& obj)
{
    os << "{ " << obj.x << ", " << obj.y " }";

    return os;
}