#include <iostream>
#include <vector>
using namespace std;

void subsequenceSum(int index, int arr[], vector<int> ds, int sum, int size, int s)
{
    if (index >= size)
    {
        if (s == sum)
        {
            for (auto it : ds)
                cout << it << " ";
            cout << endl;
        }
        return;
    }
    ds.push_back(arr[index]);
    s = s + arr[index];
    subsequenceSum(index + 1, arr, ds, sum, size, s);
    s = s - arr[index];
    ds.pop_back();
    subsequenceSum(index + 1, arr, ds, sum, size, s);
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