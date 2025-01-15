#include "TriangleMathDecorator.h"

float TriangleMathDecorator::GetPerimeter() const
{
    sf::Vector2f p1 = m_triangle->GetPoint(0);
    sf::Vector2f p2 = m_triangle->GetPoint(1);
    sf::Vector2f p3 = m_triangle->GetPoint(2);

    float side1 = std::sqrt(std::pow(p2.x - p1.x, 2) + std::pow(p2.y - p1.y, 2));
    float side2 = std::sqrt(std::pow(p3.x - p2.x, 2) + std::pow(p3.y - p2.y, 2));
    float side3 = std::sqrt(std::pow(p1.x - p3.x, 2) + std::pow(p1.y - p3.y, 2));

    return side1 + side2 + side3;
}
float TriangleMathDecorator::GetArea() const
{
    sf::Vector2f p1 = m_triangle->GetPoint(0);
    sf::Vector2f p2 = m_triangle->GetPoint(1);
    sf::Vector2f p3 = m_triangle->GetPoint(2);

    // векторное произведение
    return 0.5 * std::abs((p2.x - p1.x) * (p3.y - p1.y) - (p3.x - p1.x) * (p2.y - p1.y));
}

