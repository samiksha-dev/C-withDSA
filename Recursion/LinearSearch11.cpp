#include <iostream>
using namespace std;
bool FindInArray(int arr[], int size, int el)
{

    if (size == 0)
        return false;
    if (arr[0] == el)
    {
        return true;
    }
    else
    {
        bool remainingPart = FindInArray(arr + 1, size - 1, el);
        return remainingPart;
    }
}
int main()
{
    int arr[10], elem;
    bool ans;
    cout << "Enter the elements of array ";
    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element to be searched";
    cin >> elem;
    ans = FindInArray(arr, 6, elem);
    cout << "Is present?" << ans;

    return 0;
}