#include <iostream>
using namespace std;
class Node
{
public:
    Node *next;
    int data;
    int size;
    Node(int data)
    {
        this->data = data;
        Node *head = NULL;

        int size = 0;
    }
    void push(int data, Node *&head)
    {
        Node *temp = new Node(data);
        temp->next = head;
        size++;
        head = temp;
        cout << head->data;
    }
    int pop()
    {
        if (head == NULL)
        {
            cout << "Empty" return -1;
        }
        else
        {
            int res = head->data;
            head = head->next;
            size--;
            return res;
        }
    }
    int peek()
    {
        if (head == NULL)
        {
            cout << "Empty";
            return -1;
        }
        else
        {
            return head->data;
        }
    }
    bool isEmpty()
    {
        if (head == NULL)
            return 1;
        else
            return 0;
    }
    int size
    {
        return size;
    }
};
int main()
{
    Node *node1 = new Node(10);
    head = node1;
    push(10, head);
    push(10, head);
    push(10, head);
    push(10, head);
    return 0;
}