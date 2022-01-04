#include <bits/stdc++.h>
using namespace std;
// find that no. which is present twice note every no is present once or twice
int main()
{
    vector<int> vec(7);
    vector<int> vec2;
    for (int i = 0; i < vec.size(); i++)
    {
        cin >> vec[i];
    }
    int ans = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        ans = ans ^ vec[i];
        if (ans == 0)
        {
            vec2.push_back(vec[i]);
            ans = 0;
        }
    }
    for (int i : vec2)
    {
        cout << i;
    }
    return 0;
}