#include <iostream>
using namespace std;
// imp
int main()
{
    int arr[6] = {11, 21, 31};
    int *p = arr; // see yaha *p=&arr ke bina bhi chal jaega
    cout << p[2];
    return 0;
}