#include <iostream>
using namespace std;

// note-very imp Whenever you pass a 2D array as a parameter you need to pass col in arr
// Time complexity is O(row*column)
bool isPresent(int arr[][4], int element, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == element)
            {
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    int target;
    int arr[3][4];
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arr[row][col];
        }
    }
    cout << "Enter the element to be searched";
    cin >> target;
    if (isPresent(arr, target, 3, 4))
    {
        cout << "Present ";
    }
    else
    {
        cout << "Not found";
    }

    return 0;
}