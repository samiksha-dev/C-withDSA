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

void InsertNodeAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node *&tail, Node *&head, int position, int d)
{
    Node *temp = head;
    int cnt = 1;
    if (position == 1) // agar pehli position pe daalne bola toh
    {
        InsertNodeAtHead(head, d);
        return;
    }
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    // agar last position pe insert karne bol dia toh
    if (temp->next == NULL)
    {
        InsertNodeAtTail(tail, d);
        return;
    }
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
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
    insertAtPosition(tail, head, 2, 14);
    print(head);
    insertAtPosition(tail, head, 1, 100);
    print(head);

    return 0;
}