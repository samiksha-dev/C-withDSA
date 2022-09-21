#include <iostream>
using namespace std;
void revArray(int arr[], int n)
{
    if (n <= 0)
        return;
    // if (n == 1)
    //     cout << arr[0];
    cout << arr[n - 1];
    revArray(arr, n - 1);
}
int main()
{
    int arr[10];
    cout << "Enter the elements of array";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    revArray(arr, 5);
}