// stack foolows LIFO
// operations-push
// pop
// top-to find sbse upr kaunsa element hai
// empty

// creation by stl
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    // creation of stack
    stack<int> s;
    s.push(2);
    s.push(3);
    cout << "Top element"
         << " " << s.top() << endl;
    // for (int i : s)
    // {
    //     cout << i << "  "; // or cout<<vec4[i]<<" "
    // }
    if (s.empty())
    {
        cout << "stack is empty" << endl;
    }
    else
    {
        cout << "stack is not empty" << endl;
    }
    cout << "size of stack" << s.size();
    s.pop();
    cout << "Top element"
         << " " << s.top() << endl;
    cout << "size of stack" << s.size() << endl;
    return 0;
}
