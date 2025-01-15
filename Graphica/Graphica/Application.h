#include <SFML/Graphics.hpp>
#include "ShapeManager.h"
#include "FileHandler.h"

class Application
{
public:
    Application();
    void Run();
private:
    ShapeManager m_shapeManager;
    FileHandler m_fileHandler;
    sf::RenderWindow m_window;
};
