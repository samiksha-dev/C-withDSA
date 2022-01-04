// For first insertions and deletions we use list but for faster access we use array
// list is bidirectional
#include <iostream>
using namespace std;
#include <list>
int main()
{
    list<int> list1;    // List of 0 size
    list<int> list2(7); // Empty list of size 7

    cout << "Enter elements for list2";
    for (int i : list2) // isme humne list 1 ka size list 2 ke size ke barabar lia hai aur usme hu  push karate jaa rhe
    {
        int x;
        cin >> x; // if input-1 2 3 4 5 6 7
        // list1.push_back(x);o/p-1 2 3 4 5 6 7
        list1.insert(list1.begin(), x); // o/p ulta hoga 7 6v 5 4 3 2 1
    }
    cout << endl;
    for (int i : list1)
    {
        cout << i << " ";
    }

    return 0;
}