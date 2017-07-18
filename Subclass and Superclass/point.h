#ifndef POINT_H
#define POINT_H

using namespace std;

class Point
{
private:
    int x;
    int y;
public:
    Point(const int &x=0, const int &y=0);

    int getX() const;
    void setX(const int &x=0);

    int getY() const;
    void setY(const int &y=0);

    void setXY(const int &x=0, const int &y=0);
    double getMagnitude() const;
    double getArgument() const;
    virtual void print() const;
};

#endif // POINT_H
