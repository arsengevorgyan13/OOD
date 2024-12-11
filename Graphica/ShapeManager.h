#ifndef SHAPE_MANAGER_H
#define SHAPE_MANAGER_H

#include <SFML/Graphics.hpp>
#include <vector>
#include <memory>
#include "ShapeDecorator.h"
#include "IShape.h"

class ShapeManager
{
public:
    void AddShape(std::shared_ptr<IShape> shape);
    void DrawShapes(sf::RenderWindow& window);
    void SaveResults(const std::string& outputFilename);
    const std::vector<std::shared_ptr<IShape>>& GetShapes() const;
private:
    std::vector<std::shared_ptr<IShape>> shapes;
};

#endif