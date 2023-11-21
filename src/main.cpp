#include <iostream>
#include "game.hpp"
#include "vector2.hpp"

int main()
{
    Game game{};

    game.run();

    std::cout << "Test" << std::endl;

    Vector2<int> a{};
    Vector2<int> b{};

    return 0;
}