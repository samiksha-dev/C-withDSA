// int arr[5]={0} means {0,0,0,0,0}
// but int arr[5]={1} means {1,0,0,0,0}

#include <iostream>
#include <array>
using namespace std;
int main()
{
    // if we define an array inside int main and do not initialise it it takes garbage value
    // but if we define an array above int main or globally and donot initialise it it takes 0
    // but if we define array inside int main of size 5 but iniltialise only 3 values then others will take 0
    // i.e array<int,5> arr={1,5} means arr={1,5,0,0,0}
    array<int, 4> a = {1,
                       2,
                       3,
                       4};
    int size = a.size();           // Method to find size of stl array
    for (int i = 0; i < size; i++) // or for(auto it:arr,begin();it!arr.end();it++)//here auto means jaise bhi data type hoga woh ye automatically le lega
    {                              // cout<<*it<<endl;
        cout << a[i] << endl;      // or cout<<a.at(i)<<endl
    }
    array<int, 4> arr;
    arr.fill(10); // it fills every element as 10
    for (int i : arr)
    {
        cout << i;
    }
    array<int, 4> arr2 = {1, 4, 2, 12};
    // All operations are done in O(1)

    // M-2 to access elements;
    cout
        << "element at 2nd index" << a.at(2) << endl;

    // to check whether array is empty or not
    cout << "Is the array empty -->" << a.empty() << endl;

    // to check first element
    cout << "The first element is " << a.front() << endl;

    // to check last element
    cout << "The last element is " << a.back() << endl;

    // begin()-points to the first element
    // rbegin()-points to the last element
    // end()-points to element right after the end element
    // rend()-points to the element right before the first element

    // Reversing-M-1
    for (auto it1 = arr2.rbegin(); it1 != arr2.rend(); it1++) // auto bana doge toh alag se iterator banane ki zaroorat nahi hai
    {
        cout << *it1 << endl;
    }
    array<int, 4> arr3;
    for (int i = 0; i < arr3.size(); i++)
    {
        int elements;
        cin >> elements;
        arr3[i] = elements;
    }
}
