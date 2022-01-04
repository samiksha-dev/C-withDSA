#include <iostream>
using namespace std;
#include <cmath>
int OcttODec(int n)
{
    int result = 0, count = -1, rem;
    while (n != 0)
    {
        while (n != 0)
        {
            rem = n % 10;
            count++;
            result = result + pow(8, count) * rem;
            n = n / 10;
        }
        cout << result;
    }
}

int main()
{
    int num;
    cout << "Enter the Octal number";
    cin >> num;
    OcttODec(num);
}