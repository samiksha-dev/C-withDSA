#include <iostream>
using namespace std;
#include <vector>

int main()
{
    int sum = 0, sum2 = 0;
    vector<int> vec(5);
    for (int i = 0; i < vec.size(); i++)
    {
        cin >> vec[i];
    }
    for (int i = 0; i < vec.size(); i++)
    {
        sum += vec[i];
    }
    sum2 = (vec.size() * (vec.size() - 1)) / 2;
    cout << "duplicate element" << sum - sum2;

    return 0;
}
