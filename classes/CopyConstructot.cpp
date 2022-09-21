#include <iostream>
using namespace std;

class Biodata
{
private:
    char initial;

public:
    int age;
    Biodata(char initial, int age)
    {
        this->initial = initial;
        this->age = age;
    }
    // Method-2 Copy Constructor
    Biodata(Biodata &b3) // pass by reference ki tarah islye pass kia kyunki see
    // love babbar code help-lec46 57min
    {
        cout << "Copy constructor called" << endl;
        this->initial = b3.initial;
        this->age = b3.age;
    }

    void print()
    {
        cout << this->initial << " " << this->age << endl;
    }
};
int main()
{
    Biodata b1('d', 25);
    b1.print();
    // default copy constructor-Method-1
    Biodata b2(b1); // or Biodata b2=b1
    // this means b1->initial=b2->initial
    //  and b1->age=b2->age
    b2.print();
    // copy constructor-Method-2
    Biodata b4(b1); // but note jo humne M-1 me default constructor dikhaya hai phir wph nhi chalega
    // woh bhi upar waale M-2 ko lene lagega
    return 0;
}