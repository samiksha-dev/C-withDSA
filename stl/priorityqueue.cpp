#include <iostream>
using namespace std;
#include <utility>
#include <queue>
#include <vector>
// since set can store only unique elements and its Time Compl-O(logN)
// we have unordered set which has O(1) but in worst case it is O(N)
// therefore we have priority queue which does all operations in sorted order with O(LogN)
// prority queue stores data in descending order
int main()
{
    priority_queue<int> pq;
    pq.push(4);
    pq.push(9);
    pq.push(1);
    pq.push(4);
    cout << pq.top();
    priority_queue<pair<int, int>> p;
    p.push({1, 5});
    p.push({1, 6}); // so if first element is same it will see descending order on the basis of second element
    p.push({1, 7});
    cout << p.top().first << " " << p.top().second << endl;

    //------------------------------------------------------------------------
    // trick to get min element at top
    // M-1
    priority_queue<int> minpq;
    minpq.push(-4);
    minpq.push(-9);
    minpq.push(-1);
    minpq.push(-4);
    cout << -1 * minpq.top() << endl;
    // M-2
    priority_queue<int, vector<int>, greater<int>> minp;
    // if you want a pair minimum priority queue
    priority_queue < pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> minp;
    minp.push(4);
    minp.push(9);
    minp.push(1);
    minp.push(4);
    cout << minp.top();

    return 0;
}