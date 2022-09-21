#include <iostream>
using namespace std;
void update(int **p) // since pass by value ki trh create hua hai toh ek naya p2 bana hoga
{
    // p = p + 1; // note p=p+1 krne se koi change nhi aata na double pointer me na single pointer me
    //  when function  me pass karte hai since pass by value ki tarah pass hota hai aur ek naya block create hota hai
    //  isilye original me no change aur islye bhi kyunki p2=p2+1 mtlb
    //  ab p2 jo hai next memory ko point kr rha

    // *p = *p + 1; // this will work and change the value
    **p = **p + 1; // this will also work
}
int main()
{
    int i = 5;
    int *ptr = &i;
    int **ptr2 = &ptr;
    cout << "content of i is" << i << endl;
    cout << "content of i method 2 is" << ptr << endl;
    cout << "This will give same result as above two" << ptr2 << endl;
    cout << "------------------------------------------------------------------" << endl;

    update(ptr2);
    cout << "content of i" << i << endl;
    cout << "content of i method 2 is" << ptr << endl;
    cout << "This will give same result as above two" << ptr2 << endl;
    cout << "------------------------------------------------------------------" << endl;

    return 0;
}