#include <iostream>
using namespace std;

int main()
{
    char arr[10];
    cout << "Enter the name";
    cin >> arr;
    int i = 0, count = 0;
    while (arr[i] != '\0')
    {
        count++;
        i++;
    }
    int s = 0, e = count - 1;
    while (s < e)
    {
        // cout << arr[s] << " " << arr[e] << "\n";
        swap(arr[s], arr[e]);
        // cout << arr[s] << " " << arr[e] << "\n";
        s++;
        e--;
    }
    cout << arr;

    // M2
    //   for (i = count - 1; i >= 0; i--)
    //      cout << arr[i];

    return 0;
}