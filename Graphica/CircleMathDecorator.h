#pragma once
#include "ShapeMathDecorator.h"
#include "CCircle.h"

class CircleMathDecorator : public ShapeMathDecorator
{
public:
    CircleMathDecorator(std::shared_ptr<CCircle> circle)
        : ShapeMathDecorator(circle), m_circle(circle) {}

    float GetArea() const override;
    float GetPerimeter() const override;

private:
    std::shared_ptr<CCircle> m_circle;
};
