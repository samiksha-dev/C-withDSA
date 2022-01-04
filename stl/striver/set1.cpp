#include <iostream>
using namespace std;
#include <set>

// set stores unique elements for eg. if input is 1 2 3 1 2 3
// it will store 1 2 3

// st.erase(st.begin(),st,begin()+2) is not valid for set.you can not use + or - operator
//  with iterator for erase in set..you can use it in vector..
int main()
{

    set<int> st;
    cout << "Enter the size";
    int n;
    cin >> n;
    cout << "Enter the elements";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.insert(x);
    }
    for (int i : st)
    {
        cout << i;
    }
    cout << endl;
    // Erasing elements using set

    set<int>::iterator it1, it2;
    it1 = st.begin();
    it2 = st.end(); // end points to element after last element
    it2--;
    it2--;
    st.erase(it1, it2);
    for (int i : st)
    {
        cout << i;
    }

    return 0;
}