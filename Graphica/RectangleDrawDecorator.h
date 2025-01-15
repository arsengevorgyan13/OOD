#pragma once
#include "ShapeDrawDecorator.h"
#include "CRectangle.h"

class RectangleDrawDecorator : public ShapeDrawDecorator
{
public:
    RectangleDrawDecorator(std::shared_ptr<CRectangle> rectangle)
        : ShapeDrawDecorator(rectangle), m_rectangle(rectangle) {}

    void Draw(sf::RenderWindow& window) override;

private:
    std::shared_ptr<CRectangle> m_rectangle;
};
