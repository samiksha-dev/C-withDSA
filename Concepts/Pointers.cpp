#include <iostream>
using namespace std;

int main()
{
    //What is a pointer?------>data type which holds the address of other data types
    int a = 3;
    int *b = &a;
    //&---->(Address of) operator
    cout << "The address of a is" << &a << endl;
    cout << "The address of a is" << b << endl;
    // *--->(value at)Dereference operator
    cout << "The value at address b is" << *b << endl;

    //Pointer to pointer
    int **c = &b;
    //or
    //int **c=NULL;
    //c=&b;
    cout << "The address of b is" << &b << endl;
    cout << "The address of b is" << c << endl;
    cout << "The value at address c is" << *c << endl;
    cout << "The value at address value_at(value_at(c)) is" << **c << endl;

    //eg            a
    //             |3|
    //address is   0xa
    //notations=d=value stored by d
    //*c=go to address stored and print its value
    //therefore for *b=&a
    //              b
    //             |0xa|
    //          print b Ans=0xa
    //          print *b Ans=3
    //          now c=&b
    //c will store address of b let address of b is 0xb  therefore
    //            c
    //           |0xb|
    //       print c Ans=0xb
    //       print *c Ans=0xa
    //       print **c Ans=3

    //POINTERS AND ARRAYS
    int marks[4] = {32, 56, 79, 90};

    int *p = marks;
    cout << "The value of marks[0] is" << p << endl;
    cout << "The value of marks[0] is" << *p << endl;
    cout << "The value of marks[1] is" << *(p + 1) << endl;
    cout << "The value of marks[2] is" << *(p + 2) << endl;
    cout << "The value of marks[3] is" << *(p + 3) << endl;
    cout << *(p++) << endl;
    cout << *p;
    cout << *(++p);

    return 0;
}