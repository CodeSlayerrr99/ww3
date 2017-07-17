#include <string>

using namespace std;

class Author
{
private:
    string name;
    string email;
    char gender;
public:
    Author(string name="Mike", string email="Mike@yahoo.com", char gender='m');
    string getName() const;
    string getEmail() const;
    char getGender() const;
    void setEmail(string email="Mike@yahoo.com");
    void print() const;
};
