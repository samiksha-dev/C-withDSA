#include <iostream>
using namespace std;

int main()
{
    char name[10];
    cout << "Enter the name";
    cin >> name;
    int i = 0, count = 0;
    while (name[i] != '\0')
    {
        count++;
        i++;
    }
    // M-2 for(int i=0;name[i]!='\0';i++){
    // count++;
    // }
    cout << count;
    return 0;
}