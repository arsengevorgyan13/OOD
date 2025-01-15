#pragma once
#include "IVisitor.h"
#include <iostream>
#include <string>

class ShapeMathVisitor : public IVisitor
{
public:
    void Visit(const CRectangle& rectangle) override;
    void Visit(const CCircle& circle) override;
    void Visit(const CTriangle& triangle) override;

    std::string GetResults() const;
private:
    std::string m_results;
};
