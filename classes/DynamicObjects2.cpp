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
};

int main()
{
    Hero *b = new Hero;
    (*b).setHealth(90);
    (*b).setLevel('S');

    cout << "Level is" << (*b).getLevel() << endl;
    cout << "Health is" << (*b).health << endl; // or(*b).getHealth();
    // or
    cout << "Health is" << b->getHealth() << endl;
    cout << "Level is" << b->getLevel() << endl;

    return 0;
}