#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> vec(7);
    for (int i = 0; i < vec.size(); i++)
    {
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());
    for (auto it = 0; it < vec.size(); it++)
    {
        if (vec[it] == vec[it + 1])
        {
            cout << vec[it];
        }
    }
    return 0;
}