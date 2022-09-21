#include <iostream>
using namespace std;
#include <stack>
// stacks is a LIFO Data structures
// some methods-push,top,pop,empty,size
// All methods have O(1) time complexity
// there is no iterator in stacks and queue
int main()
{
    stack<int> s;
    s.push(2);
    s.push(4);
    s.push(6);
    s.push(8);
    // or

    // for (int i = 0; i < 5; i++)
    // {
    //     s.push(i);
    // }
    cout << s.top(); // the last entered element
    s.pop();         // deletes the last entered element
    cout << s.top();
    cout << s.empty();

    //----------------------------------------------
    // deletes the entire stack since we dont have clear func for stack
    while (!s.empty()) // time complexity for this is O(n) since we are deleting one by one

    {
        s.pop();
    }
    cout << s.size();
    //------------if nothing is there in the stack
    stack<int> s2;
    cout << s2.top(); // no output since kuchh hai hii(error aa sakta hai) nahi therefore always have a check before
    // implementing s.top()
    // while(!s2.empty()){
    //      cout<<s2.top()
    //  }
    return 0;
}