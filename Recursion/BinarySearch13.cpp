#include <iostream>
using namespace std;
void print(int arr[], int s, int e)
{
    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
bool binarySearch(int arr[], int st, int en, int k)
{
    // to see how it is actually workingf behind-->print function lagaya hai
    cout << endl;
    print(arr, st, en);
    if (st > en)
        return false;
    int mid = st + (en - st) / 2;

    if (arr[mid] == k)
        return true;

    if (arr[mid] < k)
    {
        return binarySearch(arr, mid + 1, en, k);
    }
    if (arr[mid] > k)
    {
        return binarySearch(arr, st, mid - 1, k);
    }
}

int main()
{
    int arr[10] = {1, 2, 5, 6, 8};
    int s = 0, e = 5, element;
    bool ans;
    cout << "Enter the element to be found";
    cin >> element;
    ans = binarySearch(arr, s, e, element);
    cout << "Is Present?"
         << " " << ans;
    return 0;
}