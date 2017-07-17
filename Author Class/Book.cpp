#include <iostream>
#include <string>
#include "Book.h"

using namespace std;

Book::Book(string name, Author author, double price, int qtyInStock)
{
    this->name=name;
    this->author=author;
    this->price=price;
    this->qtyInStock=qtyInStock;
}

string Book::getName() const
{
    return name;
}

void Book::setName(string name)
{
    this->name=name;
}

Author Book::getAuthor() const
{
    return author;
}

double Book::getPrice() const
{
    return price;
}

void Book::setPrice(double price)
{
    this->price=price;
}

int Book::getQtyInStock() const
{
    return qtyInStock;
}

void Book::setQtyInStock(int qtyInStock)
{
    this->qtyInStock=qtyInStock;
}

void Book::print() const
{
    cout<<name<<" by ";
    author.print();
}

string Book::getAuthorName() const
{
    return author.getName();
}
