#include <iostream>
using namespace std;
int sumArray(int arr[], int size, int i)
{
    int sum = 0;
    if (size == 0)
        return 0;
    if (i == (size - 1))
        return arr[i];

    sum = arr[i] + sumArray(arr, size, i + 1);
    return sum;
}
int main()
{
    int arr[10], ans = 0, i = 0;
    cout << "Enter the elements of array ";
    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }
    ans = sumArray(arr, 6, i);
    cout << "Sum of array is"
         << " " << ans;

    return 0;
}