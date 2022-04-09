#include <iostream>
#include<cmath>
#include "Point2D.h"


Point2D::Point2D() : mX{ 0 }, mY{ 0 }
{
}
Point2D::Point2D(float x, float y) : mX{ x }, mY{ y }
{
}

void Point2D::SetX(float value)
{
    mX = value;
}

void Point2D::SetY(float value)
{
    mY = value;
}

float Point2D::ZeroPointLength()
{
    return sqrt(mX * mX + mY * mY);
}

void Point2D::PirntX_Y()
{
    std::cout << "(" << mX << ", " << mY << ")" << std::endl;
}

Point2D& Point2D::operator=(const Point2D& B)
{
    mX = B.mX;
    mY = B.mY;
    return *this;
}

Point2D operator+(const Point2D& A, const Point2D& B)
{
    Point2D temp{};
    temp.mX = A.mX + B.mX;
    temp.mY = A.mY + B.mY;
    return temp;
}

Point2D operator-(const Point2D& A, const Point2D& B)
{
    Point2D temp{};
    temp.mX = A.mX - B.mX;
    temp.mY = A.mY - B.mY;
    return temp;
}
std::ostream& operator<<(std::ostream& os, const Point2D& A) 
{
    os << "(" << A.mX << ", " << A.mY << ")";
    return os;
}
