#include "CircleCreator.h"
#include "Constants.h"
#include <sstream>

std::shared_ptr<IShape> CircleCreator::CreateShape(const std::string& parameters)
{
    int centerX, centerY;
    size_t centerStart = parameters.find(CENTER_POINT) + CENTER_COORDIANTES_BEGINNING;
    size_t centerEnd = parameters.find(POINTS_SEPARATOR, centerStart);
    std::string centerCoords = parameters.substr(centerStart, centerEnd - centerStart);
    size_t commaPosition = centerCoords.find(COORDINATES_SEPARATOR);
    std::string centerXStr = centerCoords.substr(0, commaPosition);
    std::string centerYStr = centerCoords.substr(commaPosition + 1);
    centerX = std::stoi(centerXStr);
    centerY = std::stoi(centerYStr);

    int radius;
    size_t radiusStart = parameters.find(RADIUS) + RADIUS_BEGINNING;
    size_t radiusEnd = parameters.find(POINTS_SEPARATOR, radiusStart);
    std::string radiusStr = parameters.substr(radiusStart, radiusEnd - radiusStart);
    radius = std::stoi(radiusStr);

    sf::Vector2f center(centerX, centerY);
    return std::make_shared<CCircle>(center, radius);
}
