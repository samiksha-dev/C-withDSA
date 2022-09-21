#include <iostream>
using namespace std;
int printSum(int n)
{
    if (n == 0)
        return 0;
    int ans;
    ans = n + printSum(n - 1);
    return ans;
}
int main()
{
    int n, result;
    cout << "Enter the no. upto which sum has to be printed";
    cin >> n;
    result = printSum(n);
    cout << "Sum of nos. is" << result;
    return 0;
}