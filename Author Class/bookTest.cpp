#include <iostream>
#include <string>
#include "Book.h"

using namespace std;

int main()
{
    Author A1("Andreea", "Andreea@yahoo.com", 'f');
    A1.print();
    Book B1("Carte", A1, 15.0, 1);
    B1.print();
}
