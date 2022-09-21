#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
void subsetSum(int index, int arr[], int size, int sum, vector<int> &s)
{
    if (index == size)
    {
        s.push_back(sum);

        return;
    }
    subsetSum(index + 1, arr, size, sum + arr[index], s);
    subsetSum(index + 1, arr, size, sum, s);
}
int main()
{
    int arr[] = {3, 1, 2};
    vector<int> s;

    subsetSum(0, arr, 3, 0, s);
    sort(s.begin(), s.end());
    for (auto it : s)
    {
        cout << it << " ";
    }
    return 0;
}