#pragma once
#include "IShape.h"
#include <memory>

class ShapeDecorator : public IShape
{
public:
    ShapeDecorator(std::shared_ptr<IShape> shapePtr)
        : m_shape(std::move(shapePtr)) {}

    ShapeDecorator() = default;

    std::string GetShapeName() const override
    {
        return m_shape->GetShapeName();
    }

protected:
    std::shared_ptr<IShape> m_shape;
};
