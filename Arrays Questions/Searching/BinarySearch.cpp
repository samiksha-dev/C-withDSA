#include <iostream>
using namespace std;
//array should be sorted
int BinarySearch(int n, int arr[], int key)
{
    int start = 0;
    int end = n;

    // for (i = 0; i < n; i++)
    // {
    //     if (arr[mid] == key)
    //     {
    //         return mid;
    //     }
    //     else if (arr[mid] > key)
    //     {
    //         end = mid - 1;
    //     }
    //     else
    //     {
    //         start = mid + 1;
    //     }
    // }
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}
int main()
{
    int i, n;
    cout << "Enter side of array";
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;
    cout << BinarySearch(n, arr, key);
    return 0;
}