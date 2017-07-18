#include <iostream>

using namespace std;

/*class ClassName {
private:
   T * pObj;   // object data member pointer
public:
   // Constructors
   ClassName(...) {
      pObj = new T(...); // or new[]
      ....
   }
   // Destructor
   ~ClassName() {
      delete pObj;      // OR delete[]
   }
   // Copy constructor
   ClassName & ClassName(const ClassName &);

   // Overload Assignment Operator
   ClassName & operator=(const ClassName &);
}*/

class Point
{
    //Friend function defined outside the class, but its argument can access all class members(including private)
    //Can enhance performance by directly accessing private data members, without going thru public member functions
    //Will not be inherited by subclass
    //To declare all member functions of a class (says Class1) friend functions of another class (says Class2), declared "friend class Class1;" in Class2.
    friend void set(Point &point, int x, int y);

private:
    int x;
    int y;

    //A static class member has only one copy, belonging to the class instead of the instances.
    //All instances share the same storage for a static class member
    //Used to share information among all instances
    static int count;

public:
    Point(int x=0, int y=0) : x(x), y(y) { };

    void print() const
    {
        cout<<x<<" "<<y<<'\n';
    }

    static int getCount()
    {
        return count;
    }
};

void set(Point &point, int x, int y)
{
    point.x=x;
    point.y=y;
}

int main()
{
    Point p1(4, 5);
    p1.print();
    set(p1, 10, 9);
    p1.print();
}
