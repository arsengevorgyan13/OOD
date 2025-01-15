#pragma once
#include "ShapeCreator.h"
#include "CCircle.h"

class CircleCreator : public ShapeCreator
{
public:
    static CircleCreator& GetInstance() // синглтон
    {
        static CircleCreator instance;
        return instance;
    }

    std::shared_ptr<IShape> CreateShape(const std::string& parameters) override;

private:
    CircleCreator() = default;
    CircleCreator(const CircleCreator&) = delete;
    CircleCreator& operator=(const CircleCreator&) = delete;
};
