// You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively. Both these arrays are sorted in non-decreasing order. You have to find the intersection of these two arrays.
// Intersection of two arrays is an array that consists of all the common elements occurring in both arrays.
// input
// 1 2 2 2 3 4
// 2 2 3 3
// output-2 2 3

using namespace std;
#include <bits/stdc++.h>
int main()
{
    int m = 0, n = 0;
    vector<int> vec1(6);
    vector<int> vec2(4);
    vector<int> vec;
    for (int i = 0; i < 6; i++)
    {
        vec1.push_back(i);
    }
    for (int j = 0; j < 4; j++)
    {
        vec2.push_back(j);
    }

    while (m < 6 && n < 4)
    {
        if (vec1[m] == vec2[n])
        {
            vec.push_back(vec1[m]);
            m++;
            n++;
        }
        else if (vec1[m] < vec2[n])
        {
            m++;
        }
        else
            n++;
    }
    for (int j : vec)
    {
        cout << j;
    }
}