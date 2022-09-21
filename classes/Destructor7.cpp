// Destructor is used for memory deallocation

// whenever a class is created destructor is also created automatically
// we can also create a destructor
// destructor has  same name as class
// it has no return type
// default constructor has no parameters
// destructor is called ony once when it is time for objects destruction
#include <iostream>
using namespace std;

class Hero
{
    // propertiesor data members

private:
    char level;

public:
    int health;

    int getHealth()
    {
        return health;
    }
    char getLevel()
    {
        return level;
    }
    void setHealth(int h)
    {
        health = h;
    }
    void setLevel(char ch)
    {
        level = ch;
    }

    // destructor
    ~Hero()
    {
        cout << "Destructor ggg called" << endl;
    }
};
int main()
{
    // Static constructor
    Hero h;
    // Dynamic constructor
    Hero *b = new Hero();
    // you might think ki object toh do banae par destructor ek hi ke liye call hua woh islye
    // kyunki for static allocation default constructor call ho jaata hai
    // aur yaad rkho dynamic allocation ke liye hume dynamically constructor call karna padta hai
    return 0;
}