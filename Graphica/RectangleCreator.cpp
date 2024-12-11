#include "RectangleCreator.h"
#include "Constants.h"
#include <sstream>

std::shared_ptr<IShape> RectangleCreator::CreateShape(const std::string& parameters)
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

    sf::Vector2f position(std::min(firstPointX, secondPointX), std::min(firstPointY, secondPointY));
    sf::Vector2f size(std::abs(secondPointX - firstPointX), std::abs(secondPointY - firstPointY));

    return std::make_shared<CRectangle>(position, size.x, size.y);
}
