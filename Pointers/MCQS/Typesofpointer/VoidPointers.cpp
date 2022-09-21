//  Void Pointers:
// A void pointer is a generic pointer; it has no associated type with it. A void pointer can hold an address of any type and can be typecasted to any type. Thus we can use the void pointer to store the address of any variable.

// Void pointer is declared by:

// void *ptr;

// Note:

// 1. void pointers cannot be dereferenced. It can, however, be done using typecasting the void pointer.

// 2. Pointer arithmetic is not possible on pointers of void due to lack of concrete value and size.

#include <iostream>
using namespace std;
int main()
{
    void *ptr;
    int i = 10;
    // assign int address to void
    ptr = &i;
    cout << "Address of variable i " << &i << endl;
    cout << "Address where the void pointer is pointing " << ptr << endl;
    return 0;
}
// Output:
// Address of variable i 0x7ffc848c25f4
// Address where the void pointer is pointing 0x7ffc848c25f4
