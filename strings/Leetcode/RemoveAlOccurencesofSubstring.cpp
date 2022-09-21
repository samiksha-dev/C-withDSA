#include <iostream>
#include <string>
using namespace std;
string replaceall(string str, string part)
{
    while (str.size() != 0 && str.find(part) < str.size())
    {
        str.erase(str.find(part), part.size());
    }
    return str;
}
int main()
{
    string str, part;
    cout << "Enter the string";
    cin >> str;
    cout << "Enter the part to be removed";
    cin >> part;
    cout << replaceall(str, part);
    return 0;
}