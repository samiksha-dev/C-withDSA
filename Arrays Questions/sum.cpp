#include <iostream>
using namespace std;
int sum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int main()
{
    int size, s;
    cout << "Enter the size"; // but aise size dena is a wrong practice chaaho toh bada array le lo bt aise mt dena
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    s = sum(arr, size);
    cout << s;
    return 0;
}