// You are given an integer array 'ARR' of size 'N' and an integer 'S'. Your task is to return
// the list of all pairs of elements such that each sum of elements of each pair equals 'S'.
// Note:
// Each pair should be sorted i.e the first value should be less than or equals to the second value.

// Return the list of pairs sorted in non-decreasing order of their
//  first value. In case if two pairs have the same first value, the pair with a smaller second value should come first.

// Input
//  5 5
// 1 2 3 4 5
// output
//  1 4
// 2 3
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> vec;
    int sum;
    cout << "Enter the sum";
    cin >> sum;

    vector<int> arr(5);
    cout << "Enter the elements of array";
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                vec.push_back(temp);
            }
        }
    }
    sort(vec.begin(), vec.end());
    for (auto i : vec)
    {
        for (auto j : i)

        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}