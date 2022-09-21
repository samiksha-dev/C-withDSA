#include <iostream>
using namespace std;
void revArray(int arr[], int first, int last, int size)
{
    if (first > last || first == last)
        return;
    swap(arr[first], arr[last]);
    revArray(arr, first + 1, last - 1, size);
}
int main()
{
    int arr[10], l = 0, r, i;
    cout << "Enter the elements of array";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    r = 4;
    revArray(arr, l, r, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i];
    }

    return 0;
}