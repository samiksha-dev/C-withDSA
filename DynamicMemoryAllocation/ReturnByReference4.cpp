#include <iostream>
using namespace std;
int &fun(int a)
{
    int num = a;
    int &ans = num;
    return ans;
}
// the above code is not a good practice since all the variables mentioned
// inside have a local scope toh iss function ke baad toh memoryy hi deallocate ho jaegi
// dont do this
int main()
{

    return 0;
}