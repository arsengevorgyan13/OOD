#pragma once
#include "ShapeCreator.h"
#include "CTriangle.h"

class TriangleCreator : public ShapeCreator
{
public:
    static TriangleCreator& GetInstance()
    {
        static TriangleCreator instance;
        return instance;
    }

    std::shared_ptr<IShape> CreateShape(const std::string& parameters) override;

private:
    TriangleCreator() = default;
    TriangleCreator(const TriangleCreator&) = delete;
    TriangleCreator& operator=(const TriangleCreator&) = delete;
};
