// Recursion is when a function cals itself either directly or indirectly
// OR
// when a big prblm can be solved or is dependent on a small problem of same type this is called as recursion

// we need a base case and a recursive relation which are mandatory
// base case is that point where we stop
// in base case it is mandatory to write return
// agar base case nhi likhoge sol. chalta jaega(stack overflow ho jaega) aur segmentationfault ka error aa jaega
// processing is optional

// Factorial Problem
// for eg. we want to find 5!
// 5!=5*4*3*2*1
// 5!=5*4!
// i.e F(n)=n*F(n-1)
// now 4!=4*3!
// 3!=3*2!
// 2!=2*1!
// 1!=1*0!
// but we know 0!=1-->therefore this is the base case

#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0)
        return 1;
    // int smallPrblm = factorial(n - 1);
    // int biggerPrblm = n * smallPrblm;
    // return biggerPrblm;
    // can be reduced to
    return n * factorial(n - 1);
}
int main()
{
    int n;
    cin >> n;
    int ans = factorial(n);
    cout << ans;
    return 0;
}
