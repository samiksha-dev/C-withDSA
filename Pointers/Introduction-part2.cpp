#include <iostream>
using namespace std;

int main()
{
    // Always initialise your pointer at the time of declaration nhi pata toh zero se kr do
    // since if you will not initilaise itt will store garbage address which is a bad practice

    // pointer to int is created,and pointing to some garbage address
    int *p = 0;
    cout << "sjaahdaj" << *p << endl; // generally it gives segmentation fault
    return 0;
}