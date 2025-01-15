#include <string>
#include "ShapeManager.h"

class FileHandler 
{
public:
    void ReadInputFile(const std::string& filename, ShapeManager& shapeManager);
};