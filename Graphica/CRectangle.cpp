#include "CRectangle.h"
#include "Constants.h"

CRectangle::CRectangle(sf::Vector2f position, float width, float height)
{
    m_rectangle = new sf::RectangleShape(sf::Vector2f(width, height));
    m_rectangle->setPosition(position);
    m_rectangle->setFillColor(sf::Color(255, 0, 0));
}

std::string CRectangle::GetShapeName() const
{
    return RECTANGLE_NAME;
}

float CRectangle::GetWidth() const
{
    return m_rectangle->getSize().x;
}

float CRectangle::GetHeight() const
{
    return m_rectangle->getSize().y;
}

sf::Vector2f CRectangle::GetPosition() const
{
    return m_rectangle->getPosition();
}

void CRectangle::Accept(IVisitor& visitor)
{
    visitor.Visit(*this);
}