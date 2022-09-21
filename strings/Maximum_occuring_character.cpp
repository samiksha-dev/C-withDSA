#include <iostream>
using namespace std;
#include <map>
#include <climits>

int main()
{
    string s;
    getline(cin, s); // or cin.getline(s)
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] - 'A' + 'a';
    }
    map<char, int> m;

    for (int i = 0; i < s.length(); i++) // if you dont want to enter space in map
    {
        // if(s[i]!=' ') toh neeche tumko baar baar space ke liye nhi check krna padega
        m[s[i]]++;
    }

    map<char, int>::iterator iter;
    // for (it = m.begin(); it != m.end(); it++)
    // {
    //     vec.push_back((*it).second);
    // }

    for (iter = m.begin(); iter != m.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << "\n";
    }
    int maxNo = INT_MIN;
    for (iter = m.begin(); iter != m.end(); iter++)
    {
        if ((*iter).first != ' ')
        {
            maxNo = max(maxNo, (*iter).second);
        }
    }

    for (iter = m.begin(); iter != m.end(); iter++)
    {
        if ((*iter).first != ' ' && (*iter).second == maxNo)
        {
            cout << (*(m.begin())).first;
            if ((*(m.begin())).first == (*iter).first) // if there is no space and if asked that if there are multiple characters with same occurence
                                                       //  then give smallest among them

                break;
        }
    }

    //  cout << (*(m.begin())).first;

    return 0;
}