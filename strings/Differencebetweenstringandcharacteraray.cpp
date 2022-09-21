#include <iostream>
using namespace std;
#include <cstring>
// character array is terminated by '\0'
// whereas string is just a data type

/\/\/\/\/\ /\
// for input of array with spaces-i.e either char arr[10] or string s we can use getline
    // since cin terminates with space,tab and '\n'
    // for character array in getline you need to give length but for string not needed
    /\/\/\/\/\/

    // for character array we have methods-
    // strcpy(string1, string2);
    // The two parameters to the function, string1 and string2, are strings.
    //  The function will copy the string string2 into the string 1.
    /\/\/\/\/\ /\
//strcat()
               // This is the string concatenate function. It concatenates strings.
               // Syntax:strcat(string1, string2);
    /\/\/\/\/\ /\
//strlen()
               // This is the string length function. It returns the length of the string passed to it as the argument.
    // Syntax:strnlen(string1)
    /\/\/\/\/\ /\
// strcmp(string1, string2);
               // The above function will return 0 if strings string1 and string2 are similar,
               //  less than 0 if string1<string2 and greater than 0 if string1>string2.

    /\/\/\/\/\/ // we can use str.length() for character array as well as string
                // but we can use strlen(str) only for character array
    /\/\/\/\/\/ // character array are pass by reference that is things are changed in original string
                // but for string this is not the case

    int main()
{
    // char arr[10];
    // cout << "Enter the character array";
    // cin.getline(arr, 10);
    // cout << arr;

    // cout << strlen(arr);
    cout << "Enter the string";
    string str;
    getline(cin, str);
    cout << str.length();

    return 0;
}