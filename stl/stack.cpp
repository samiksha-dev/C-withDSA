// stack-LIFO
#include <stack>
#include <iostream>
using namespace std;

int main()
{
    stack<string> s1;
    s1.push("Jainendra");
    s1.push("Neelam");
    s1.push("Samiksha");
    s1.push("Shashwat");
    cout << "Top element" << s1.top() << endl;
    s1.pop();
    cout << "Top element" << s1.top() << endl;
    cout << "Empty or not->" << s1.empty();
    return 0;
}