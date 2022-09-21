// Queues is a data structure which follows FIFO
// push or enqueue always done from rear side
// pop or dequeue always done from front

// IMPLEMENTATION BY STL
#include <queue>
#include <iostream>
using namespace std;
int main()
{
    queue<int> q;
    q.push(10);
    q.push(11);
    q.push(12);
    cout << "front of queue is" << q.front();
    cout << "size" << q.size() << endl;
    q.pop();
    cout << "size" << q.size() << endl;
    if (q.empty())
    {
        cout << "queue is empty";
    }
    else
    {
        cout << "queue is not empty";
    }

    return 0;
}