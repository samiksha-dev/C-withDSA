// this will give ans with decimal

#include <iostream>
using namespace std;

int fullSqrt(int n)
{
    int s = 0, e = n;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if ((mid * mid) < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else if ((mid * mid) > n)
        {
            e = mid - 1;
        }
        else if ((mid * mid) == n)
        {
            return mid;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double morePrecision(int n, int precision, int tempSol)
{
    double factor = 1;
    double answer = tempSol;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = answer; j * j < n; j = j + factor)
        {
            answer = j;
        }
    }
    return answer;
}
int main()
{
    int no;
    int root;
    cout << "Enter the no. whose sqaure root has to be found";
    cin >> no;
    root = fullSqrt(no);

    cout << "Answer is" << morePrecision(no, 3, root) << endl;
    return 0;
}