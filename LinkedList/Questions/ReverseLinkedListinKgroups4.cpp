// You are given a linked list of 'N' nodes and an integer 'K'. You have to reverse the given linked list in groups of size K i.e if the list contains x nodes numbered from 1 to x, then you need to reverse each of the groups (1,K),(K+1,2*K), and so on.
// For example, if the list is [1, 2, 3, 4, 5, 6] and K = 2, then the new list will be [2, 1, 4, 3, 6, 5].
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
Node *kreverseLinkedList(Node *head, int k)
{
    if (head == NULL)
    { // for empty and one node Linked list

        return NULL;
    }
    // step-1 reverse first k nodes
    Node *forward = NULL;
    Node *curr = head;
    Node *prev = NULL;
    int cnt = 0;
    while (curr != NULL && cnt < k)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        cnt++;
    }
    // step 3:Recursion aage ka dekh lega
    if (forward != NULL)
    {
        head->next = kreverseLinkedList(forward, k);
    }
    // step-3 return head of reverse linked list
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
    newhead = kreverseLinkedList(head, 2);
    print(newhead);

    return 0;
}