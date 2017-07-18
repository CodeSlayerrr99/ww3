#ifndef MOVABLEPOINT_H
#define MOVABLEPOINT_H

#include "Point.h"

using namespace std;

class movablePoint : public Point
{
private:
    int xSpeed;
    int ySpeed;
public:
    movablePoint(const int &x=0, const int &y=0, const int &xSpeed=0, const int &ySpeed=0);

    int getXSpeed() const;
    void setXSpeed(const int &xSpeed=0);

    int getYSpeed() const;
    void setYSpeed(const int &ySpeed=0);

    void move();
    void print() const;

};

#endif // MOVABLEPOINT_H
