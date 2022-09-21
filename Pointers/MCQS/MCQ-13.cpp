#include <iostream>
using namespace std;

int main()
{
    int arr[] = {11, 21, 31, 41};
    int *ptr = arr++; // error
    // since we know that in array we cant do arr+1 if we do so this means we are updating arr address in symbol table
    // which is not feasible
    cout << *ptr << endl;
    return 0;
}