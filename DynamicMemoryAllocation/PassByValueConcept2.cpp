#include <iostream>
using namespace std;

void update(int n) // pass by value hai->matlab ek nayi copy banegi original me no changes
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