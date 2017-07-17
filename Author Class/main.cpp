#include <iostream>
#include "Author.h"

Author::Author(string name, string email, char gender)
{
    this->name=name;
    this->email=email;
    this->gender=gender;
}

string Author::getName() const
{
    return name;
}

string Author::getEmail() const
{
    return email;
}

char Author::getGender() const
{
    return gender;
}

void Author::setEmail(string email)
{
    this->email=email;
}

void Author::print() const
{
    cout<<name<<" "<<gender<<" at "<<email<<'\n';
}
