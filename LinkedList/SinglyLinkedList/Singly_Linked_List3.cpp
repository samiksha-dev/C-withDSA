#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void InsertNodeAtHead(Node *&head, int d) // hume copy nhi banani islye &(pass by reference kara)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void InsertNodeAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *node1 = new Node(10);
    // cout << node->data << endl;
    // cout << node->next << endl;

    // Head pointed to node1
    Node *head = node1;
    print(head);
    InsertNodeAtHead(head, 12);
    print(head);
    InsertNodeAtHead(head, 15);
    print(head);

    // Insertion at Tail
    Node *tail = node1; // if ek hi node hai toh head tail ussi ko point krnge
    InsertNodeAtTail(tail, 20);
    print(head);
    return 0;
}