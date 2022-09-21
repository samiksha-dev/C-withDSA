#include <iostream>
using namespace std;
//[[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]],
// target = 20
// Output: false
// here rows are also sorted and columns are also sorted

// Time Complexity-O(logn) where n is n=row*col
void Search(int arr[][4], int r, int c, int target)
{
    // if we had vector of vector
    // int row=matrix.size();
    // int col=matrix[0].size();
    int rowIndex = 0;
    int colIndex = c - 1;
    while (rowIndex < r && colIndex >= 0)
    {
        int element = arr[rowIndex][colIndex]; // to find mid element
        if (element == target)
        {
            cout << "found";
            return; // function ke bahar
        }
        else if (element < target)
        {
            rowIndex++;
        }
        else
        {
            colIndex--;
        }
    }
    cout << "Not found";
}

int main()
{
    int target, arr[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Enter the lement to be searched";
    cin >> target;
    Search(arr, 3, 4, target);
    return 0;
}