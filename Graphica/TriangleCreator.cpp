#include "TriangleCreator.h"
#include "Constants.h"
#include <sstream>

std::shared_ptr<IShape> TriangleCreator::CreateShape(const std::string& parameters)
{

    // Чтение первой точки
    int firstPointX, firstPointY;
    size_t firstPointStart = parameters.find(FIRST_POINT) + COORDIANTES_BEGINNING;
    size_t firstPointEnd = parameters.find(POINTS_SEPARATOR, firstPointStart);
    std::string firstPointCoords = parameters.substr(firstPointStart, firstPointEnd - firstPointStart);
    size_t commaPosition = firstPointCoords.find(COORDINATES_SEPARATOR);
    std::string firstPointXStr = firstPointCoords.substr(0, commaPosition);
    std::string firstPointYStr = firstPointCoords.substr(commaPosition + 1);
    firstPointX = std::stoi(firstPointXStr);
    firstPointY = std::stoi(firstPointYStr);

    // Чтение второй точки
    int secondPointX, secondPointY;
    size_t secondPointStart = parameters.find(SECOND_POINT) + COORDIANTES_BEGINNING;
    size_t secondPointEnd = parameters.find(POINTS_SEPARATOR, secondPointStart);
    std::string secondPointCoords = parameters.substr(secondPointStart, secondPointEnd - secondPointStart);
    commaPosition = secondPointCoords.find(COORDINATES_SEPARATOR);
    std::string secondPointXStr = secondPointCoords.substr(0, commaPosition);
    std::string secondPointYStr = secondPointCoords.substr(commaPosition + 1);
    secondPointX = std::stoi(secondPointXStr);
    secondPointY = std::stoi(secondPointYStr);

    // Чтение третьей точки
    int thirdPointX, thirdPointY;
    size_t thirdPointStart = parameters.find(THIRD_POINT) + COORDIANTES_BEGINNING;
    size_t thirdPointEnd = parameters.find(POINTS_SEPARATOR, thirdPointStart);
    std::string thirdPointCoords = parameters.substr(thirdPointStart, thirdPointEnd - thirdPointStart);
    commaPosition = thirdPointCoords.find(COORDINATES_SEPARATOR);
    std::string thirdPointXStr = thirdPointCoords.substr(0, commaPosition);
    std::string thirdPointYStr = thirdPointCoords.substr(commaPosition + 1);
    thirdPointX = std::stoi(thirdPointXStr);
    thirdPointY = std::stoi(thirdPointYStr);

    sf::Vector2f firstPoint(firstPointX, firstPointY);
    sf::Vector2f secondPoint(secondPointX, secondPointY);
    sf::Vector2f thirdPoint(thirdPointX, thirdPointY);

    return std::make_shared<CTriangle>(firstPoint, secondPoint, thirdPoint);
}