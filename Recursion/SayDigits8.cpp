#include <iostream>
using namespace std;

void sayDigits(int n, string arr[])
{
    if (n == 0)
        return;

    int digit = n % 10;
    n = n / 10;
    sayDigits(n, arr);
    cout << arr[digit] << " "; // agar maan lo 452 hai tumko two five four print krna hota toh recursive call se pehle likh dete
}
int main()
{
    int n;
    cout << "Enter the no.";
    cin >> n;
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    sayDigits(n, arr);
    return 0;
}