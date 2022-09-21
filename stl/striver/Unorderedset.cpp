#include <iostream>
#include <unordered_set>
using namespace std;
// average time complexity of unordered set is O(1) better than log n of set
// worst case time complexity of unorderd_set is O(n)
int main()
{
    unordered_set<int> st;
    int n;
    cout << "Enter the size";
    cin >> n;
    int x;
    cout << "Enter the elements";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        st.insert(x);
    }
    for (int i : st)
    {
        cout << i;
    }
    return 0;
}