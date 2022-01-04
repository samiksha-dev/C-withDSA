#include <iostream>
using namespace std;
int fib(int a, int b, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cout << a;
        sum = a + b;
        a = b;
        b = sum;
    }
    return (a);
}
int main()
{
    int a = 0, b = 1, n, fibona;
    cout << "Enter the range";
    cin >> n;
    fibona = fib(a, b, n);
    cout << fibona;
}
