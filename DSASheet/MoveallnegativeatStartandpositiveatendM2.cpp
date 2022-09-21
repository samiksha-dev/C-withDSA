// approach-using partitioning concept of quick sort
// taking pivot element as 0 and i=-1
// and j=0
// now checking if arr[j]<pivot
// if not increment j
// if the condition satisfies
// increment i and swap i&j
#include <iostream>
using namespace std;
#include <vector>
#include <bits/stdc++.h>
vector<int> move(vector<int> &arr)
{
    int pivot = 0, i = -1, j;
    for (j = 0; j < arr.size(); j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    return arr;
}
int main()
{
    vector<int> vec;
    vector<int> ans;
    vec.push_back(3);
    vec.push_back(-2);
    vec.push_back(5);
    vec.push_back(-4);
    vec.push_back(1);
    vec.push_back(6);
    ans = move(vec);
    for (auto i : vec)
    {
        cout << i << " ";
    }
    return 0;
}