#include <iostream>
using namespace std;
bool checkpalindrome(char arr[], int n)
{
    int s = 0, e = n - 1;
    while (s <= e)
    {
        if (arr[s] == arr[e])
        {
            s++;
            e--;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char arr[10];
    cout << "Enter the name";
    cin >> arr;
    int ans;
    ans = checkpalindrome(arr, 5);
    cout << ans;
    return 0;
}