#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *a = &arr[0];
    cout << a << endl;
    char ch[6] = "abcde";
    cout << arr << endl; // so this will print address of 1st block
    cout << ch << endl;  // but this will print the array i.e output-abcde

    char *c = &ch[0];
    cout << c << endl; // this will also print entire character array
    // mtlb jb tk isko null character nhi milta yeh print karta jaega
    // so behind the scenes a temporary memory is created for abcde\0
    // and then a new memory id created and that ch content is copied

    char temp = 'z';
    char *t = &temp;
    cout << t << endl; // toh isko jb tk null nhi milega yeh print karta rahega
    return 0;
}