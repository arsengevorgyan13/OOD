#include "Application.h"
#include "Constants.h"

Application::Application()
    : m_window(sf::VideoMode(1000, 800), "") 
{
}

void Application::Run() 
{
    ShapeManager shapeManager;
    m_fileHandler.ReadInputFile(INPUT_FILE_NAME, shapeManager);
        
    while (m_window.isOpen())
    {
        sf::Event event;
        while (m_window.pollEvent(event)) 
        {
            if (event.type == sf::Event::Closed)
            {
                m_window.close();
            }
        }

        m_window.clear(sf::Color(52, 92, 92));
        shapeManager.DrawShapes(m_window);
        m_window.display();
    }

    shapeManager.SaveResults(OUTPUT_FILE_NAME);
}
