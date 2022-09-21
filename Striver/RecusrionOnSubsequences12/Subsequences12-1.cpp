// subsequence-a contigous or a non-contigous sequences which follows the order
// eg arr=[3,1,2]
// therefore the subsequence can be
//{} empty
// 3
// 1
// 2
// 3 1
// 1 2
// 3 2
// 3 1 2
// therfore print these subsequences
#include <iostream>
#include <vector>
using namespace std;

void subsequence(int index, int arr[], vector<int> ds, int size)
{
    if (index == size)
    {
        for (auto it : ds)
        {
            cout << it << " ";
        }
        if (ds.size() == 0)
        {
            cout << "{}";
        }
        cout << endl;
        return;
    }
    // pick
    //  ds.push_back(arr[index]);
    //  subsequence(index + 1, arr, ds, size);
    // remove
    //  ds.pop_back();
    //  subsequence(index + 1, arr, ds, size);
    subsequence(index + 1, arr, ds, size);
    ds.push_back(arr[index]);
    subsequence(index + 1, arr, ds, size);
}
int main()
{
    int arr[] = {3, 1, 2};
    int n = 3;
    vector<int> ds;
    subsequence(0, arr, ds, n);
    return 0;
}