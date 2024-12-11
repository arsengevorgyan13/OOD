#pragma once
#include "IShape.h"
#include <SFML/Graphics.hpp>

class CCircle : public IShape
{
public:
    CCircle(sf::Vector2f position, float radius);
    ~CCircle() override;
    std::string GetShapeName() const override;
    float GetRadius() const;
    void Draw(sf::RenderWindow& window) override;
protected:
    sf::CircleShape* m_circle;
};
