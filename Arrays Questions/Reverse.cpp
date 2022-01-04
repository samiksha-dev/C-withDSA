#include <iostream>
using namespace std;
void reverse(int arr[], int size)
{
    int start = 0, end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main()
{

    int arr[100];

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    reverse(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i];
    }
}