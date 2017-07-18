#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

using namespace std;

class Circle : public Shape
{
private:
    int radius;
public:
    Circle(int radius, const string &color="red");

    int getRadius() const;
    void setRadius(int radius);

    void print() const;
    double getArea() const;
};

#endif // CIRCLE_H
