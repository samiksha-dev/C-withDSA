#include <iostream>
using namespace std;
int sumArray(int arr[], int size)
{
    int sum = 0;
    if (size == 0)
        return 0;
    if (size == 1)
    {

        return arr[0];
    }

    sum = arr[0] + sumArray(arr + 1, size - 1);
    return sum;
}
int main()
{
    int arr[10], ans = 0;
    cout << "Enter the elements of array ";
    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }
    ans = sumArray(arr, 6);
    cout << "Sum of array is"
         << " " << ans;

    return 0;
}