#include <iostream>
#include<cmath>
#include "Point2D.h"


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
