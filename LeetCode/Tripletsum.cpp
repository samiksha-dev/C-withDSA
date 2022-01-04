#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> vec;
    vector<int> ans;
    int sum;
    cout << "Enter the sum";
    cin >> sum;
    vector<int> arr(5);
    cout << "Enter the elements of array";
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            for (int k = j + 1; k < arr.size(); k++)
            {
                if (arr[i] + arr[j] + arr[k] == sum)
                {
                    vector<int> temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);
                    sort(temp.begin(), temp.end());
                    vec.push_back(temp);
                }
            }
        }
    }
    for (auto i : vec)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << "\n";
        }

    return 0;
}