#include <iostream>
using namespace std;
#include <list>
// we have operations like
// push_back()
// pop_front()
// pop_back()
// pop_front()
// begin,end,rbegin,rend
// size
// clear
// is_empty
// at
// remove-time complexity is O(1)

int main()
{
    list<int> l;
    l.push_front(1);
    l.push_front(2);
    l.push_front(3);
    for (int i : l)
    {
        cout << i;
    }
    return 0;
}