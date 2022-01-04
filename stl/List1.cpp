#include <iostream>
using namespace std;
#include <list>
// M-2 for printing
void display(list<int> &list1)
{
    cout << *list1.begin() << " ";
    list<int>::iterator iter1;
    for (iter1 = list1.begin(); iter1 != list1.end(); iter1++)
    {
        cout << *iter1 << " ";
    }
    cout << endl;
}
int main()
{
    list<int> list3;
    list3.push_back(3);
    list3.push_back(4);
    list3.push_back(5);
    list3.push_back(6);
    list3.push_back(7);
    // list<int>::iterator iter;
    // iter = list3.begin();
    // M-1 to print
    // cout << *iter << " ";
    // iter++;
    // cout << *iter << " ";
    // iter++;
    // cout << *iter << " ";
    // iter++;
    list3.pop_front();
    list3.pop_back();

    // sorting the list
    list3.sort();
    display(list3);

    // Method-2 to insert elements
    list<int> list4(3);
    list<int>::iterator iter2;
    iter2 = list4.begin();
    *iter2 = 34;
    iter2++;
    *iter2 = 23;
    iter2++;
    *iter2 = 12;
    iter2++;
    list4.remove(23);
    display(list4);

    // Reversing the list
    list4.reverse();
    display(list4);
    // Merging the list
    list3.merge(list4);
    cout << "List 3 after merging";
    display(list3);
    return 0;
}