#include <iostream>
using namespace std;
void print(int *p)
{
    cout << p << endl;
    cout << *p << endl;
}
void update(int *p) // pass by value
{
    p = p + 1;
    *p = *p + 1;

    cout << "Inside p" << p << endl;
}
int getSum(int arr[], int n)
{
    cout << "Size:" << sizeof(arr); // toh note jb hum array pass krte hai behind the scene
    // pointer jaa raha hota hai mtlb int arr[] is same as int *arr when we pass array
    // islye iska output 4 aaya warna arr ka output oth 5*4=20 aana chahye tha
    // so benefits yeh hai ki we can send part of array
    // for eg. hume 3rd location se array bhejni hai toh bs arr+3 send kr do
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int value = 5;
    int *p = &value;
    print(p);

    cout << "Before p" << *p << endl;
    update(p);
    cout << "After p" << *p << endl;
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Sum is" << getSum(arr, 5);
    return 0;
}