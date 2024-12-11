#pragma once
#include "ShapeMathDecorator.h"
#include "CTriangle.h"

class TriangleMathDecorator : public ShapeMathDecorator
{
public:
    TriangleMathDecorator(std::shared_ptr<CTriangle> triangle)
        : ShapeMathDecorator(triangle), m_triangle(triangle) {}
    float GetPerimeter() const override;
    float GetArea() const override;

private:
    std::shared_ptr<CTriangle> m_triangle;
};
