#include <iostream>
using namespace std;
// HCF is max no. that when divided by the nos. who hcf needs to be found give ans as zero

// Euclids Algorithm
// gcd(a,b)=gcd(a-b,b)
// or gcd(a,b)=gcd(a%b,b)
// mtlb yeh dono me se koi bhi ek formula tb tak lagate jao jb tk koi parameters se ek zero na aa jae
// aur jo parameter bach gaya woh hii ans
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        if (b > a)
        {
            b = b - a;
        }
    }
    return b; // or return a
}
int main()
{
    int a, b;
    cout << "Enter the nos.";
    cin >> a >> b;
    int ans = gcd(a, b);
    cout << "HCF is" << ans;
    return 0;
}