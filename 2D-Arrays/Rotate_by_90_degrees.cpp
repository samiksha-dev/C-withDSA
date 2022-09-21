#include <iostream>
using namespace std;
#include <bits/stdc++.h>
void rotateby(int arr[][3], int r, int c)
{
    int temp[3][3];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j];
        }
    }
}
int main()
{
    int arr[3][3];
    cout << "Enter the elements of array";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    rotateby(arr, 3, 3);

    return 0;
}