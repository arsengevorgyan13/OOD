#pragma once
#include "IShape.h"
#include "IVisitor.h"
#include <SFML/Graphics.hpp>

class CTriangle : public IShape
{
public:
    CTriangle(sf::Vector2f point1, sf::Vector2f point2, sf::Vector2f point3);
    std::string GetShapeName() const override;
    sf::Vector2f GetPoint(size_t index) const;
    void Accept(IVisitor& visitor) override;
private:
    sf::ConvexShape* m_triangle;
};

