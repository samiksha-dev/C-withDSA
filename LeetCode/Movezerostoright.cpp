#include <iostream>
using namespace std;
#include <vector>
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
    int i = 0, j = 0;
    vector<int> zeros;
    while (i < nums.size())
    {
        if (nums[i] == 0)
        {
            zeros.push_back(nums[i]);
            nums.erase(nums.begin() + i);
            i++;
        }
        else
        {
            i++;
        }
    }
    for (int i = 0; i < zeros.size(); i++)
    {
        nums.push_back(zeros[i]);
    }
    for (int i : nums)
    {
        cout << i << " ";
    }
    return 0;
}