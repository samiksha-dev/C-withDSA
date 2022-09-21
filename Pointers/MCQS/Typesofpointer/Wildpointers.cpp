//  Wild Pointers:
//  A pointer behaves like a wild pointer when declared but not initialized. So, they point to any random memory location.

// Example:

// int *ptr; //wild pointer
//*ptr = 5;
// Note: If a pointer p points to a known variable, it’s not a wild pointer.

int *p; /* wild pointer */
int a = 10;
p = &a;  /* p is not a wild pointer now*/
*p = 12; /* This is fine. Value of a is changed */

In the above program, p is a wild pointer till this points to a.
