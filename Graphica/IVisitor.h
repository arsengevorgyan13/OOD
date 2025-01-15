#pragma once
#pragma once
class CRectangle;
class CCircle;
class CTriangle;

class IVisitor
{
public:
    virtual void Visit(const CRectangle& rectangle) = 0;
    virtual void Visit(const CCircle& circle) = 0;
    virtual void Visit(const CTriangle& triangle) = 0;
    virtual ~IVisitor() = default;
};
