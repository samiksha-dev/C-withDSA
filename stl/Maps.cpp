#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> marksMap;
    marksMap.insert({{"Apurva", 89}, {"Shashwat", 91}});
    marksMap["Harry"] = 89;
    marksMap["Samiksha"] = 100;
    marksMap["Jack"] = 78;
    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << "\n";
    }
    cout << "The size is:" << marksMap.size() << endl;
    cout << "The max size is:" << marksMap.max_size() << endl;
    cout << "Is map empty:" << marksMap.empty() << endl;
    return 0;
}