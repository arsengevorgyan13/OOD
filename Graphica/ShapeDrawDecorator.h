#pragma once
#include "ShapeDecorator.h"

class ShapeDrawDecorator : public ShapeDecorator
{
public:
    ShapeDrawDecorator(std::shared_ptr<IShape> shapePtr)
        : ShapeDecorator(std::move(shapePtr)) {}
    virtual void Draw(sf::RenderWindow& window) = 0;
    ~ShapeDrawDecorator() = default;
protected:
    std::shared_ptr<IShape> m_shape;
};
