#include "ShapeFactoryManager.h"
#include "Constants.h"

ShapeFactoryManager::ShapeFactoryManager()
{
    RegisterCreator(RECTANGLE_NAME, &RectangleCreator::GetInstance());
    RegisterCreator(CIRCLE_NAME, &CircleCreator::GetInstance());
    RegisterCreator(TRIANGLE_NAME, &TriangleCreator::GetInstance());
}

std::shared_ptr<IShape> ShapeFactoryManager::CreateShape(const std::string& shapeType, const std::string& parameters)
{
    auto it = m_creators.find(shapeType);
    if (it != m_creators.end()) {
        return it->second->CreateShape(parameters);
    }
    throw std::runtime_error("Unknown shape type");
}

void ShapeFactoryManager::RegisterCreator(const std::string& shapeType, ShapeCreator* creator)
{
    m_creators[shapeType] = creator;
}