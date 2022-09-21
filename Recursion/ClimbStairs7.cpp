// You have been given a number of stairs. Initially, you are at the 0th stair, and you need to reach the Nth stair.
// Each time you can either climb one step or two steps. You are supposed to return the number of distinct ways in which you can climb from the
// 0th step to Nth step.
// Example :
// N=3
// Example

// We can climb one step at a time i.e. {(0, 1) ,(1, 2),(2,3)} or we can climb the first two-step and then
// one step i.e. {(0,2),(1, 3)} or we can climb first one step and then two step i.e. {(0,1), (1,3)}.

#include <iostream>
using namespace std;
int countStairs(int n)
{
    if (n < 0) // maan lo woh stair dharti ke neech haii tohh waha se aana ka toh koi way nhi hai na
    {
        return 0;
    }

    if (n == 0) // mtlb maan lo 0th stair pe toh ussi pe aane ka ek hi way hai na uchal ke
    {
        return 1;
    }
    int ans = countStairs(n - 1) + countStairs(n - 2); // mtlb ya toh isse ek pehli waali stairs se aae hoge
    // ya isse 2 pehle stairs se
    return ans;
}
int main()
{
    int n;
    cout << "Enter the Stair no." << endl;
    cin >> n;
    int ways = countStairs(n);
    cout << "No. of ways to reach that stair" << ways;

    return 0;
}
