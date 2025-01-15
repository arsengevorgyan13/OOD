#pragma once
#include "ShapeDecorator.h"
#include <fstream>

class ShapeFileDecorator : public ShapeDecorator
{
public:
    ShapeFileDecorator(std::shared_ptr<IShape> shapePtr)
        : ShapeDecorator(std::move(shapePtr)) {}
    virtual void SaveToFile(const std::string& filename) const = 0;
    virtual void ReadFromFile(const std::string& filename) = 0;
};
