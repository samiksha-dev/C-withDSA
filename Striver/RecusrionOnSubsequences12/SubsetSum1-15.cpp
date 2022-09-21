// for
//     eg we have list of array as = {3, 1, 2} so our subsets can be {} with sum 0
// {3} with sum 3
// {1} with sum 1
// {2} with sum 2
// {3,1} with sum 4
// {1,2} with sum 3
// {3,2} with sum 5
// {3 1 2} with sum 6
// therefore we have sum as {0,1,2,3,3,4,5,6}
// therefore no. of subsets=2^n
// therefore for 3 elements we got 2^3=8 ans
// since 8 ans needs to be returned therefore space complexity cannot be o(n)
// it will be 2 ^ n

// if interviewer as to solve first tell them power set sol which is a brute force technique whose time complexity will be 2^n*n so interviewer will ask you to optimise it

// time and space complexity by this approach 2^n+2^nlog(2^n) after plus this extra part came since we have to give sum in sorted order
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
void subsetSum(int index, int arr[], vector<int> ds, int size, int sum, vector<int> &s)
{
    if (index == size)
    {
        for (auto it : ds)
        {
            cout << it << " ";
        }
        cout << endl;
        s.push_back(sum);

        return;
    }
    ds.push_back(arr[index]);
    sum = sum + arr[index];
    subsetSum(index + 1, arr, ds, size, sum, s);
    sum = sum - arr[index];
    ds.pop_back();
    subsetSum(index + 1, arr, ds, size, sum, s);
}
int main()
{
    int arr[] = {3, 1, 2};
    vector<int> ds;
    vector<int> s;

    subsetSum(0, arr, ds, 3, 0, s);
    sort(s.begin(), s.end());
    for (auto it : s)
    {
        cout << it;
    }
    return 0;
}