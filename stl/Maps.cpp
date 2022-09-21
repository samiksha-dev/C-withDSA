#include <iostream>
#include <map>
using namespace std;

// Time complexity of map is --O(logN)

// note map stores as sorted ascending order
// for the eg. below Apurva then harry then jack
//  map:  sorted, unique key
//  unordered map: not sorted, unique key
//  multimap: sorted, multiple key
int main()
{
    map<string, int> marksMap;
    marksMap.insert({{"Apurva", 89}, {"Shashwat", 91}});
    marksMap["Harry"] = 89;
    marksMap["Samiksha"] = 100;
    marksMap["Jack"] = 78;
    // or
    marksMap["Shashwat"] = 99;      // this will overwrite above entry
                                    // if
    marksMap.emplace("Neelam", 98); // another method to enter

    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << "\n";
    }
    //------------------------------------------------------------------------------------
    cout << "The size is:" << marksMap.size() << endl;
    //------------------------------------------------------------------------------------
    cout << "The max size is:" << marksMap.max_size() << endl;
    //------------------------------------------------------------------------------------
    cout << "Is map empty:" << marksMap.empty() << endl;
    //--------------------------------------------------------------------------------------
    // for erasing
    marksMap.erase("Jack");
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << "\n";
    }
    marksMap.erase(marksMap.begin(), marksMap.end());
    marksMap.erase(marksMap.begin());
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << "\n";
    }
    return 0;
}