#ifndef SHAPE_H
#define SHAPE_H

using namespace std;

class Shape
{
private:
    string color;
public:
    Shape(const string &color="red");

    string getColor() const;
    void setColor(string color);

    //Virtual function, run subclass version if overriden
    virtual void print() const;

    //Pure virtual function, to be implemented in subclass
    //Cannot create instance of Shape, only pointer
    virtual double getArea() const=0;
};
#endif // SHAPE_H
