// print 1 to n but we cant do print(i+1,n) that is +is not allowed
// use -
#include <iostream>
using namespace std;
void printNo(int i, int n)
{
    if (i < 1)
        return;
    printNo(i - 1, n);
    cout << i << " ";
}

int main()
{
    int n;
    cout << "Enter the count upto which you have to print";
    cin >> n;
    printNo(n, n);
    return 0;
}