#include <iostream>
using namespace std;

// Approach=agar curr aur curr->next ka data equal hai toh curr->next ko delete kro aur curr ko phir curr->next->next se connect krwa do
// agar equal nhi hai toh bs curr ko aage badha do

// Time complexity=O(n)
// Space complexity=O(n)
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
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory with " << data << "is free now" << endl;
    }
};
void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
Node *removeDuplicates(Node *head)
{
    // empty list
    if (head == NULL)
    {
        return NULL;
    }
    Node *curr = head;
    while (curr != NULL)
    {
        if ((curr->next != NULL) && curr->data == curr->next->data)
        {
            Node *next_next = curr->next->next;
            Node *nodeToDelete = curr->next;
            delete (nodeToDelete);
            curr->next = next_next;
        }
        else
        {
            curr = curr->next;
        }
    }
    return head;
}

int main()
{

    Node *head = NULL;
    insertAtHead(head, 11);
    insertAtHead(head, 11);
    insertAtHead(head, 12);
    insertAtHead(head, 12);
    insertAtHead(head, 13);
    print(head);
    Node *final = NULL;
    final = removeDuplicates(head);
    print(final);
    return 0;
}