#include <iostream>
using namespace std;
void revArray(int arr[], int j, int n)
{
    if (j >= n / 2)
        return;
    swap(arr[j], arr[n - j - 1]);
    revArray(arr, j + 1, n);
}
int main()
{
    int arr[10];
    cout << "Enter the elements of array";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    revArray(arr, 0, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i];
    }

    return 0;
}
