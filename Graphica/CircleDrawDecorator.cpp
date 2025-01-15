#include "CircleDrawDecorator.h"

void CircleDrawDecorator::Draw(sf::RenderWindow& window)
{
    sf::CircleShape circleShape(m_circle->GetRadius());
    circleShape.setPosition(m_circle->GetCenter());
    circleShape.setFillColor(sf::Color(81, 2, 0));
    window.draw(circleShape);
}