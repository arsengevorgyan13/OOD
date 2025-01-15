#pragma once
#include <string>
#include <unordered_map>
#include "ShapeCreator.h"
#include "RectangleCreator.h"
#include "TriangleCreator.h"
#include "CircleCreator.h"

class ShapeFactoryManager
{
public:
    static ShapeFactoryManager& GetInstance()
    {
        static ShapeFactoryManager instance;
        return instance;
    }

    std::shared_ptr<IShape> CreateShape(const std::string& shapeType, const std::string& parameters);

    void RegisterCreator(const std::string& shapeType, ShapeCreator* creator);

private:
    ShapeFactoryManager();

    std::unordered_map<std::string, ShapeCreator*> m_creators;
};
