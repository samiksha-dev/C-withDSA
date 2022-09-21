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
bool checkpalindrome(char arr[], int n)
{
    int s = 0, e = n - 1;
    while (s <= e)
    {
        if (upper_to_lower(arr[s]) == upper_to_lower(arr[e]))
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
    cout << "Enter the character";
    cin >> arr;
    cout << checkpalindrome(arr, 4);

    return 0;
}