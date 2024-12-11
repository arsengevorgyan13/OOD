#include "RectangleMathDecorator.h"

float RectangleMathDecorator::GetPerimeter() const
{
    return 2 * (m_rectangle->GetWidth() + m_rectangle->GetHeight());
}

float RectangleMathDecorator::GetArea() const
{
    return m_rectangle->GetWidth() * m_rectangle->GetHeight();
}
