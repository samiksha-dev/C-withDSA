#include <iostream>
using namespace std;
// for odd we can also check if(col&1)

void printWave(int arr[][4], int row, int col)
{ // Time Complexity-O(row*column)
    for (int column = 0; column < col; column++)
    {
        if (column % 2 == 0)
        {
            // top to bottom-printing
            for (int r = 0; r < row; r++)
            {
                cout << arr[r][column] << " ";
            }
            cout << endl;
        }
        else
        {
            // bottom to top printing
            for (int r = row - 1; r >= 0; r--)
            {
                cout << arr[r][column] << " ";
            }
            cout << endl;
        }
    }
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
    printWave(arr, 3, 4);

    return 0;
}