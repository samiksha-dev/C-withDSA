#include <iostream>
using namespace std;
#include <vector>

int main()
{
    vector<vector<int>> vec;
    vector<int> sam1;
    sam1.push_back(1);
    sam1.push_back(2);

    vector<int> sam2;
    sam2.push_back(10);
    sam2.push_back(20);

    vector<int> sam3;
    sam3.push_back(10);
    sam3.push_back(20);

    vec.push_back(sam1);
    vec.push_back(sam2);
    vec.push_back(sam3);

    // therefore a vector is created with sam1 at 0th index and sam2 at 1st index

    // therefore now i is of vector data type auto likh dia mtlb system khud dekh lega kya data type lena hai
    for (auto i : vec)
    {
        for (auto j : i)

        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}