#include "RectangleDrawDecorator.h"

void RectangleDrawDecorator::Draw(sf::RenderWindow& window)
{
    sf::RectangleShape rectangleShape(sf::Vector2f(m_rectangle->GetWidth(), m_rectangle->GetHeight()));
    rectangleShape.setPosition(m_rectangle->GetPosition());
    rectangleShape.setFillColor(sf::Color(255, 212, 52));
    window.draw(rectangleShape);
}
