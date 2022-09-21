#include <iostream>
using namespace std;
bool palindrome(string &str, int i)
{
    if (i > str.length() / 2)

    {

        return true;
    }
    if (str[i] == str[str.length() - 1 - i])
    {
        i++;
        palindrome(str, i);
        return true;
    }
    else
        return false;
}
int main()
{
    string str;
    cin >> str;
    bool ans;
    int i = 0;
    ans = palindrome(str, i);
    cout << "is palindrome?" << ans;
    return 0;
}