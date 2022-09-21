#include <iostream>
#include <stack>
// space complexity=O(n)
// time complexity=O(n)

using namespace std;
int main()
{
    string str = "Samiksha";
    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        s.push(ch);
    }
    string ans = "";
    while (!s.empty())
    {
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    }
    cout << "answer is:" << ans << endl;
    return 0;
}