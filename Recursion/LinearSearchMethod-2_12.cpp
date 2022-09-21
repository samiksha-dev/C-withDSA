#include <iostream>
using namespace std;
int FindInArray(int arr[], int size, int i, int key)
{
    if (size == 0 || (i == size))
        return -1;
    if (arr[i] == key)
    {
        cout << "Present";
        return i;
    }

    return FindInArray(arr, size, i + 1, key);
}
int main()
{
    int arr[10], index, i = 0, element;
    cout << "Enter the elements of array ";
    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element to be searched";
    cin >> element;

    index = FindInArray(arr, 6, i, element);
    cout << index;
    return 0;
}