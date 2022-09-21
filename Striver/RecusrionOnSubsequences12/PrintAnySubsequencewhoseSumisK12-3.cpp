#include <iostream>
#include <vector>
using namespace std;

bool subsequenceSum(int index, int arr[], vector<int> ds, int sum, int size, int s)
{
    if (index >= size)
    {
        if (s == sum)
        {
            for (auto it : ds)
                cout << it << " ";
            cout << endl;
            return true;
        }
        else
            return false;
    }
    ds.push_back(arr[index]);
    s = s + arr[index];
    if (subsequenceSum(index + 1, arr, ds, sum, size, s) == true)
    {
        return true;
    }
    s = s - arr[index];
    ds.pop_back();
    if (subsequenceSum(index + 1, arr, ds, sum, size, s) == true)
    {
        return true;
    }
    return false;
}
int main()
{
    int arr[] = {1, 2, 1};
    int sum;
    vector<int> ds;
    cout << "Enter the particular sum";
    cin >> sum;
    subsequenceSum(0, arr, ds, sum, 3, 0);
    return 0;
}