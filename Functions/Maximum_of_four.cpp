#include <iostream>
using namespace std;
int maximum(int a, int b)
{
    return a > b ? a : b;
}
int max(int a, int b, int c, int d)
{
    return maximum(a, maximum(b, maximum(c, d)));
}
int main()
{
    int a, b, c, d;
    cout << "Enter all Nos";
    cin >> a >> b >> c >> d;
    cout << max(a, b, c, d);
}