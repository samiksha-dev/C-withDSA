#include <iostream>
using namespace std;
// imp
int main()
{
    // dont get confuse ki pointerr ko assign karna zarrori hai
    int arr[] = {11, 12, 13, 14, 15};
    cout << *(arr) << " " << *(arr + 3);
    return 0;
}