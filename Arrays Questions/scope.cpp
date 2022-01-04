#include <iostream>
using namespace std;
void update(int arr[], int size)
{
    arr[0] = 120;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
}
int main()
{
    int arr[3] = {1, 2, 3};
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i];
    }
    update(arr, 3);
    return 0;
}

// note ab hume laga hoga ans aega
// 120 2 3
// 1 2 3
// but alag aaya since jb hum sirf variable ke saath kaam karte hai toh ek copy banata hai function
// toh agar koi change function me uss value pe karenge woh main me change nhi hoti
// but yaha toh ho gyi
// woh islye since in array we pass  address of 1st element of array
// mtlb koi change kroge function me toh original main me bhi change hoga