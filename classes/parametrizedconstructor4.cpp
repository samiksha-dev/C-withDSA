// apna khud ka constructor bana dia toh default waala mar gaya
#include <iostream>
#include <string.h>
using namespace std;
class Insights
{
    // this is a pointer which stores address of current object
private:
    char level;

public:
    int health;
    // Insights()
    // {
    //     cout << "Constructor called";
    // }
    Insights(int health)
    {
        cout << "this ->" << this << endl;
        this->health = health; // mtlb class ki health me health ki jo value aa rahi woh daal do
    }
    Insights(int health, char level)
    {
        this->health = health;
        this->level = level;
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
    void print()
    {

        cout << this->level << " " << this->health;
    }
    void setLevel(char ch)
    {
        level = ch;
    }
};
int main()
{
    Insights h;
    cout << "Hi" << endl;
    // static object
    Insights h1(90);
    cout << "Address of h1" << &h1 << endl; // iss h1 ki address aur this ka address jo upar hai
    // woh same hoga
    cout << h1.print();
    cout << "Hello" << endl;
    // dynamic constructor
    Insights *h2 = new Insights(30);
    cout << "Address of h2" << h2 << endl; // toh ab h2 aur jo upar this hai uske address same hoga
    h2->print();                           // see dynamic ke case me arrpe
    Insights h3(20, 'G');
    h3.print();
    cout << "Address of h3" << &h3 << endl;
    return 0;
}