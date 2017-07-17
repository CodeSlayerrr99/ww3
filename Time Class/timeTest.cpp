#include <iostream>
#include "Time.h"
#include <stdexcept>

using namespace std;

int main()
{
    try
    {
        Time t1(69, 11, 11);
        t1.print();

        t1.nextSecond().nextSecond().nextSecond();
        t1.print();
        t1.setHour(5).setMinute(10).setSecond(11).print();
    }
    catch(invalid_argument & ex)
    {
        cout<<"Exception!"<<ex.what()<<'\n';
    }

    //ordinary object
    Time t1(1, 1, 1);
    t1.print();

    //object pointer
    Time *ptrT1=&t1;
    (*ptrT1).setHour(5).setMinute(6).setSecond(7).print();
    (*ptrT1).print();
    ptrT1->print();

    //object reference
    Time &refT1=t1;
    refT1.print();

    //dynamic allocation
    Time *ptrT2=new Time(4, 5, 6);
    ptrT2->print();
    delete ptrT2;

    //object array
    Time tArray1[2];
    tArray1[0].print();
    tArray1[1].setTime(1, 1, 1).print();

    Time tArray2[2]={Time(7, 8, 9), Time(10)};
    tArray2[0].print();
    tArray2[1].print();

    Time *ptrArray1=new Time[2];
    ptrArray1[0].print();
    ptrArray1[1].setTime(1, 1, 1).print();
}
