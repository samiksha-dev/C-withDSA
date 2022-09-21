// if n=5
// print 5 4 3 2 1

#include <iostream>
using namespace std;
void counting(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << endl;
    counting(n - 1);
    // printing 5 4 3 2 1
    // this is tail recursion
}
int main()
{
    int n;
    cout << "Enter the no.";
    counting(n);
    return 0;
}