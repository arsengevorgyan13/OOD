#include "TriangleDrawDecorator.h"

void TriangleDrawDecorator::Draw(sf::RenderWindow& window)
{
    sf::ConvexShape triangleShape;
    triangleShape.setPointCount(3);

    // Устанавливаем точки треугольника
    triangleShape.setPoint(0, m_triangle->GetPoint(0));
    triangleShape.setPoint(1, m_triangle->GetPoint(1));
    triangleShape.setPoint(2, m_triangle->GetPoint(2));

    // Задаем цвет и отрисовываем
    triangleShape.setFillColor(sf::Color(111, 81, 2)); // Можно сделать параметром
    window.draw(triangleShape);
}
