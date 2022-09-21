#include <iostream>
using namespace std;
#include <queue>
// queue is a FIFO Data structure
// some methods-push,front,pop,empty,size
// All methods have O(1) time complexity
// there is no iterator in stacks and queue
int main()
{
    queue<int> q;
    q.push(3);
    q.push(6);
    q.push(9);
    q.push(12);
    // or
    //  for (int i = 0; i < 5; i++)
    //  {
    //      s.push(i);
    //  }

    cout << q.front();
    q.pop();
    cout << q.front();
    //-------------------------------------------------------------------------------------
    // deletes the entire stack since we dont have clear func for queue
    while (!q.empty()) // time complexity for this is O(n) since we are deleting one by one
    {
        q.pop();
    }
    cout << q.size();
    return 0;
}