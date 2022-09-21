#include <iostream>
using namespace std;

void upper_to_lower(char arr[], int n)
{
    char temp[n];
    for (int i = 0; i < n - 1; i++)
        if (arr[i] >= 'a' && arr[i] <= 'z')

            arr[i] = arr[i] - 'a' + 'A';
}
int main()
{

    char arr[5], ans[5];
    cout << "Enter the character";
    cin >> arr;
    upper_to_lower(arr, 5);
    cout << arr;
    return 0;
}