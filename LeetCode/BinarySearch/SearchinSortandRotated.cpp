//  Search an Element in a Sorted & Rotated array using Binary Search
#include <iostream>
using namespace std;
#include <vector>
int binarySearch(vector<int> vec, int s, int e, int key)
{
    int start = s;
    int end = e;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (vec[mid] == key)
        {
            return mid;
        }
        else if (vec[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
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
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s; // or return e;
}
int main()
{
    vector<int> vec;
    int size;
    int key;
    cout << "Enter the size";

    cin >> size;
    cout << "Enter the elements";
    for (int i = 0; i < size; i++)
    {
        int elements;
        cin >> elements;
        vec.push_back(elements);
    }
    cout << "Enter element to be searched";
    cin >> key;
    int pivot = pivotelement(vec, size);
    if (key >= vec[pivot] && key <= vec[size - 1])
    {
        int ele1 = binarySearch(vec, pivot, size - 1, key);
        cout << ele1;
    }

    else
    {
        int ele2 = binarySearch(vec, 0, pivot - 1, key);
        cout << ele2;
    }
    // cout << pivot;
    return 0;
}