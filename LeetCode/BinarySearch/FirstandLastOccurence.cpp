#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    vector<int> vec;
    cout << "Enter the size";
    cin >> size;
    cout << "Enter the elements" << endl;
    for (int i = 0; i < size; i++)
    {
        int elements;
        cin >> elements;
        vec.push_back(elements);
    }
    sort(vec.begin(), vec.end());
    cout << "Enter the key";
    int key;
    cin >> key;
    int start = 0;
    int end = size - 1;
    int firstOccurence = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (vec[mid] == key)
        {
            firstOccurence = mid;
            end = mid - 1;
        }
        else if (vec[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    cout << firstOccurence;
    int start2 = firstOccurence + 1; // or start=0;
    int end1 = size - 1;
    int lastOccurence = -1;
    int mid2 = start2 + (end1 - start2) / 2;
    while (start2 <= end1)
    {
        // cout << start2 << " " << mid2 << " " << end1 << "\n";
        if (vec[mid2] == key)
        {
            lastOccurence = mid2;
            start2 = mid2 + 1;
        }
        else if (vec[mid2] > key)
        {
            end1 = mid2 - 1;
        }
        else
        {
            start2 = mid2 + 1;
        }
        mid2 = start2 + (end1 - start2) / 2;
    }
    cout << lastOccurence;

    return 0;
}