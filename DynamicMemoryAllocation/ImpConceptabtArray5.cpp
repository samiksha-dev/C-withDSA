#include <iostream>
using namespace std;
int getSum(int *arr, int n) // or int arr[]
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    // int n;
    // cout << "Input size of array" << endl;
    // cin >> n;
    // int arr[n];
    // // this way of giving array a size is a bad practice
    // since we are trying to give the size at run time
    // whereas we should give size at the compile time
    // since when a program starts it brings two memories with it
    // Stack and Heap Memory
    // Stack memory is small and is dependent on variables or size(eg. int n=10,int arr[10],char ch) given  at compile time
    // Heap is a big memory
    // so if we give array size at run time then stack memory will not be able to adjust itself or it may not have so large memory and program may crash
    // therefore if we dont know the size we should make a large size array for eg. int arr[1000]
    // so when we use stack memory it is static allocation

    // now if you want to make a variable size array you can use heap memory-when we use heap memory it is dynamic memory allocation
    // for using heap mempry we use new keyword

    // new char-this is the way we use heap memory here we cannot write new char ch that is name is not allowed
    // new char line returns an address
    // to use this
    // we write char *ch=new char;-->since ptr can store the address
    // internal working will be that pointer will be created in stack wit 8 byte or 4 byte depending upon the compiler
    //  and new char will be created in heap which will take 1 byte since char
    // therefore in total 9 bytes is used
    int *arr = new int[5];
    // so total size will be 5*4=20 in heap and 4 or 8 of pointer in stack therefore total will be 28

    // variable sized array
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i > n; i++)
    {
        cin >> arr[i];
    }
    cout << getSum(arr, n) << endl;
    return 0;
}