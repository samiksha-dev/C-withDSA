#include <iostream>
using namespace std;
// string in c++ is one dimensional character array
int main()
{
    char arr[10];
    cout << "Enter the string";
    cin >> arr;
    arr[2] = '\0';

    // if we gave input Samiksha
    // o/p=Sa
    // since \0 shows end of string
    cout << arr;
    // but note if we cin>> Samiksha Sahu
    // o/p=Samiksha
    //  since cin stops execution if it encounters space,tab,newline,enter for string

    return 0;
}