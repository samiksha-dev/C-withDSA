#include <iostream>
using namespace std;
#include <map>
#include <vector>
int main()
{
    vector<char> ch;
    int size;
    int element;
    cout << "Enter the size";
    cin >> size;
    cout << "Enter the elements of vector";
    for (int i = 0; i < size; i++)
    {
        cin >> element;
        ch.push_back(element);
    }
    map<char, int> m;
    for (int i = 0; i < ch.size(); i++)
    {
        m[ch[i]]++;
    }

    map<char, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        if ((*it).second == 1)
        {
            cout << (*it).first;
        }
        else
        {
            cout << (*it).first << (*it).second;
        }
    }
    return 0;
}