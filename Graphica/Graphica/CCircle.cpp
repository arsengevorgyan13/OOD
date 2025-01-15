#include "CCircle.h"
#include "Constants.h"

CCircle::CCircle(sf::Vector2f position, float radius)
{
    m_circle = new sf::CircleShape(radius);
    position.x = position.x - radius; // https://en.sfml-dev.org/forums/index.php?topic=19206.0
    position.y = position.y - radius; // setPosition указывает не в центр, а в левый верхний угол, поэтому вычитаем радиус

    m_circle->setPosition(position);
    m_circle->setFillColor(sf::Color(0, 255, 255));

}

CCircle::~CCircle()
{
    delete m_circle;
}
float CCircle::GetRadius() const
{
    return m_circle->getRadius();
}

void CCircle::Draw(sf::RenderWindow& window)
{
    window.draw(*m_circle);
}

std::string CCircle::GetShapeName() const
{
    return CIRCLE_NAME;
}
