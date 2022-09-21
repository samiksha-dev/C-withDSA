#include <iostream>
using namespace std;
void sumSubsequence(int index, int size, vector<int> arr, vector<int> ds, vector<vector << int> &d, k, s)
{
    if (index == size)
    {
        if (s == k)
        {
            d.push_back(ds);
        }
        return;
    }
    ds.push_back(arr[index]);
    s = s + arr[index];
    sumSubsequence(index + 1, size, arr, ds, d, k, s);
    s = s - arr[index];
    ds.pop_back(arr[index]);
    sumSubsequence(index + 1, size, arr, ds, d, k, s);
}
vector<vector<int>> findSubsequence(vector<int> arr, int size, int target)
{
    vector<int> ds;
    vector<vector << int> d;
    sumSubsequence(0, 3, arr, ds, d, target, 0);
    return d;
}
int main()
{
    vector<int> arr[] = {2, 4, 6};
    int target;
    cin >> target;
    vector<vector<int>> final;
    final = findSubsequence(arr, 3, target);
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