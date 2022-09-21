#include <iostream>
using namespace std;
// Time complexity is almost 2^n since for eg if n=4 we call n=3 and n=2 then for n=3 we call n=2 and n=1
// it is not approximately 2^n but is exponential
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}
int main()
{
    int n, ans;
    cout << "Enter the fibonacci term which u need to find ";
    cin >> n;
    ans = fib(n);
    cout << ans;
    return 0;
}