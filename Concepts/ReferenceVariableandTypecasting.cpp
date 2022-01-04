//to access global variables we can use :: kisi bhi block me local scope hi kaam krta hai
#include <iostream>
using namespace std;
int c = 90;
int main()
{
    int a = 3, b = 4, c = 10, sum = 0;
    cout << "Sum of a+c is" << a + c;
    cout << "Global c is" << ::c;
    //Note 34.4 is by default considered as double
    //therefore if you want a float no. then write 34.4f
    float d = 34.4f;       //capital F bhi chalega
    long double e = 34.4l; //capital L bhi chalega
    cout << "The value of d is" << d << endl
         << "The value of e is" << e << endl;

    //***************Reference Variables******************
    float x = 455;
    float &y = x;
    cout << x << endl;
    cout << y;

    //**************Type Casting**********************************
    int p = 45;
    float q = 45.46;
    cout << "The value of p is" << float(p);
    cout << "the value of q is" << (int)q << endl;
    int r = int(q);
    cout << "Value of r is" << r;

    cout << "The expression is" << p + q << endl;
    cout << "The expression is" << p + int(q) << endl;
    cout << "The expression is" << p + (int)q << endl;
}