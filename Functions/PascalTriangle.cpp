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
void pascal(int num)
{
    for (int n = 0; n < num; n++)
    {
        int top = fact(n);
        for (int r = 0; r <= n; r++)
            cout << top / (fact(n - r) * fact(r)) << " ";
        cout << "\n";
    }
}
int main()
{
    int num;
    cin >> num;
    pascal(num);
}