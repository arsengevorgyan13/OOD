#include "CTriangle.h"
#include "Constants.h"

CTriangle::CTriangle(sf::Vector2f point1, sf::Vector2f point2, sf::Vector2f point3)
{
    m_triangle = new sf::ConvexShape();  
    m_triangle->setPointCount(3);
    m_triangle->setPoint(0, point1);
    m_triangle->setPoint(1, point2);
    m_triangle->setPoint(2, point3);

    m_triangle->setFillColor(sf::Color::Green);
}

CTriangle::~CTriangle()
{
    delete m_triangle;
}

void CTriangle::Draw(sf::RenderWindow& window)
{
    window.draw(*m_triangle);
}

std::string CTriangle::GetShapeName() const
{
    return TRIANGLE_NAME;
}

sf::Vector2f CTriangle::GetPoint(size_t index) const
{
    if (index < m_triangle->getPointCount())
    {
        return m_triangle->getPoint(index);
    }
}
