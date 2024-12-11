#include <iostream>
#include <fstream>
#include "FileHandler.h"
#include "CRectangle.h"
#include "CCircle.h"
#include "CTriangle.h"
#include "Constants.h"
#include "ShapeFactoryManager.h"
#include <algorithm>

void FileHandler::ReadInputFile(const std::string& filename, ShapeManager& shapeManager)
{
    std::ifstream inputFile(filename);
    std::string line;

    while (std::getline(inputFile, line))
    {
        auto delimiterPos = line.find(':');
        std::string shapeType = line.substr(0, delimiterPos);
        std::string parameters = line.substr(delimiterPos + 1);

        auto shape = ShapeFactoryManager::GetInstance().CreateShape(shapeType, parameters);
        shapeManager.AddShape(shape);
    }
}