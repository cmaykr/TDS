#include <catch2/catch_all.hpp> 
#include "vector2.hpp"


TEST_CASE("Vector2 assignment")
{
    Vector2<int> a{};

    a.x = 1;
    a.y = 5;

    REQUIRE (a.x == 1);
    REQUIRE (a.y == 5);
}

TEST_CASE("Vector2 operators")
{
    Vector2<int> a{};
    Vector2<int> b{};

    a.x = 2;
    a.y = 5;

    b.x = 3;
    b.y = 6;

    REQUIRE (a.x + b.x == 5);
    Vector2<int> tmp {};
    tmp.x = 1;
    tmp.y = 2;
    tmp += a;
    REQUIRE (tmp == Vector2<int>(3, 7));
}