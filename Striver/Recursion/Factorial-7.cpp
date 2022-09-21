#include <iostream>
using namespace std;
// Time complexity-O(n)
// Space complexity-o(n)
int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
int main()
{
    int n, f;
    cout << "Enter the no. whose factorial needs to be found";
    cin >> n;
    f = factorial(n);
    cout << "Factorial is" << f;
}