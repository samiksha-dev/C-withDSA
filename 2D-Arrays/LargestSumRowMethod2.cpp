#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int rowsum(int arr[][4], int row, int col)
{
    int maxi = INT_MIN;
    int rowIndex; // or you can write int rowIndex=-1;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum = sum + arr[i][j];
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = row;
        }
    }
    cout << "Maximum sum is" << maxi;

    return rowIndex;
}
int main()
{
    int arr[3][4];
    cout << "Enter the elements of array";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    int maxrow = rowsum(arr, 3, 4);
    cout << "Largest row with sum is " << maxrow;
    return 0;
}