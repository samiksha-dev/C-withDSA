#include <iostream>
using namespace std;
void bubble(int arr[], int n)
{
    for (int i = 1; i < n; i++) //-->since hum pehle waale element ko sorted maan lete hai islye i=1
                                // or i=0;i<n-1;i++  //or i=0;i<n;i++
    {
        for (int j = 0; j < n - i; j++) // or j=0;j<n-i-1;j++//or j=0;j<n-1;j++
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
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