#include "Application.h"
#include "Constants.h"

Application::Application()
    : m_window(sf::VideoMode(1000, 800), "") 
{
}

void Application::Run() 
{
    m_shapeManager.ReadInputFile(INPUT_FILE_NAME);
        
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
        m_shapeManager.DrawShapes(m_window);
        m_window.display();
    }

    m_shapeManager.SaveResults(OUTPUT_FILE_NAME);
}