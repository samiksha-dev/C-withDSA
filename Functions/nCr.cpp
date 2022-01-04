#include <iostream>
using namespace std;
int fact(int num)
{
    int f = 1, i;
    for (i = num; i >= 1; i--)
    {
        f = f * i;
    }
    return (f);
}
int main()
{
    int n, r;
    cin >> n >> r;
    int ans = fact(n) / (fact(n - r) * fact(r));
    cout << ans;
}