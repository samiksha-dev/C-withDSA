#include <iostream>
#include <set>
using namespace std;

// Multisets are containers that store elements following a specific
// order, and where multiple elements can have equivalent values.--i.e
// duplicate elements can be there but will be sorted
// Time complexity is log(N)
int main()
{
    multiset<int> mt;
    mt.insert(9);
    mt.insert(2);
    mt.insert(2);
    mt.insert(1);
    mt.insert(10);
    mt.insert(1);
    for (int i : mt)
    {
        cout << " " << i;
    }
    cout << endl;
    mt.erase(2); // all instances of 2 will be erased
    for (int i : mt)
    {
        cout << " " << i;
    }
    multiset<int>::it;
    auto it = mt.find(9); // first position of that no. bataega agar duplicate present honge
    cout << it;
    return 0;
}