// ques-replace spaces by @40 in a string
#include <iostream>
using namespace std;
#include <string>

void replaceSpaces(string str)
{

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == ' ')
        {
            str[i] = '@';
            str.insert(str.begin() + i + 1, '4');
            str.insert(str.begin() + i + 2, '0');
        }
    }

    cout << str;
}
int main()
{
    string str;
    getline(cin, str);
    replaceSpaces(str);

    return 0;
}