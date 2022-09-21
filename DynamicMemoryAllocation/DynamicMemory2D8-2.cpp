#include <iostream>
using namespace std;

int main()
{
    // for different row and col
    int row, col;
    cout << "Enter";
    cin >> row >> col;
    // creation done

    int **arr = new int *[row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }

    // taking input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    // output
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j];
        }
    }
    // visualising
    //  _________
    //  |int*  |-->corresponds to 1st row(array)
    //  |int*  |-->corresponds to 2nd row
    //  |int*  |--> and so on
    //  |.     |
    //  |.     |
    //  |.     |
    //  _________

    // releaing memory
    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}