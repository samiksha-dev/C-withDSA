#include <iostream>
using namespace std;

bool isSorted(int arr[], int size)
{
    if (size == 0 || size == 1) // Base case-->since if array me koi element nhi toh no need aur agar ek hi element hai toh bhi kya need
        return true;
    if (arr[0] > arr[1])
        return false;
    else
    {
        bool remainingPart = isSorted(arr + 1, size - 1); // since mtlb pehle do element sorted hai ab 2nd or 3rd ko compare karo
        return remainingPart;
    }
}
int main()
{
    int arr[10];
    bool ans;
    cout << "Enter the elements of array ";
    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }
    ans = isSorted(arr, 6);
    cout << "Is array sorted" << ans;
    return 0;
}