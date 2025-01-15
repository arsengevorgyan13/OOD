#include "TriangleDrawDecorator.h"

void TriangleDrawDecorator::Draw(sf::RenderWindow& window)
{
    sf::ConvexShape triangleShape;
    triangleShape.setPointCount(3);

    // ������������� ����� ������������
    triangleShape.setPoint(0, m_triangle->GetPoint(0));
    triangleShape.setPoint(1, m_triangle->GetPoint(1));
    triangleShape.setPoint(2, m_triangle->GetPoint(2));

    // ������ ���� � ������������
    triangleShape.setFillColor(sf::Color(111, 81, 2)); // ����� ������� ����������
    window.draw(triangleShape);
}
