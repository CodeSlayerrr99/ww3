#include <string>
#include "Author.h"

using namespace std;

class Book
{
private:
    string name;
    Author author;
    double price;
    int qtyInStock;
public:
    Book(string name, Author author, double price, int qtyInStock=0);

    string getName() const;
    void setName(string name);

    Author getAuthor() const;

    double getPrice() const;
    void setPrice(double price);

    int getQtyInStock() const;
    void setQtyInStock(int qtyInStock=0);

    void print() const;
    string getAuthorName() const;

};
