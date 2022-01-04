#include <iostream>
#include <cmath>
using namespace std;
int hexaToDeci(int num)
{
    int result = 0, count = -1, rem;
    while (num != 0)
    {
        rem = num % 10;
        if (rem == 'A' || rem == 'B' || rem == 'C' || rem == 'D' || rem == 'E' || rem == 'F')
        {
            rem = char(rem) - 55;
        }
        count++;
        result = result + pow(16, count) * rem;
        num = num / 10;
    }
    cout << result;
}
int main()
{
    string num;
    cout << "Enter hexadecimal no";
    gets(num);
    hexaToDeci(num);
}
