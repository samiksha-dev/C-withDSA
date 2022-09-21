#include <iostream>
using namespace std;
bool palindrome(string &str, int i, int j)
{
    if (i > j)
    {

        return true;
    }
    if (str[i] == str[j])
    {
        i++;
        j--;
        palindrome(str, i, j);
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
    int i = 0, j = str.length() - 1;
    ans = palindrome(str, i, j);
    cout << "is palindrome?" << ans;
    return 0;
}