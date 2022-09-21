// input abcde
// outpu-edcba

#include <iostream>
using namespace std;
void reverse(int i, int j, string str) // string pass by value jaati hai ypu can do two things
// eother pass as string &str and do not print on line 11 and print in main or jaisa bana hai waisa rehne do
{
    if (i > j)
    {
        cout << str;

        return;
    }
    swap(str[i], str[j]);
    i++;
    j--;
    reverse(i, j, str);
}
int main()
{

    string str;
    cin >> str;
    int i = 0, j = str.length() - 1;
    reverse(i, j, str);
}