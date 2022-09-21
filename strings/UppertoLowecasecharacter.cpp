#include <iostream>
using namespace std;

char upper_to_lower(char arr)
{
    if (arr >= 'a' && arr <= 'z')
        return arr;
    else
    {
        char temp = arr - 'A' + 'a';
        return temp;
    }
}
int main()
{

    char arr, ans;
    cout << "Enter the character";
    cin >> arr;
    ans = upper_to_lower(arr);
    cout << ans;
    return 0;
}