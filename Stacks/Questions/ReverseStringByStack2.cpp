#include <iostream>
using namespace std;
class Stack
{
public:
    string *arr;
    int size;
    int top;
    Stack()
    {
        top = -1;
        arr = new int[size];
    }
    void push(int element)
    {
        if (size - top > 1)
        {
            arr[top] = element;
            top++;
        }
        else
        {
            cout << "stack overflow";
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            string ans = "";
            ans = arr[top];
            cout << "Popped element" << ans;
            top--;
        }
        else
        {
            cout << "stack underflow";
        }
    }
};
int main()
{
    Stack s(5);
    s.push('l');
    s.push('o');
    s.push('v');
    s.push('e');
    s.pop();
}