#include <iostream>
#include "movablePoint.h"

using namespace std;

int main()
{
    movablePoint p1(1, 1, 1, 1);
    p1.print();

    Point *p2=new Point(1, 1);
    p2->print();
    delete p2;

    movablePoint *p3=new movablePoint(1, 2, 3, 4);
    p3->move();
    p3->print();
    delete p3;

    Point *p4=new movablePoint(1, 2, 3, 4);
    p4->print();
}
