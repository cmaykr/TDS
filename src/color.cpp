#include "color.hpp"

Color::Color(int r, int g, int b, int a)
    : _red(), _green(), _blue(), _alpha()
{
    setColor(r,g,b,a);
}

void Color::setColor(int r, int g, int b, int a)
{
    if (r > 255)
        _red = 255;
    else if (r < 0)
        _red = 0;
    else
        _red = r;

    if (g > 255)
        _green = 255;
    else if (g < 0)
        _green = 0;
    else
        _green = g;

    if (b > 255)
        _blue = 255;
    else if (b < 0)
        _blue = 0;
    else
        _blue = b;

    if (a > 255)
        _alpha = 255;
    else if (a < 0)
        _alpha = 0;
    else
        _alpha = a;
}

int Color::red() const
{
    return _red;
}

int Color::green() const
{
    return _green;
}

int Color::blue() const
{
    return _blue;
}

int Color::alpha() const
{
    return _alpha;
}