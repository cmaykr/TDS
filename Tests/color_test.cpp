#include <catch2/catch_all.hpp>
#include "color.hpp"


TEST_CASE("Test normal values")
{
    SECTION("Constructor tests")
    {
        Color a{248, 0, 230, 40};

        REQUIRE(a.red() == 248);
        REQUIRE(a.green() == 0);
        REQUIRE(a.blue() == 230);
        REQUIRE(a.alpha() == 40);

        Color b{};
        REQUIRE(b.red() == 0);
        REQUIRE(b.green() == 0);
        REQUIRE(b.blue() == 0);
        REQUIRE(b.alpha() == 0);
    }

    SECTION("SetColor tests")
    {
        Color a{248, 0, 230, 40};
        REQUIRE(a.red() == 248);
        a.setColor(24, 0, 230, 40);
        REQUIRE(a.red() == 24);
    }
}

TEST_CASE("Test invalid values")
{
    SECTION ("Overflow Test")
    {
        Color a{500, 256, 100000, 300};
        REQUIRE(a.red() == 255);
        REQUIRE(a.green() == 255);
        REQUIRE(a.blue() == 255);
        REQUIRE(a.alpha() == 255);

        a.setColor(501, 257, 10000, 340);
        REQUIRE(a.red() == 255);
        REQUIRE(a.green() == 255);
        REQUIRE(a.blue() == 255);
        REQUIRE(a.alpha() == 255);

    }
    SECTION ("Underflow Test")
    {
        Color a{-100, -200, -100000, -300};
        REQUIRE(a.red() == 0);
        REQUIRE(a.green() == 0);
        REQUIRE(a.blue() == 0);
        REQUIRE(a.alpha() == 0);

        a.setColor(-501, -257, -10000, -340);
        REQUIRE(a.red() == 0);
        REQUIRE(a.green() == 0);
        REQUIRE(a.blue() == 0);
        REQUIRE(a.alpha() == 0);
    }
}

TEST_CASE("Test get functions")
{
    Color a{200, 150, 255, 0};

    REQUIRE(a.red() == 200);
    REQUIRE(a.green() == 150);
    REQUIRE(a.blue() == 255);
    REQUIRE(a.alpha() == 0); 
}



