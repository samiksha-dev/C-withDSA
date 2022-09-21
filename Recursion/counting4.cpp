#include <iostream>
using namespace std;
void printcount(int n)
{
    if (n == 0)
    {
        return;
    }
    printcount(n - 1);
    cout << n;
}
// this is head recursion
int main()
{
    int n;
    cout << "Enter the no.";
    cin >> n;
    printcount(n);
    return 0;
}