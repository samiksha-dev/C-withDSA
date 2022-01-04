#include <iostream>
using namespace std;

//complexity-o(n)
int LinearSearch(int n, int arr[], int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            // cout << "No found";
            return i;
        }
    }
    return -1;
}
int main()
{
    int n, i;
    cout << "Enter the size of array";
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int notobefound;
    cin >> notobefound;
    cout << LinearSearch(n, arr, notobefound);
    return 0;
}