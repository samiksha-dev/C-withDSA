#include <iostream>
using namespace std;
// why do we write datatype *ptr
// why not pointer ptr
// since by data type we get to know which type of data it is poinitng to
// and for eg. we need to do ptr=ptr +2 then ptr kitna badhega kaise pata chalega
// isiliye agar int hua toh 4 +4 byte badha agar float hua toh 8+8
int main()
{
    int i = 5;
    int *ptr = &i;
    int **ptr2 = &ptr;
    cout << "Adress of ptr is" << &ptr << endl;
    cout << "Content inside ptr is or address of i" << ptr << endl;
    cout << "This gives the value of the address pointed by ptr2" << *ptr2;
    //-------------------------------------------------------------------------------
    cout << "------------------------------------------------------------------" << endl;
    cout << "content of i" << i << endl;
    cout << "content of i method 2 is" << *ptr;
    cout << "This will give same result as above two" << **ptr2 << endl;
    cout << "------------------------------------------------------------------" << endl;
    //-------------------------------------------------------------------------
    cout << &i << endl;
    cout << ptr << endl;
    cout << *ptr2;
    cout << "------------------------------------------------------------------" << endl;
    cout << "Address of ptr" << &ptr << endl;
    cout << "Address of ptr method-2 is" << ptr2;
    return 0;
}