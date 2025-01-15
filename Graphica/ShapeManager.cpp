#include <iostream>
#include <iomanip>
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
#include "ShapeDrawDecorator.h"
#include "RectangleDrawDecorator.h"
#include "TriangleDrawDecorator.h"
#include "CircleDrawDecorator.h"
#include "ShapeFactoryManager.h"
#include "ShapeMathVisitor.h"

void ShapeManager::ReadInputFile(const std::string& filename)
{
    std::ifstream inputFile(filename);
    std::string line;

    while (std::getline(inputFile, line))
    {
        auto delimiterPos = line.find(':');
        std::string shapeType = line.substr(0, delimiterPos);
        std::string parameters = line.substr(delimiterPos + 1);

        auto shape = ShapeFactoryManager::GetInstance().CreateShape(shapeType, parameters);
        if (!shape)
        {
            std::cerr << "Failed to create shape of type: " << shapeType << std::endl;
            continue;
        }
        shapes.push_back(std::move(shape));
    }
}

void ShapeManager::DrawShapes(sf::RenderWindow& window)
{
    for (const auto& shape : shapes)
    {
        if (auto rectangle = std::dynamic_pointer_cast<CRectangle>(shape)) {
            RectangleDrawDecorator decorator(rectangle);
            decorator.Draw(window);
        }
        else if (auto circle = std::dynamic_pointer_cast<CCircle>(shape)) {
            CircleDrawDecorator decorator(circle);
            decorator.Draw(window);
        }
        else if (auto triangle = std::dynamic_pointer_cast<CTriangle>(shape)) {
            TriangleDrawDecorator decorator(triangle);
            decorator.Draw(window);
        }
    }
}

void ShapeManager::SaveResults(const std::string& outputFilename)
{
    std::ofstream outputFile(outputFilename);
    ShapeMathVisitor mathVisitor;

    for (const auto& shape : shapes)
    {
        shape->Accept(mathVisitor);
    }

    outputFile << mathVisitor.GetResults();
}


const std::vector<std::shared_ptr<IShape>>& ShapeManager::GetShapes() const
{
    return shapes;
}