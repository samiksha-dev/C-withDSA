#include <iostream>
using namespace std;
// Time complexity-O(n)+O(n)=O(n) since do while loop hai
// space complexity=O(1)

// here we did kind of data replacement
// matlab count kia pehle kitne 0 kitne 1 kitne 2 uske baad data ko replace krte gye

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
void insertAtHead(Node *&head, int data)
{
    if (head == NULL)
    {
        return;
    }
    Node *newNode = new Node(data);
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
Node *sort(Node *head)
{
    int zeroCount = 0;
    int onesCount = 0;
    int twosCount = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == 0)
        {
            zeroCount++;
        }
        else if (temp->data == 1)
        {
            onesCount++;
        }
        else if (temp->data == 2)
        {
            twosCount++;
        }
        temp = temp->next;
    }
    temp = head;
    while (temp != NULL)
    {
        if (zeroCount != 0)
        {
            temp->data = 0;
            zeroCount--;
        }
        else if (onesCount != 0)
        {
            temp->data = 1;
            onesCount--;
        }
        else if (twosCount != 0)
        {
            temp->data = 2;
            twosCount--;
        }
        temp = temp->next;
    }
    return head;
}
int main()
{
    Node *node1 = new Node(0);
    Node *head = node1;
    insertAtHead(head, 0);
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    insertAtHead(head, 0);
    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    print(head);
    Node *sorted = NULL;
    sorted = sort(head);
    print(sorted);
}