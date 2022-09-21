// Print name 1 to n times
#include <iostream>
using namespace std;
// Time Complexity O(n)
// Space Complexity o(n)//stack space is occupied
void printName(int i, int n)
{
    if (i > n)
        return;
    cout << "Samiksha"
         << " ";
    i = i + 1; // or printNme(i+1,n)
    printName(i, n);
}
int main()
{
    int n;
    cout << "Enter the no. of the times name has to be printed";
    cin >> n;
    printName(1, n);
    return 0;
}