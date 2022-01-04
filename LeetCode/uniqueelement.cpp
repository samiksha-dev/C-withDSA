// Question-find unique element
// eg.1 arr given is 1 2 3 2 1
// therefore see all nos. except 3 are present twice so answer should be 3

#include <iostream>
using namespace std;
int unique(int n, int arr[])
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int size, ele;
    cout << "Enter the size of array";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    ele = unique(size, arr);
    cout << ele;
}