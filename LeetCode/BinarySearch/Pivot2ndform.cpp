
// Find Pivot in an Sorted & Rotated Array using Binary Search
// that is in a graph u need to find max. element using binary search
#include <iostream>
using namespace std;
#include <vector>
int pivotelement(vector<int> vec, int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (vec[mid] >= vec[0])
        {
            s = mid + 1;
        }
        else
        {
            s = mid;
        }
        mid = s + (e - s) / 2;
    }
    return e; // or return e;
}
int main()
{
    vector<int> vec;
    int size;
    cout << "Enter the size";

    cin >> size;
    cout << "Enter the elements";
    for (int i = 0; i < size; i++)
    {
        int elements;
        cin >> elements;
        vec.push_back(elements);
    }
    int pivot = pivotelement(vec, size);
    cout << pivot;
    return 0;
}