#include <iostream>
using namespace std;
#include <vector>
#include <bits/stdc++.h>
vector<int> move(vector<int> &vec)
{

    sort(vec.begin(), vec.end());
    return vec;
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