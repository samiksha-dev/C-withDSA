#include <iostream>
using namespace std;
void swapelements(int arr[], int size)
{
    int temp;
    for (int i = 0; i + 1 < size; i += 2)
    {
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}
int main()
{
    int n, temp;
    cout << "Enter the size of array";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // M-1
    //  if (n % 2 == 0)
    //  {
    //      for (int i = 0; i < n; i = i + 2)
    //      {
    //          temp = arr[i];
    //          arr[i] = arr[i + 1];
    //          arr[i + 1] = temp;
    //      }
    //  }

    // else
    // {
    //     for (int i = 0; i < n; i = i + 2)
    //     {
    //         if (i == n - 1)
    //             break;
    //         temp = arr[i];
    //         arr[i] = arr[i + 1];
    //         arr[i + 1] = temp;
    //     }
    // }

    // M-2

    // for (int i = 0; i + 1 < n; i += 2)
    // {
    //     temp = arr[i];
    //     arr[i] = arr[i + 1];
    //     arr[i + 1] = temp;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // M-3

    swapelements(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}
