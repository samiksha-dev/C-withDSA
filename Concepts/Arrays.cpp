#include <iostream>
using namespace std;

int main()
{
    //1st type to declare
    int marks[4] = {32, 56, 79, 90};
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;

    //2nd way
    int roll[] = {1, 4, 2, 5, 7};
    cout << roll[0] << endl;
    cout << roll[1] << endl;
    cout << roll[2] << endl;
    cout << roll[3] << endl;
    cout << roll[4] << endl;

    //3rd way
    int mathMarks[4];
    mathMarks[0] = 88;
    mathMarks[1] = 90;
    mathMarks[2] = 83;
    mathMarks[3] = 77;
    cout << mathMarks[0] << endl;
    cout << mathMarks[1] << endl;
    cout << mathMarks[2] << endl;
    cout << mathMarks[3] << endl;

    //while loop for printing
    int i = 0;
    while (i > 4)
    {
        cout << "The value of marks is" << marks[i] << endl;
        i + 1;
    }
    return 0;
}