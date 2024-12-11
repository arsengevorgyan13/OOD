#pragma once
#include <memory>
#include "IShape.h"

class ShapeCreator
{
public:
    virtual ~ShapeCreator() = default;
    virtual std::shared_ptr<IShape> CreateShape(const std::string& parameters) = 0;
};