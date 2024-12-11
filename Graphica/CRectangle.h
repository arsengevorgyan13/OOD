#pragma once
#include "IShape.h"
#include <SFML/Graphics.hpp>

class CRectangle : public IShape
{
public:
    CRectangle(sf::Vector2f position, float width, float height);
    ~CRectangle() override;
    void Draw(sf::RenderWindow& window) override;
    std::string GetShapeName() const override;

    float GetWidth() const;
    float GetHeight() const;

private:
    sf::RectangleShape* m_rectangle;
};