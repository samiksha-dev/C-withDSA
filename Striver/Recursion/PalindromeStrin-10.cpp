#include <iostream>
using namespace std;
// Time Complexity-O(n/2)
// Space Complexity-O(n/2)
bool checkPalindrome(char arr[], int n, int i)
{
    if (i >= n / 2)
        return true;
    if (arr[i] != arr[n - i - 1])
        return false;
    return checkPalindrome(arr, n, i + 1);
}
int main()
{
    char str[10];
    bool ans;
    cout << "Enter the character";
    cin >> str;
    ans = checkPalindrome(str, 5, 0);
    cout << ans;
    return 0;
}