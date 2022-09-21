#include <iostream>
using namespace std;
// complexity O(n)
bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cout << "Enter the no.";
    cin >> n;
    if (isPrime(n))
    {
        cout << "It is a prime no";
    }
    else
    {
        cout << "It is not a prime no.";
    }
    return 0;
}