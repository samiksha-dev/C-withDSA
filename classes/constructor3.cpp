// whenever an object is created a constructor is called
// constructor has no return type-property of default constructor
// constructor has no input parameter-property of default constructor
// if we have not made any constructor a default constructor is called

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
    Hero() // constructor//note jaise hi humne khud ka constructor bana lia toh jo default constructor hai woh khud hatt
    // jaega
    {
        cout << "Constructor called" << endl;
    }

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
int main()
{
    cout << "Hi" << endl;
    // static object
    Hero h1;
    // dynamic object
    Hero *h2 = new Hero; // or Hero *h2=new Hero();
    cout << "Hello" << endl;
    return 0;
}