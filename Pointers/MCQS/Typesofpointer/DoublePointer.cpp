#include <iostream>
using namespace std;

//  Double Pointers:
// We can create a pointer to a pointer that in turn may point to data or another
// pointer. The first pointer is used to store the address of the variable. And the
//  second pointer is used to store the address of the first pointer. That is why they
//  are also known as double pointers.

// Example :
// int a = 10;
// int *p = &a;
// int **q = &p;
// Here q is a pointer to a pointer, i.e., a double - pointer, as indicated by **.

#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *p = &a;  // pointer
    int **q = &p; // pointer-to-pointer
    /* Next three statements will print same value i.e. address of a */
    cout << &a << endl;
    cout << p << endl;
    cout << *q << endl;
    /* Next two statements will print same value i.e. address of p */
    cout << &p << endl;
    cout << q << endl;
    /* Next three statements will print same value i.e. value of a */
    cout << a << endl;
    cout << *p << endl;
    cout << **q << endl;
    return 0;
}
// Output : 0x7ffcab7af9ac 0x7ffcab7af9ac 0x7ffcab7af9ac 0x7ffcab7af9b0 0x7ffcab7af9b0
// 10 10 10
