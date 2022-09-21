#include <iostream>
using namespace std;
#include <bits/stdc++.h>

void rowsum(int arr[][4], int row, int col)
{
    vector<int> vec;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum = sum + arr[i][j];
        }
        vec.push_back(sum);
        cout << sum << endl;
    }
    for (int i : vec)
    {
        cout << i;
    }
    cout << "Max sum is" << *max_element(vec.begin(), vec.end());
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
    rowsum(arr, 3, 4);
    return 0;
}