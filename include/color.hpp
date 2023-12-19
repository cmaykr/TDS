#pragma once

class Color
{
public:
    Color() = default;
    Color(int red, int green, int blue, int alpha);

    /// @brief Sets new color value, if any value is over 255 it's set to 255 and if lower than 0 it's set at 0.
    void setColor(int red, int green, int blue, int alpha);

    /// @brief Returns the red value of the color.
    int red() const;
    /// @brief Returns the green value of the color.
    int green() const;
    /// @brief Returns the blue value of the color.
    int blue() const;
    /// @brief Returns the alpha value of the color.
    int alpha() const;
private:
    int _red{};
    int _green{};
    int _blue{};
    int _alpha{};
};