#include <iostream>
using namespace std;

int main()
{
    int *p = 0; // null pointer
    int first = 110;
    *p = first; // error aaega since we write *p=&i
    cout << *p < endl;
    return 0;
}