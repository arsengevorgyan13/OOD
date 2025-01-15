#pragma once
#include "ShapeMathDecorator.h"
#include "CRectangle.h"

class RectangleMathDecorator : public ShapeMathDecorator
{
public:
    RectangleMathDecorator(std::shared_ptr<CRectangle> rectangle)
        : ShapeMathDecorator(rectangle), m_rectangle(rectangle) {}
    float GetPerimeter() const override;
    float GetArea() const override;

private:
    std::shared_ptr<CRectangle> m_rectangle;
};
