#pragma once
#include "IShape.h"

class ShapeMathDecorator : public IShape
{
public:
    ShapeMathDecorator(std::shared_ptr<IShape> shapePtr)
        : m_shape(std::move(shapePtr)) {}
        
    virtual float GetArea() const = 0;
    virtual float GetPerimeter() const = 0;

    std::string GetShapeName() const override 
    {
        return m_shape->GetShapeName(); 
    }

    void Draw(sf::RenderWindow& window) override 
    {
        m_shape->Draw(window); 
    }

protected:
    std::shared_ptr<IShape> m_shape;
};
