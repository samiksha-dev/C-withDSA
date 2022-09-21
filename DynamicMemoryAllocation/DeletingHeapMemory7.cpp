#include <iostream>
using namespace std;

int main()
{
    int i = 7;
    int *ptr = new i;
    delete i; // deleting heap memory
    int *ptr2 = new arr[9];
    delete[] arr; // deleting heap memory
    return 0;
}