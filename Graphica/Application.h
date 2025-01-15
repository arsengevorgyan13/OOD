#include <SFML/Graphics.hpp>
#include "ShapeManager.h"

class Application
{
public:
    Application();
    void Run();
private:
    ShapeManager m_shapeManager;
    sf::RenderWindow m_window;
};
