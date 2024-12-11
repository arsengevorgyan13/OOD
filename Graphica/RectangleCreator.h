#pragma once
#include "ShapeCreator.h"
#include "CRectangle.h"

class RectangleCreator : public ShapeCreator
{
public:
    static RectangleCreator& GetInstance() // синглтон
    {
        static RectangleCreator instance;
        return instance;
    }

    std::shared_ptr<IShape> CreateShape(const std::string& parameters) override;

private:
    RectangleCreator() = default;
    RectangleCreator(const RectangleCreator&) = delete;
    RectangleCreator& operator=(const RectangleCreator&) = delete;
};
