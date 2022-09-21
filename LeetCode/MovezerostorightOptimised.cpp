#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size, element;
    vector<int> nums;
    cout << "Enter the size of array";
    cin >> size;
    cout << "Enter the elements of array";
    for (int i = 0; i < size; i++)
    {
        cin >> element;
        nums.push_back(element);
    }
    int nonZero = 0;
    for (int k = 0; k < nums.size(); k++)
    {
        if (nums[k] != 0)
        {
            swap(nums[k], nums[nonZero]);
            nonZero++;
        }
    }
    for (int l : nums)
    {
        cout << l << " ";
    }
    return 0;
}