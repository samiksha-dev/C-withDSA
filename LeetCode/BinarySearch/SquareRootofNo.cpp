// this will give only integer part

#include <iostream>
using namespace std;
long long int squareroot(int n)
{
    int s = 0, e = n;
    long long int ans = -1;
    long long int mid = s + (e - s) / 2;
    // note since aisa ho skta hai ki mid*mid kahi range of int se bahar chala gaya toh code toh phat jaega
    // isliye long long int lia
    while (s <= e)
    {
        if ((mid * mid) > n)
        {
            e = mid - 1;
        }
        else if ((mid * mid) < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else if ((mid * mid) == n)
        {
            return mid;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    long long int no, root;
    cout << "Enter the no whose sqaure root has to be found";
    cin >> no;
    root = squareroot(no);
    cout << root;
    return 0;
}