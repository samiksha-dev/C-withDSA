#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Selection sort-multiple rounds har rounds we get our min element placed
//  ascending order
void selection(int arr[], int n)
{
    int minIndex;
    for (int i = 0; i < n - 1; i++)
    {
        minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }

    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }
}
int main()
{
    int arr[10];
    cout << "Enter the elements of array";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    selection(arr, 5);
    return 0;
}