#include <iostream>

using namespace std;

void square(int number)
{
    number*=number;
}

void square(int *number)
{
    *number*=*number;
}

void squareRef(int &number)
{
    number*=number;
}

int main()
{
    int number=88;
    int *pNumber;
    pNumber=&number;
    cout<<*pNumber<<'\n';//valoare de la adresa spre care arata pNumber;

    int &refNumber=number;
    cout<<refNumber<<" ";
    refNumber=99;
    cout<<number<<'\n';

    number=8;
    square(number);
    cout<<number<<" ";
    square(&number);
    cout<<number<<" ";
    squareRef(number);
    cout<<number<<'\n';


    int *p2=new int;//pointer la adresa noua alocata
    *p2=99;
    cout<<*p2<<" ";
    delete p2;
    double *p3=new double(1.23);
    cout<<*p3<<'\n';
    delete p3;

    const int SIZE=5;
    int * pArray;
    pArray=new int[SIZE];
    for(int i=0; i<SIZE; i++)
        *(pArray+i)=i;
    for(int i=0; i<SIZE; i++)
        cout<<*(pArray+i)<<" ";
    cout<<'\n';
    delete pArray;
}
