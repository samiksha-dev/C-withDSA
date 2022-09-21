#include <iostream>
#include <vector>
using namespace std;
int countSubsequence(int index, int arr[], int sum, int size, int s)
{
    if (index >= size)
    {
        if (s == sum)
            return 1;
        else
            return 0;
    }
    s = s + arr[index];
    int l = countSubsequence(index + 1, arr, sum, size, s);
    s = s - arr[index];
    int r = countSubsequence(index + 1, arr, sum, size, s);
    return l + r;
}
int main()
{
    int sum;
    int arr[] = {1, 1, 2};
    cout << "Enter the sum";
    cin >> sum;
    cout << "No. of subsequence with sum k is"
         << countSubsequence(0, arr, sum, 3, 0);
    return 0;
}