// Input: arr = [1, 2, 3]

// Output:
// [
//   [1, 2, 3],
//   [1, 3, 2],
//   [2, 1, 3],
//   [2, 3, 1],
//   [3, 1, 2],
//   [3, 2, 1]
// ]

// Explanation: Given an array, return all the possible permutations.

// Example 2:

// Input: arr = [0, 1]

// Output:
// [
//   [0, 1],
//   [1, 0]
// ]

// Explanation: Given an array, return all the possible permutations

// Time Complexity:n!*n since n! is no. of permutations and since we are looping from 0 to n-1 therefore *n
// space complexity=o(n)[for vector]+O(n)[for map]+O(n)[depth of recursion]
#include <iostream>
#include <vector>
#include <map>
using namespace std;

void permutation(int arr[], vector<int> ds, int freq[], int size)
{
    if (ds.size() == size)
    {
        for (auto it : ds)
        {
            cout << it << " ";
        }
        cout << endl;
        return;
    }
    for (int i = 0; i < size; i++)
    {
        if (!freq[i])
        {
            ds.push_back(arr[i]);
            freq[i] = 1;
            permutation(arr, ds, freq, size);
            freq[i] = 0;
            ds.pop_back();
        }
    }
}
int main()
{
    int arr[] = {1, 2, 3};
    vector<int> ds;
    int freq[3] = {0}; // or size of array i.e if stl array is taken freq[arr.size()]
    permutation(arr, ds, freq, 3);
    return 0;
}