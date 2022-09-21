#include <iostream>
using namespace std;
#include <unordered_map>
// toh ab sorted nhi rahega
// key ke basis pe no sorting

// The time complexity of map operations is O(log n) while for unordered_map, it is O(1) on average
// in worst case O(n)

//  map:  sorted, unique key
//  unordered map: not sorted, unique key
//  multimap: sorted, multiple key

int main()
{
    unordered_map<string, int> marksMap;
    marksMap.insert({{"Apurva", 89}, {"Shashwat", 91}});
    marksMap["Harry"] = 89;
    marksMap["Samiksha"] = 100;
    marksMap["Jack"] = 78;
    unordered_map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << "\n";
    }
    return 0;
}