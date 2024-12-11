#pragma once
#include "IShape.h"
#include <SFML/Graphics.hpp>

class CTriangle : public IShape
{
public:
    CTriangle(sf::Vector2f point1, sf::Vector2f point2, sf::Vector2f point3);
    ~CTriangle() override;
    void Draw(sf::RenderWindow& window) override;
    std::string GetShapeName() const override;
    sf::Vector2f GetPoint(size_t index) const;
private:
    sf::ConvexShape* m_triangle;
};

