// : Given an array of integers that may contain duplicates the task is to return all possible subsets. Return only unique subsets and they can be in any order.

// Examples:

// Example 1:

// Input: array[] = [1,2,2]

// Output: [ [ ],[1],[1,2],[1,2,2],[2],[2,2] ]

// Explanation: We can have subsets ranging from  length 0 to 3. which are listed above. Also the subset [1,2] appears twice but is printed only once as we require only unique subsets.

// Input: array[] = [1]

// Output: [ [ ], [1] ]

// Explanation: Only two unique subsets are available

// can be done by sol.of Subset Sum1 but then u need to convert into set for no duplicates and then return a list<list> that is list of list
// so the time complexity with set will be m*log m where m=2^n since with subset we will get 2^n sol. so time will increase

// also sort the input array given to u
//  so for solving at first step we are ccretaing an empty subset
//  att 2nd step we are generating a ds with 1 element
//  at 3rd step we are generating ds with 2 elements
//   at 4th step we are generating a ds with 3 elements
//  and so on
//  so at each step the size of ds is increasing by 1
//  and for index is becoming index+1
//  but for avoiding duplicates we have i=index-(n-1)
//  and for adding non duplicates we will add it at ds.add(arr[i])

// Time complexity is 2^n*n(n since after getting ds we need to add it either list or something which we need to give as ans)
// space complexity=O(2^n)*O(k)[since we will have to store 2^n sol and let say everyy sol have avg length as k]

#include <iostream>
#include <vector>
using namespace std;
void subset(int index, vector<int> arr, vector<int> ds, vector<vector << int> &d)
{
    d.push_back(ds);
    for (int i = index; i < arr.size(); i++)
    {
        if (i != index && arr[i] == arr[i - 1])
            continue;
        ds.push_back(arr[i]);
        subset(i + 1, arr, ds, d);
        ds.pop_back();
    }
}

vector<vector<int>> findSubsets(vector<int> &arr)
{
    vector<int> ds;
    vector<vector << int> d;
    sort(arr.begin(), arr.end());
    subset(0, arr, ds, d);
    return d;
}

int main()
{
    vector<int> arr[] = {2, 4, 6};
    vector<vector<int>> final;
    final = findSubsets(arr);
    for (auto i : final)
    {
        for (auto j : i)

        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}