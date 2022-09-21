#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    cout << "Address of num is" << &num;
    // Address is of the form of hexadecimal

    // pointer-stores address
    // Always initialise your pointer at the time of declaration nhi pata toh zero(mtlb null pointer bana do) se kr do
    // since if you will not initilaise itt will store garbage address which is a bad practice
    int *p = &num;
    // means p is a pointer to int
    // p stores address of num

    // data type of num and p should always be same

    //*p is known as dereference operator--means value pointed to by
    // note num or p points to same value
    // you do cout<<num or cout<<*p you will get same value that is 5
    // also any changes made to value for eg. num++ or *p++ so the value will now become 6
    // now cout<<num or cout<<*p++> ans will be 6 for both
    // it is not like function where we send a copy
    double num2 = 7.9;
    double *d = &num2;
    float num3 = 728;
    float *f = &num3;
    char ch = 'a';
    char *c = &ch;
    cout << "Value at num is" << *p << endl;
    cout << p << endl;
    // Always size will be 4 or 8 depend on the complier but size of pointer is independent of data type
    // since it stores the address
    cout << "Size of pointer is" << sizeof(p);
    cout << "Size of pointer is" << sizeof(d);
    cout << "Size of pointer is" << sizeof(num3);
    cout << "Size of pointer is" << sizeof(c);
    cout << "Address of pointer is" << &c;

    return 0;
}