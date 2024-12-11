#include <iostream>
#include <fstream>
#include "ShapeManager.h"
#include "IShape.h"
#include "RectangleMathDecorator.h"
#include "TriangleMathDecorator.h"
#include "CircleMathDecorator.h"
#include "ShapeMathDecorator.h"
#include "CTriangle.h"
#include "CCircle.h"
#include "CRectangle.h"
#include "Constants.h"

void ShapeManager::AddShape(std::shared_ptr<IShape> shape) 
{
    if (auto rectangle = std::dynamic_pointer_cast<CRectangle>(shape))
    {
        shape = std::make_shared<RectangleMathDecorator>(rectangle);
    }
    else if (auto circle = std::dynamic_pointer_cast<CCircle>(shape)) 
    {
        shape = std::make_shared<CircleMathDecorator>(circle);
    }
    else if (auto triangle = std::dynamic_pointer_cast<CTriangle>(shape)) 
    {
        shape = std::make_shared<TriangleMathDecorator>(triangle);
    }

    shapes.push_back(std::move(shape));
}

void ShapeManager::DrawShapes(sf::RenderWindow& window) 
{
    for (const auto& shape : shapes) 
    {
        shape->Draw(window);
    }
}

void ShapeManager::SaveResults(const std::string& outputFilename) 
{
    std::ofstream outputFile(outputFilename);
    for (const auto& shape : shapes) 
    {
        outputFile << shape->GetShapeName();

        auto decoratedShape = dynamic_cast<ShapeMathDecorator*>(shape.get());
        if (decoratedShape)
        {
            outputFile << PERIMETER << decoratedShape->GetPerimeter()
                << SQUARE << decoratedShape->GetArea();
        }
        else 
        {
            outputFile << EMPTY_OUTPUT; 
        }
        outputFile << std::endl;
    }
}


const std::vector<std::shared_ptr<IShape>>& ShapeManager::GetShapes() const
{
    return shapes;
}
