#include <iostream>
using namespace std;

int main()
{
    int num = 19;
    double num2 = 10.9;
    double *d = &num2;
    int *p = &num;
    int *q = p;
    cout << "Address of d is" << d << endl;
    cout << p << "-" << q << endl;
    cout << *p << "-" << *q << endl;
    cout << (*p)++ << endl; // this means *p=*p+1 mtlb jo value hai jis address pe p point kr rhe usse ek se increment kar do
    p = p + 1;              // or p++ //iska matlab ki address me +4 ho jaega since int hai ya keh skte ho agle integer pe chala jaega
                            // for eg. initially it was at 100 now it will go to 104
    d = d + 1;              // agle double pe chala jaega
    cout << "Address after is" << p << endl;
    cout << "Address after is" << d; // for eg initially it was at 100 so now it will go to 108 i.e it will point to next location of same type

    return 0;
}