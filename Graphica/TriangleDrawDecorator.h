#pragma once
#include "ShapeDrawDecorator.h"
#include "CTriangle.h"

class TriangleDrawDecorator : public ShapeDrawDecorator
{
public:
    TriangleDrawDecorator(std::shared_ptr<CTriangle> triangle)
        : ShapeDrawDecorator(triangle), m_triangle(triangle) {}

    void Draw(sf::RenderWindow& window) override;

private:
    std::shared_ptr<CTriangle> m_triangle;
};
