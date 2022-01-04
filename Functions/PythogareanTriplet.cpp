#include <iostream>
using namespace std;
int max(int a, int b)
{
    return a > b ? a : b;
}
int maximum(int a, int b, int c)
{
    return max(a, max(b, c));
}
bool pytho(int x, int y, int z)
{
    int a = maximum(x, y, z);
    int b, c;
    if (a == x)
    {
        b = y;
        c = z;
    }

    else if (a == y)
    {
        b = x;
        c = z;
    }
    else
    {
        b = x;
        c = y;
    }
    if ((c * c) + (b * b) == (a * a))
    {
        return true;
    }
    else
        return false;
}
int main()
{
    int a, b, c;
    bool ans;
    cout << "Enter the nos";
    cin >> a >> b >> c;
    ans = pytho(a, b, c);

    cout << (ans ? "true" : "false");
}