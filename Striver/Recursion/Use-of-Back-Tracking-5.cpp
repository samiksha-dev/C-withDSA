// print reverse counting but not using printRev(i-1,n)
#include <iostream>
using namespace std;

void printRev(int i, int n)
{
    if (i > n)
        return;
    printRev(i + 1, n);
    cout << i << " ";
}
int main()
{
    int n;
    cout << "Enter the no. upto which count has to be printed ";
    cin >> n;
    printRev(1, n);
    return 0;
}