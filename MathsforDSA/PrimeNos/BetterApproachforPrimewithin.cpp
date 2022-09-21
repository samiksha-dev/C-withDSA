// Sieve of Eratosthenes
// for eg we have n=40
// we write all nos.upto 40
// then 1 and 40 are obviously not included
// now mark all as prime
// now see 2 and see what all nos come in table of 2
// therefore cut 4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38
// now go to 3 and see which all nos come in table of 3
// therefore cut 6,9,12,15,18,21,24,27,30,33,35,37
// and so on check for all nos.
// at end u will be left with 2,3,5,7,11,13,17,19,23,29,31,37
// hence ans=12 prime nos. are there upto 40

// Time complexity
//  n/2+n/3+n/5+n/7+......
//  n(1/2+1/3+1/5+1/7+...)
//  n(this is harmonic progression series)
//  Hence time complexity isO(n*(log(log(n))))
#include <iostream>
using namespace std;
#include <vector>

int countPrimes(int n)
{
    int count = 0;
    vector<bool> prime(n + 1, true); // means we created a vector of n+1 size and for now we have said every no. is prime
    prime[0] = prime[1] = false;     // since 0 and 1 are not prime nos;
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
    int n, c;
    cout << "Enter the no. upto which you need to find amount of prime nos";
    cin >> n;
    c = countPrimes(n);
    cout << "No. of prime nos. within are" << c;
    return 0;
}