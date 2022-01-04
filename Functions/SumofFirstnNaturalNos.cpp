#include <iostream>
using namespace std;
int sum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << sum;
}
int main()
{
    int num;
    cout << "Enter the no upto which we need sum";
    cin >> num;
    sum(num);
}