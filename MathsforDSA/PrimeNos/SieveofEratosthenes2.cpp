#include <iostream>
using namespace std;
#include <vector>
// print prime nos. within range
int countPrimes(int n)
{
    int count = 0;
    vector<bool> prime(n + 1, true);
    // means we created a vector of n+1 size and for now we have said every no. is prime
    prime[0] = prime[1] = false; // since 0 and 1 are not prime nos;
    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            count++;
            for (int j = 2 * i; j < n; j = j + i)
            {
                prime[j] = 0;
            }
        }
    }
    return count;
}
int main()
{
    int n1, n2, c1, c2;
    cout << "Enter the no. upto which you need to find amount of prime nos";
    cin >> n1 >> n2;
    c1 = countPrimes(n1);
    c2 = countPrimes(n2);
    cout << "No. of prime nos. within are" << c1 - c2;
    return 0;
}