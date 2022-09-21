#include <iostream>
using namespace std;
#include <vector>
int main()
{
    int size, element, k;
    vector<int> nums;
    cout << "Enter the size of array";
    cin >> size;
    cout << "Enter the elements of array";
    for (int i = 0; i < size; i++)
    {
        cin >> element;
        nums.push_back(element);
    }
    cout << "Enter k by which array has to be rotated";
    cin >> k;
    vector<int> temp(nums.size());
    for (int j = 0; j < nums.size(); j++)
    {
        temp[(j + k) % nums.size()] = nums[j];
    }
    nums = temp;
    for (int l : nums)
    {
        cout << l;
    }
    return 0;
}