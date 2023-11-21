#pragma once

#include <iostream>

/// @brief 
/// @tparam Member functions only works for integers and floats/double. 
template <typename T>
class Vector2
{
public:
    Vector2() = default;
    Vector2(T x, T y);
    Vector2(Vector2<T> const& n);

    Vector2<T>& operator=(Vector2 const& rhs);
    Vector2<T>& operator-=(Vector2 const& rhs);
    Vector2<T> operator-(Vector2 const& rhs);

    Vector2<T>& operator+=(Vector2 const& rhs);
    Vector2<T> operator+(Vector2 const& rhs);


    T x;
    T y;
};

template <typename T>
std::ostream& operator<<(std::ostream & os, Vector2<T> const& obj);