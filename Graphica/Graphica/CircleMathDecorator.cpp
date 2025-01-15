#include "CircleMathDecorator.h"
#define _USE_MATH_DEFINES
#include <math.h>

float CircleMathDecorator::GetArea() const
{
    return M_PI * m_circle->GetRadius() * m_circle->GetRadius();
}

float CircleMathDecorator::GetPerimeter() const
{
    return 2 * M_PI * m_circle->GetRadius();
}