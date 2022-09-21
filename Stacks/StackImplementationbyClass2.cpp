// stack can be implemented in two ways
// array and linked list

// for array implementation we need a top which will tell whether stack has space or not
// initially top=-1
// then we need an array therefore int *arr
// then we need size to obviously check whether stack has space for insertion or not
// Insertion implementtation
// we will first check stack has space or not
// if it has we will do top++ so now top=0;
// then we will do arr[top]=element
// if space is not available we cant push

// how to pop
// first we need to check whether the element is present or not
// to find we can check top>=0 because top=-1 toh abhi dekha matlab hota hai empty hai stack

// how to check whether stack is empty
// if top=-1 then it is empty
// if top!=-1 and not top< size toh bs arr[top] is the top element

// so all the operations have Time complexity=O(1)
#include <iostream>
using namespace std;
class Stack
{
public:
    int *arr;
    int top;
    int size;
    // Stack behaviour
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element)
    {
        if (size - top > 1) // mtlb 1 space toh khaali hai{
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack overflow" << endl;
        }
    }
    void pop()
    // ya bol skte ho if(top==-1)
    // underflow
    //  else
    //  int ans = arr[top];
    //          cout << "Popped element is" << ans << endl;
    //          top--;
    {
        if (top >= 0)
        {
            int ans = arr[top];
            cout << "Popped element is" << ans << endl;
            top--;
        }
        else
        {
            cout << "Stack underflow";
        }
    }
    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty";
            return -1;
        }
    }
    bool isEmpty()
    {
        if (top == -1)
            return true;
        else
            return false;
    }
};
int main()
{
    Stack st(5);
    st.push(22);
    st.push(44);
    st.push(66);
    st.push(22);
    st.push(44);
    st.push(66); // 5 size ka hai 6 daal rhe stack overflow ho gaya
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    if (st.isEmpty())
    {
        cout << "Stack is empty";
    }
    else
    {
        cout << "Stack is not empty";
    }
}
