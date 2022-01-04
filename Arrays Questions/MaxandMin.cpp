#include <iostream>
#include <climits>
using namespace std;
// since we know range of int is -2^31 to 2^31 therefore INT_MIN=-2^31 and INT_MAX=2^31
int main()
{
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter elements of array";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxNo = INT_MIN;
    int minNo = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxNo)
        {
            maxNo = arr[i];
        }
        if (arr[i] < minNo)
        {
            minNo = arr[i];
        }
    }
    cout << maxNo << " " << minNo;
    return 0;
}