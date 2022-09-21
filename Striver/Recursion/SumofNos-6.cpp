// if n=3 print sum as 1+2+3=6
#include <iostream>
using namespace std;
void printSum(int i, int sum)
{
    if (i < 1)
    {
        cout << sum;
        return;
    }
    printSum(i - 1, sum + i);
}

int main()
{
    int n;
    cout << "Enter the no. upto which sum has to be printded";
    cin >> n;
    printSum(n, 0);
    return 0;
}