#include <iostream>
using namespace std;

int *funct(int n)
{
    int *ptr = &n;
    return ptr;
}
// the above method is a bad practice since all the variables
// mentioned inside are local iss function ke bahar aate hi saare variables ka scope khatam
// islye dont use
int main()
{
    func(6);
    return 0;
}