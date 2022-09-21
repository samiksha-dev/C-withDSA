// for eg we are at a point and we need to reachh our home
// let say home is at 10th step
#include <iostream>
using namespace std;
void reachHome(int src, int dest)
{
    cout << "Source is" << src << " "
         << "Destination is" << dest << endl;
    if (src == dest)
    {
        cout << "Ghar pahauch gayi" << endl;
        return;
    }
    src++;
    reachHome(src, dest); // ofr eliminate line 14 and do reachHome(++src,dest)
}
int main()
{
    int dest = 10;
    int src = 1;
    reachHome(src, dest);
    return 0;
}