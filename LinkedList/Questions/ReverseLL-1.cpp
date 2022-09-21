#include <iostream>
using namespace std;

// Time complexity for this sol of reversing O(n)
// Space complexity for this sol of reversing O(n)
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
void insertAtHead(Node *&head, int d)
{
    Node *newNode = new Node(d);
    newNode->next = head;
    head = newNode;
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
Node *reverseLinkedList(Node *head)
{
    if (head == NULL || head->next == NULL)
    { // for empty and one node Linked list

        return head;
    }
    Node *prev = NULL;
    Node *curr = head;
    Node *forward = NULL;
    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}
int main()
{
    Node *node1 = new Node(11);
    Node *head = node1;
    insertAtHead(head, 10);
    insertAtHead(head, 9);
    insertAtHead(head, 8);
    insertAtHead(head, 7);
    print(head);
    Node *newhead = NULL;
    newhead = reverseLinkedList(head);
    print(newhead);
    return 0;
}