//Repeatedy swap two elements if they are in wrong order
//for ith iteration we will check till n-i
#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    cout << "Enter the size of array";
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++) // for fixing the ith max element at appropriate position
    {
        for (j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    return 0;
}