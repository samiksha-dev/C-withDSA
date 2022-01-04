#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main()
{
    vector<int> vec;
    int size, key;
    cout << "Enter the size";
    cin >> size;
    cout << "Enter the elements";
    for (int i = 0; i < size; i++)
    {
        int elements;
        cin >> elements;
        vec.push_back(elements);
    }
    sort(vec.begin(), vec.end());
    cout << "Enter the key";
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
    cout << "First Occurence" << firstOccurence;

    int start1 = 0;
    int end1 = size - 1;
    int mid1 = start1 + (end1 - start1) / 2;
    int lastOccurence = -1;
    while (start1 <= end1)
    {
        if (vec[mid1] == key)
        {
            lastOccurence = mid1;
            start1 = mid1 + 1;
        }
        else if (vec[mid1] > key)
        {
            end1 = mid1 - 1;
        }
        else
        {
            start1 = mid1 + 1;
        }
        mid1 = start1 + (end1 - start1) / 2;
    }

    cout << "Total no. of occurences" << lastOccurence - firstOccurence + 1;
    return 0;
}