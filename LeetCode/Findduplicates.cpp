#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int size;
    cout << "Enter the size";
    cin >> size;
    cout << "Enter the elements";
    for (int i = 0; i < size; i++)
    {
        int elements;
        cin >> elements;
        v.push_back(elements);
    }
    map<int, int> m;
    for (int i = 0; i < v.size(); i++)
    {
        m[v[i]]++;
    }
    for (auto i = m.begin(); i != m.end(); i++)
    {
        // cout << (*i).first << " " << (*i).second << endl;
        if ((*i).second == 2)
            cout << (*i).first << " ";
    }
    return 0;
}
