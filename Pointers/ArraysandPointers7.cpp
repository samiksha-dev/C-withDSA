#include <iostream>
using namespace std;

int main()
{
    int arr[4] = {1, 9, 23, 89};
    // arr[2] means *(arr+2)
    // assume address of arr i.e address of 1st memory block is 710
    // therefore *(arr+2)=*(710+2)=>*(710+4+4) since int takes 4 bytes or 2 bytes depending
    // upon the compiler therefore *(718)=23
    cout << *(arr + 2);

    // NOTE
    // arr[i]=*(arr+i)
    // or
    // i[arr]=*(i+arr)
    int i = 3;
    cout << i[arr];
    return 0;
}