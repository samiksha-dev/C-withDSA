#include <iostream>
using namespace std;
// by swapping
// Time complexity-n!*n
// space complexity-O(n)[for auxilarry space or depth]//no extra space used
void permutations(int index, int arr[], int size)
{
    if (index == size)
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        return;
    }
    for (int i = index; i < size; i++)
    {
        swap(arr[index], arr[i]);
        permutations(index + 1, arr, size);
        swap(arr[index], arr[i]);
    }
}
int main()
{
    int arr[] = {1, 2, 3};
    permutations(0, arr, 3);
    return 0;
}