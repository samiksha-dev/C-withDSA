// #include <iostream>
#include <bits/stdc++.h>
// #include <map>
// #include <vector>
using namespace std;

// ques- if we have array 1 2 3 2 3 3
// that means 1 occur=1
// 2=2
// 3 occur thrice therefore all three occurences are different
// therefore it should return true since we have unique occurence
int main()
{
    // code
    string s;
    cin >> s;
    vector<int> vec;
    map<char, int> m;
    for (int i = 0; i < s.size(); i++)
    {
        m[s[i]]++;
    }
    // for (auto x : m)
    // {
    //     cout << x.first << " " << x.second << "\n";
    // }
    map<char, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        vec.push_back((*it).second);
    }
    sort(vec.begin(), vec.end());
    // for (int i : vec)
    // {
    //     cout << i;
    // }
    bool check = true;
    for (auto it1 = 0; it1 < vec.size() - 1; it1++)
    {
        if (vec[it1] == vec[it1 + 1])
        {
            check = false;
            break;
        }
    }
    cout << check;
    return 0;
}
