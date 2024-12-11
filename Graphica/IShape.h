#pragma once
#include <SFML/Graphics.hpp>
#include <string>

class IShape
{
public:
    virtual ~IShape() = default;
    virtual std::string GetShapeName() const = 0;
    virtual void Draw(sf::RenderWindow& window) = 0;
};
