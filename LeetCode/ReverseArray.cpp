#include <iostream>
using namespace std;
#include <vector>

int main()
{
    int size, element;
    vector<int> v;
    cout << "Enter the size of array";
    cin >> size;
    cout << "Enter the elements of array";
    for (int i = 0; i < size; i++)
    {
        cin >> element;
        v.push_back(element);
    }
    int temp;
    int s = 0, e = size - 1;
    while (s <= e)
    {
        temp = v[s];
        v[s] = v[e];
        v[e] = temp;
        s++;
        e--;
    }
    for (int i : v)
    {
        cout << i << " ";
    }
    return 0;
}