#include <iostream>
using namespace std;

int main()
{
    int i = 5;
    int *p = 0;
    p = &i;
    cout << p << endl;
    cout << *p << endl;

    //=========================================================
    int num = 9;
    int *q = &num;
    cout << "Value at num" << num << endl;

    (*q)++;
    cout << "Value at num" << num << endl;
    cout << "Value at q" << *q;
    //========================================================

    int num2 = 10;
    int a = num2;
    cout << "Value of num2 before is" << num2;
    a++;
    cout << "Value of num2 after  is" << num2;
    // no change

    return 0;
}