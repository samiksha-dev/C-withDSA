// structure is a data type where we can store int ,char ,string,double etc
#include <iostream>
using namespace std;

struct node
{
    string str;
    int num;
    double doub;
    char x;
    int arr[];

    // this is a constructore
    node(str_, num_, doub_, x_)
    {
        str = str_;
        num = num_;
        doub = doub_;
        x = x_;
        arr = arr[] _;
    }
};
int main()
{
    node samiksha = new node("shashwat", 79, 91.0, "");
    return 0;
}