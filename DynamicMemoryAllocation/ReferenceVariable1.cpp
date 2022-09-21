#include <iostream>
using namespace std;
// Reference variable meansn they have same memory allocation but can hav different different names
int main()
{
    int i = 5;
    // create a reference variable
    int &j = i;
    // so now j and i will point to same memory location
    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << i << endl;
    cout << j << endl;

    return 0;
}