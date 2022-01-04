#include <iostream>
#include <cmath>
using namespace std;
int bintoDec(int n)
{
    int count = -1, result = 0, rem;
    while (n != 0)
    {
        rem = n % 10;
        count++;
        result = result + pow(2, count) * rem;
        n = n / 10;
    }
    cout << result;
}
int main()
{
    int num;
    cout << "Enter Binary No.";
    cin >> num;
    bintoDec(num);
}