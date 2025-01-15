#pragma once
#include "ShapeDrawDecorator.h"
#include "CCircle.h"

class CircleDrawDecorator : public ShapeDrawDecorator
{
public:
    CircleDrawDecorator(std::shared_ptr<CCircle> circle)
        : ShapeDrawDecorator(circle), m_circle(circle) {}

    void Draw(sf::RenderWindow& window) override;

private:
    std::shared_ptr<CCircle> m_circle;
};