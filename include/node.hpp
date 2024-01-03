#pragma once

#include "vector2.hpp"

class Node
{
public:
    Node() = default;

    Vector2<int> globalPosition() const;
private:
    Vector2<int> position{};
};