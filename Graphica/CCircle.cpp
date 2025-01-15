#include "CCircle.h"
#include "Constants.h"

CCircle::CCircle(sf::Vector2f position, float radius)
{
    m_circle = new sf::CircleShape(radius);

    m_circle->setPosition(position);
}

float CCircle::GetRadius() const
{
    return m_circle->getRadius();
}

sf::Vector2f CCircle::GetCenter() const
{
    sf::Vector2f position = m_circle->getPosition();
    float radius = m_circle->getRadius();
    position.x = position.x - radius; // https://en.sfml-dev.org/forums/index.php?topic=19206.0
    position.y = position.y - radius; // setPosition указывает не в центр, а в левый верхний угол, поэтому вычитаем радиус
    return position; // Центр = позиция + радиус
}

std::string CCircle::GetShapeName() const
{
    return CIRCLE_NAME;
}

void CCircle::Accept(IVisitor& visitor)
{
    visitor.Visit(*this);
}