#include <iostream>
#include <string.h>
using namespace std;
#include "Heroine.cpp" //including an external class
// whenever an object is created a constructor is called
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
};
// note::in case of empty class that is without any properties or data members it gets a size of 1 byte
// therefore in that case if we print sizeof(h1)
// we get 1 byte
int main()
{
    Hero h1;
    h1.health = 70;
    cout << "Health is" << h1.health << endl;
    h1.setHealth(90);
    // cout << "Health is" << h1.health << endl; //or
    cout << "Health is" << h1.getHealth() << endl;
    //-------------------------------------------------------------------------
    cout << "level is" << h1.getLevel() << endl;
    h1.setLevel('V');
    cout << "level is" << h1.getLevel() << endl;
    //-------------------------------------------------------------------------
    cout << "size of object is" << sizeof(h1) << endl;
    Heroine h2;
    cout << "size of object is" << sizeof(h2);
    return 0;
}

// Access Modifiers
// public,private,protected
// by default data members are private

// public members can be accessed inside class and outside class as well
// private members can only be accessed inside class
// if we want to access private data members outside class we use getters and setters
// getters and setters can be used both for private nd public modifiers
