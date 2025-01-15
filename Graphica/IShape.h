#pragma once
#include <SFML/Graphics.hpp>
#include <string>
#include "IVisitor.h"
#include "ShapeMathVisitor.h"

class IShape
{
public:
    virtual std::string GetShapeName() const = 0;
    virtual void Accept(IVisitor& visitor) {};
};
