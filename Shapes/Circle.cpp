#include <iostream>
#include "Circle.h"

#define PI 3.14159

using namespace std;

Circle::Circle(int radius, const string &color) : Shape(color), radius(radius) {}

int Circle::getRadius() const
{
    return radius;
}

void Circle::setRadius(int radius)
{
    this->radius=radius;
}

void Circle::print() const
{
    cout<<"Circle of color "<<Shape::getColor()<<" and radius "<<radius<<'\n';
}

double Circle::getArea() const
{
    return PI*radius*radius;
}
