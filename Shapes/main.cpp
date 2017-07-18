#include <iostream>
#include "Rectangle.h"
#include "Circle.h"

using namespace std;

int main()
{
    Rectangle R1(5, 10, "blue");
    R1.print();

    Circle C1(5, "green");
    C1.print();

    Shape *s1;
    s1=new Circle(6);
    s1->print();
    delete s1;

    Shape *s2;
    s2=new Rectangle(5, 10);
    s2->print();
    delete s2;

}
