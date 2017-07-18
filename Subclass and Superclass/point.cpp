#include <iostream>
#include <math.h>
#include "Point.h"

using namespace std;

Point::Point(const int &x, const int &y)
{
    this->x=x;
    this->y=y;
}

int Point::getX() const
{
    return x;
}

void Point::setX(const int &x)
{
    this->x=x;
}

int Point::getY() const
{
    return y;
}

void Point::setY(const int &y)
{
    this->y=y;
}

void Point::setXY(const int &x, const int &y)
{
    setX(x);
    setY(y);
}

double Point::getMagnitude() const
{
    return x*x+y*y;
}

double Point::getArgument() const
{
    return atan2(y, x);
}

void Point::print() const
{
    cout<<"Point "<<x<<" "<<y<<'\n';
}
