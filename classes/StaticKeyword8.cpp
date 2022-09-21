// the data members with which we use static does not need any object to access it
// format
// we write static in front of the data member
/// we initialise it outside class-syntax:datatype classname ::variablename=value
// tum static member ko object bana ke bhi access kar sakte ho but jaise upar banaya usse karo
// toh better rahega
// static members,functions do not have this keyword
// static functions can only access static members
#include <iostream>
using namespace std;

class Hero
{
    // propertiesor data members

private:
    char level;

public:
    int health;
    // static data member
    static int timeToComplete;

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
    static int random()
    {
        return timeToComplete;
    }

    // destructor
    ~Hero()
    {
        cout << "Destructor ggg called" << endl;
    }
};
int Hero::timeToComplete = 10;
int main()
{
    // statuc data member
    cout << Hero::timeToComplete << endl;
    // ststuc functions
    cout << Hero::random();
    return 0;
}