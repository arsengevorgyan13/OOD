#pragma once
#include "IShape.h"
#include <SFML/Graphics.hpp>

class CRectangle : public IShape
{
public:
    CRectangle(sf::Vector2f position, float width, float height);
    std::string GetShapeName() const override;

    float GetWidth() const;
    float GetHeight() const;
    sf::Vector2f GetPosition() const;

    void Accept(IVisitor& visitor) override;
private:
    sf::RectangleShape* m_rectangle;
};