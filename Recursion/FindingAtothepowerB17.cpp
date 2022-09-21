// concept
// first Method-
// int ans=1;
// for(int i=0;i<b;i++)
//{
// ans=ans*a;
// }

// Method-2
//  concept--
//  a^b where b can be odd or even
// if b is even a^b=a^b/2*a^b/2
// if b is odd a^b=a*(a)*(a^b/2*a^b/2)

// Using metod 2 as recursion
#include <iostream>
using namespace std;
int powerN(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    if (p == 1)
    {
        return n;
    }
    int ans = powerN(n, p / 2);
    if (p % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        return n * ans * ans;
    }
}
int main()
{
    int num, power;
    cout << "Enter no."
         << " "
         << "Enter power";
    cin >> num >> power;
    int ans = powerN(num, power);
    cout << "Ans is" << ans;
    return 0;
}