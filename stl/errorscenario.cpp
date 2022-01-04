// #include <iostream>
// using namespace std;

// int main()
// {
//     int val = 50;
//     double val = 50;
//     cout < val;
//     return 0;
// }
// this will give error since same variable hai aur diiff. data type

// to aoid error
#include <iostream>
using namespace std; // we use this so that we dont always write std::cout
namespace samiksha
{
    int val = 50;
    int getVal()
    {
        return val * 10;
    }
}
int main()
{
    double val = 10.0;
    cout << val;
    cout << samiksha::val << endl;
    cout << samiksha::getVal << endl;
}