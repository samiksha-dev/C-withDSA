#include <iostream>
using namespace std;
#include <cstring>

// shallow copy in simple terms is making accessing the same memory with different name
// default copy constructor always does shallow copy
class Identity
{
private:
    int number;

public:
    char *name;
    int age;
    Identity()
    {
        cout << "Simple constructor called";
        name = new char[100];
        // tum upar jaha initialise kia na char name waha bhi
        // char name[100]; likh sakte the but that is not a good practice
        // since we always allocate in heap like new krke
        // since waha zyada space available hota hai
    }
    void setnumber(int n)
    {
        number = n;
    }
    void setage(int a)
    {
        age = a;
    }

    void setname(char name[])
    {
        strcpy(this->name, name);
    }
    void print()
    {
        cout << this->name << " " << this->age << " " << this->number << endl;
    }
    // or
};
int main()
{
    Identity a;
    char name[9] = "Samiksha";
    a.setname(name);
    a.setage(25);
    a.setnumber(672);
    a.print();

    // default constructor
    Identity b(a); // or Identity b=a;
    b.print();
    a.name[0] = 'G';
    a.print();
    b.print(); // toh tum dekhoge tumne change kia a me but b bhi change ho gaya

    // therefore note default constructor does shallow copy

    return 0;
}