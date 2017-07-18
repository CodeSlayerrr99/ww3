#include <iostream>
#include "Shape.h"

using namespace std;

Shape::Shape(const string &color)
{
    this->color=color;
}

string Shape::getColor() const
{
    return color;
}

void Shape::setColor(string color)
{
    this->color=color;
}

void Shape::print() const
{
    cout<<"Shape of color "<<color<<'\n';
}
