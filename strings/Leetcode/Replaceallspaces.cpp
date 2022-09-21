// ques-replace spaces by @40 in a string
#include <iostream>
using namespace std;
// space complexity-O(n)
// time complexity-o(n)
void replaceString(string st)
{
    string temp = "";
    for (int i = 0; i < st.length(); i++)
    {
        if (st[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            temp.push_back(st[i]);
        }
    }
    cout << temp;
}

int main()
{
    string str, final;
    getline(cin, str);
    replaceString(str);

    return 0;
}