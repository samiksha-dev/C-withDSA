#include <iostream>
using namespace std;
// Print reverse counting
void printRevNo(int n, int i)
{
    if (n > i || n == i)
    {
        cout << n << " ";
    }
    printRevNo(n - 1, i);

    return;
}
int main()
{
    int n;
    cout << "Enter the count";
    cin >> n;
    printRevNo(n, 1);
    return 0;
}

// M-2
//  void counting(int n)
//  {
//      if (n == 0)
//      {
//          return;
//      }
//      cout << n << endl;
//      counting(n - 1);
//      // printing 5 4 3 2 1
//      // this is tail recursion
//  }
//  int main()
//  {
//      int n;
//      cout << "Enter the no.";
//      counting(n);
//      return 0;
//  }

// M-3
// void printRevNo(int i, int n)
// {
//     if (i < 1)
//         return;

//     cout << i << " ";

//     printRevNo(i - 1, n);

//     return;
// }

// int main()
// {
//     int n;
//     cout << "Enter the count";
//     cin >> n;
//     printRevNo(n, n);

//     return 0;
// }
