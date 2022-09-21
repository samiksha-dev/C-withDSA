#include <iostream>
using namespace std;
#include <set>
// set is used in red black tree
//  set stores unique elements for eg. if input is 1 2 3 1 2 3
//  it will store 1 2 3

// st.erase(st.begin(),st,begin()+2) is not valid for set.you can not use + or - operator
//  with iterator for erase in set..you can use it in vector..

// set always stores elements in ascending fashion
// you cant access st[0] or st[1]
int main()
{

    set<int> st;
    // or set<int> st={1,2,3,5,1,2}
    cout << "Enter the size";
    int n;
    cin >> n;
    cout << "Enter the elements";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.insert(x); // time complexity for insert func is log(N)
    }
    for (int i : st)
    {
        cout << i;
    }
    cout << endl;
    // cout << *st.begin();
    // cout << *st.begin() + 1;

    //----------------------------------------------------------------------------------------//

    // Erasing elements using set
    // time complexity of erase is log(N)
    //----->st.erase(st.begin()); //deletes first element

    // for deleting a range
    // set<int>::iterator it1, it2;
    // it1 = st.begin();
    // it2 = st.end(); // end points to element after last element
    // it2--;
    // it2--;
    // st.erase(it1, it2);

    // will delete entire set
    // st.erase(st.begin(), st.end());

    // deleting a single element
    // st.erase(5);
    //----------------------------------------------------------------------------------

    // Finding iterator of a particular value or finding index-time complexity of find is log(N)
    set<int>::iterator it1;
    it1 = st.find(5); // if present it ki value dega bt agar element nahi present toh st.end ka index de dega
    cout << *it1;

    //-------------------------------------------------------------------------------------
    st.emplace(6); // it will insert 6 in set-complexity of emplace is log(N)
    cout << st.size();
    for (int i : st)
    {
        cout << i;
    }

    // or
    for (it1 = st.begin(); it1 != st.end(); it1++)
    {
        cout << *it1;
    }

    return 0;
}