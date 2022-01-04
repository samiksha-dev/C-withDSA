#include <iostream>
using namespace std;

int main()
{
    // address(new)=address(old)+i*sizeof(datatype)
    int arr[4] = {23,
                  34,
                  45,
                  21};
    int *p = arr;
    cout << *(p++) << endl;
    cout << *p << endl;
    cout << "The value of arr[0]" << *p << endl;
    cout << "The value of arr[1]" << *(p + 1) << endl;
    cout << "The value of arr[2]" << *(p + 2) << endl;
    cout << "The value of arr[3]" << *(p + 3);
    return 0;
}