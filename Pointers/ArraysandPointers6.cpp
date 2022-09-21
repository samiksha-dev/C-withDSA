#include <iostream>
using namespace std;
// for array address of 1st block or arr[0] address is given by arr
int main()
{
    int arr[10];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << "Address of first memory block is" << arr << endl;
    // or
    cout << "Address of first memory block is" << &arr[0] << endl;
    //===============================================================================
    cout << "Value at " << *arr << endl;
    // or
    cout << "Value at" << arr[0];
    //=======================================================================================
    cout << "Incremented value" << *arr + 1 << endl;
    // or
    cout << (*arr) + 1 << endl;
    //========================================================================================
    cout << *(arr + 1);
    return 0;
}