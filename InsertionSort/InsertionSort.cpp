#include <iostream>
using namespace std;

void insertion(int arr[], int n)
{
    for (int i = 1; i < n; i++) // 1 se isliye chala rhe kyunki hum assume kr rhe pehle element sorted hai
    {                           // or i=0;i<n;i++
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
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
    for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];
    }
    insertion(arr, 7);
    return 0;
}