#include <iostream>
using namespace std;
void bubble(int arr[], int n)
{
    for (int i = 1; i < n; i++) // or i=0;i<n-1;i++  //or i=0;i<n;i++
    {
        bool swapped = false;
        for (int j = 0; j < n - i; j++) // or j=0;j<n-i-1;j++//or j=0;j<n-1;j++
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false) // that means it was already sorted
            break;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
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
    bubble(arr, 5);
    return 0;
}