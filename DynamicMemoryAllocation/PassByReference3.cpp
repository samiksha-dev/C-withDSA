#include <iostream>
using namespace std;

void update(int &n) // this  is pass by refernce ab copy nhi banegi same memory ko dono point krnge
// aur koi changes huyw toh woh original me bhi ho jaenge
{
    n++;
}
int main()
{
    int n = 5;
    cout << "Before n" << n << endl;
    update(n);
    cout << "After n" << n << endl;
    return 0;
}