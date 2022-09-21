#include <iostream>
using namespace std;
#include <string>
int main()
{
    string str;
    cout << "enter the character array";
    getline(cin, str);
    int n = str.size();
    for (int i = 0; i < n; i++)
    {
        if (str[i] == str[i + 1])
        {
            str.erase(str.begin() + i, str.begin() + i + 2);
            n = n - 2;
            i = -1;
        }
    }
    cout << str;
    return 0;
}