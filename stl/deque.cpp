// deque(doubly ended queue)(it doesnot have continous memory locations like array and vector,it has multiple static arrays)-we can do insertion and deletions from both end
#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d1;
    d1.push_back(1);
    d1.push_front(2);
    for (int i : d1)
    {
        cout << i << " ";
    }
    cout << endl;
    d1.pop_back();
    cout << "After pop"
         << " ";
    for (int i : d1)
    {
        cout << i << " ";
    }
    cout << endl;
    // d1.pop_front();
    // cout << "After pop front"
    //      << " ";
    // for (int i : d1)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;
    cout << "Print first index-->" << d1.at(0) << endl;
    cout << d1.back() << endl;
    cout << d1.front() << endl;
    cout << "Empty or not" << d1.empty() << endl;
    ;
    cout << "Before erase" << d1.size() << endl;
    d1.erase(d1.begin(), d1.begin() + 1); // isme batana padta hai kaha se kaha delete karna hai
    cout << "After erase" << d1.size() << endl;
    // Note:after erase size becomes 0 but max size remains same as it was in starting
    return 0;
}