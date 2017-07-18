#include <iostream>
#include "movablePoint.h"

using namespace std;

movablePoint::movablePoint(const int &x, const int &y, const int &xSpeed, const int &ySpeed) : Point(x, y), xSpeed(xSpeed), ySpeed(ySpeed){}

int movablePoint::getXSpeed() const
{
    return xSpeed;
}

int movablePoint::getYSpeed() const
{
    return ySpeed;
}

void movablePoint::setXSpeed(const int &xSpeed)
{
    this->xSpeed=xSpeed;
}

void movablePoint::setYSpeed(const int &ySpeed)
{
    this->ySpeed=ySpeed;
}

void movablePoint::move()
{
    Point::setX(Point::getX()+xSpeed);
    Point::setY(Point::getY()+ySpeed);
}

void movablePoint::print() const
{
    cout<<"Movable ";
    Point::print();
    cout<<xSpeed<<" "<<ySpeed<<'\n';
}
