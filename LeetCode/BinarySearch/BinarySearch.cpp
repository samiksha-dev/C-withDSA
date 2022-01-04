#include <iostream>
using namespace std;

// for binary search array should be sorted
// Time Complexity of binary search is O(logn)
// How-since for the 1st time we did n comparisions
// for second time we did N/2 comparisions
// then we did N/8
// therefore upto N/2^k we did this was the element we got at last whose lenght is 1
// therefore N/2^k=1 k=logN base 2
// Time Complexity of Linear search is O(n)
/

    // note we know range of int main is -2^31-1 to 2^31-1
    // what if start=2^31-1
    // end=2^31-1
    // then mid will be out of int range
    // therefore to eliminate this
    // we replace mid=(start+end)/2 to mid= start+(end-start)/2
    int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
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
int main()
{
    int even[6] = {2, 4, 6, 8, 10, 12};
    int odd[5] = {1, 2, 4, 6, 7};
    int oddIndex = binarySearch(odd, 5, 7);
    int evenIndex = binarySearch(even, 6, 12);
    cout << "Odd index is" << oddIndex << endl;
    cout << "Even index is" << evenIndex << endl;

    return 0;
}