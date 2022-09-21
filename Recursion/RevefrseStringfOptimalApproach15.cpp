// input abcde
// outpu-edcba

#include <iostream>
using namespace std;
void reverse(int i, string &s) // string pass by value jaati hai ypu can do two things
// eother pass as string &str and do not print on line 11 and print in main or jaisa bana hai waisa rehne do
{
    if (i > s.length() / 2)
        return;

    swap(s[i], s[s.length() - i - 1]);
    i++;

    reverse(i, s);
}
int main()
{

    string str;
    cin >> str;
    int i = 0;
    reverse(i, str);
    cout << str;
}