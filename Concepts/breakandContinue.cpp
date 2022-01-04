#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 40; i++)
    {
        if (i == 2)
        {
            break;
        }
        cout << "Output of break" << i << endl;
    }

    for (int i = 0; i < 40; i++)
    {
        if (i == 2)
        {
            continue; //iska matlab ki i==2 ko choro iske baad continue kro
        }
        cout << "Output for continue" << i << endl;
    }

    return 0;
}