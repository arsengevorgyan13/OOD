#pragma once
#include "IShape.h"
#include <SFML/Graphics.hpp>

class CCircle : public IShape
{
public:
    CCircle(sf::Vector2f position, float radius);
    std::string GetShapeName() const override;
    float GetRadius() const;
    sf::Vector2f GetCenter() const;

    void Accept(IVisitor& visitor) override;
protected:
    sf::CircleShape* m_circle;
};
