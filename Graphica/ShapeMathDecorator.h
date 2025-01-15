#pragma once
#include "ShapeDecorator.h"
#include "IShape.h"

class ShapeMathDecorator : public ShapeDecorator
{
public:
    ShapeMathDecorator(std::shared_ptr<IShape> shapePtr)
        : m_shape(std::move(shapePtr)) {}
        
    virtual float GetArea() const = 0;
    virtual float GetPerimeter() const = 0;

protected:
    std::shared_ptr<IShape> m_shape;
};
