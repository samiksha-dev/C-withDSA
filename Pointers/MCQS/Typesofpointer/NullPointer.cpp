#include <iostream>
using namespace std;

// 1. Null Pointers:
// A NULL pointer is a pointer that is pointing to nothing. If we don’t have the address to be assigned to a pointer, we can use NULL.
// Advantages of Null pointer are:
// We can initialize a pointer variable when that pointer variable is not assigned any actual memory address.
// We can pass a null pointer to a function argument when we are unwilling to pass any actual memory address.

int main()
{
    int *p;        // Contains garbage value
    int *p = NULL; // NULL is constant with vaue 0
    int *q = 0;    // Same as above
                   // Here, we have created a pointer variable that contains garbage values. To dereference the pointer, we have initialized it to NULL to avoid unexpected behavior.
                   // Note: An uninitialized pointer variable contains garbage; this will lead to unexpected results or segmentation faults. Hence, we should never leave a pointer
                   // uninitialized and instead.

    return 0;
}