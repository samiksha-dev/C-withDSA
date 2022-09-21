#include <iostream>
using namespace std;

int main()
{
    // 1st difference
    int temp[10];
    cout << "Size of array is" << sizeof(temp);
    int *ptr = &temp[0];
    cout << "size of pointer" << sizeof(ptr);
    cout << "size of value pointed by pointer is" << sizeof(*ptr);
    cout << "size" << sizeof(&ptr);
    cout << "size:" << sizeof(&temp);
    cout << "size::" << sizeof(*temp);
    //=================================================================
    int a[20] = {12, 332, 462, 13, 135};
    // below all three statements will give same output
    cout << " ::" << &a << endl;
    cout << "::::" << a << endl;
    cout << ":::::" << &a[0] << endl;

    int *q = &a[0];
    cout << "!!" << q << endl;
    cout << "!!!" << *q << endl;
    cout << "!!!!" << &q << endl;
    //========================================================================

    // symbol table stores the address mapped to that entry
    // lets assume address of arr is 710 so symbo table maps the arr with 710 address and stores it
    // for arr we cant do arr=arr+1
    // but for ptr we can do ptr=ptr+1

    int b[10];
    // b = b + 1; // this will give error since array address cannot be reassigned
    int *qtr = &b[0];
    cout << ":" << qtr;
    qtr = qtr + 1;
    cout << qtr;
    return 0;
}