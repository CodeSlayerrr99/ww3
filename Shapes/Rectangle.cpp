#include <iostream>
#include "RECTANGLE.H"

using namespace std;

Rectangle::Rectangle(int width, int length, const string &color) : Shape(color), width(width), length(length) {}

int Rectangle::getLength() const
{
    return length;
}

void Rectangle::setLength(int length)
{
    this->length=length;
}

int Rectangle::getWidth() const
{
    return width;
}

void Rectangle::setWidth(int width)
{
    this->width=width;
}

void Rectangle::print() const
{
    cout<<"Rectangle of color "<<Shape::getColor()<<", length "<<length<<" and width "<<width<<'\n';
}

double Rectangle::getArea() const
{
    return width*length;
}
