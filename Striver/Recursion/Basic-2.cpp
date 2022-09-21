#include <iostream>
using namespace std;
void printNo(int i, int n)
{
    if (i > n)
        return;
    cout << i << " ";
    printNo(i + 1, n);
}
int main()
{
    int n;
    cout << "Enter the count upto which no. has to be printed ";
    cin >> n;
    printNo(1, n);
    return 0;
}