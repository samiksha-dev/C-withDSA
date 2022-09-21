#include <iostream>
using namespace std;
// Complexity is O((n*n))
// therefore we use Sieve of Eratosthenes
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
    int n, count = 0;
    cout << "Enter the no. upto which you need to find amount of prime nos";
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (isPrime(i))
        {
            count++;
        }
    }
    cout << "No of prime nos are" << count;
    return 0;
}