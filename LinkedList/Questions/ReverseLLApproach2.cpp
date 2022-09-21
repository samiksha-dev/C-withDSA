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
// Recursive sol.
void reverse(Node *&head, Node *curr, Node *prev)
{
    if (curr == NULL)
    {
        head = prev;
        return;
    }
    Node *forward = curr->next;
    reverse(head, forward, curr);
    curr->next = prev;
}
Node *reverseLl(Node *&head)
{
    Node *curr = head;
    Node *prev = NULL;
    reverse(head, curr, prev);
    return head;
}
int main()
{
    Node *node1 = new Node(11);
    Node *head = node1;
    insertAtHead(head, 10);
    insertAtHead(head, 9);
    insertAtHead(head, 8);
    insertAtHead(head, 7);
    Node *newhead = new Node();
    newhead = reverseLl(head);
    print(newhead);
    return 0;
}