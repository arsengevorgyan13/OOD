#include "ShapeMathVisitor.h"
#include "CRectangle.h"
#include "CCircle.h"
#include "CTriangle.h"
#include "Constants.h"
#include "RectangleMathDecorator.h"
#include "CircleMathDecorator.h"
#include "TriangleMathDecorator.h"
#include <iomanip>
#include <sstream>

void ShapeMathVisitor::Visit(const CRectangle& rectangle)
{
    auto decoratedRectangle = std::make_shared<RectangleMathDecorator>(
        std::make_shared<CRectangle>(rectangle));
    float area = decoratedRectangle->GetArea();
    float perimeter = decoratedRectangle->GetPerimeter();
    m_results += rectangle.GetShapeName() +
        PERIMETER + std::to_string(perimeter) +
        SQUARE + std::to_string(area) + "\n";
}

void ShapeMathVisitor::Visit(const CCircle& circle)
{
    auto decoratedCircle = std::make_shared<CircleMathDecorator>(
        std::make_shared<CCircle>(circle));
    float area = decoratedCircle->GetArea();
    float perimeter = decoratedCircle->GetPerimeter();
    m_results += circle.GetShapeName() +
        PERIMETER + std::to_string(perimeter) +
        SQUARE + std::to_string(area) + "\n";
}

void ShapeMathVisitor::Visit(const CTriangle& triangle)
{
    auto decoratedTriangle = std::make_shared<TriangleMathDecorator>(
        std::make_shared<CTriangle>(triangle));
    float area = decoratedTriangle->GetArea();
    float perimeter = decoratedTriangle->GetPerimeter();
    m_results += triangle.GetShapeName() +
        PERIMETER + std::to_string(perimeter) +
        SQUARE + std::to_string(area) + "\n";
}

std::string ShapeMathVisitor::GetResults() const
{
    return m_results;
}