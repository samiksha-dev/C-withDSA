// approach we are creating 3 ll for 0,1,2//we are changing links here
// we create a dummy node for 0,1,2
// for eg. we created dummy node for 0 and then attached all the zeros of the LL
// then we created a dummy node for 1 and then attached all the ones of the LL
// then we created a dummy node for 2 and then attached all the twos of the LL

// Time complexity of line 71-87  is O(n)
// tc of 90-94-O(1)
// TC of 96-102-O(1)
// TC of left is also O(1)
// therefore O(n)+O(1)+O(1)+O(1)=O(n)

// Spac complexity-O(1)
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
void insertAtHead(Node *&head, int data)
{
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}
void print(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insertAtTail(Node *&tail, Node *curr)
{
    tail->next = curr;
    tail = curr;
}

Node *sort(Node *&head)
{
    // dummy nodes
    Node *zeroHead = new Node(-1);
    Node *onesHead = new Node(-1);
    Node *twosHead = new Node(-1);
    // Nodes for merging three linked list
    Node *zeroTail = zeroHead;
    Node *oneTail = onesHead;
    Node *twosTail = twosHead;
    // Node for traversal
    Node *curr = head;
    // creating of 3 seperate list of 0's,1's and 2's
    while (curr != NULL)
    {
        int value = curr->data;
        if (value == 0)
        {
            insertAtTail(zeroTail, curr);
        }
        else if (value == 1)
        {
            insertAtTail(oneTail, curr);
        }
        else if (value == 2)
        {
            insertAtTail(twosTail, curr);
        }
        curr = curr->next;
    }
    // merging the 3 list
    if (onesHead->next != NULL)
    {
        // 1's list is non-empty
        zeroTail->next = onesHead->next;
    }
    else

    {
        // 1's list is empty

        zeroTail->next = twosHead->next;
    }

    oneTail->next = twosHead->next;
    twosTail->next = NULL;
    // setting up head
    head = zeroHead->next;
    // delete dummy nodes
    // delete zeroHead;
    // delete onesHead;
    // delete twosHead;
    return head;
}
int main()
{
    Node *node1 = new Node(0);
    Node *head = node1;
    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 0);
    insertAtHead(head, 1);
    print(head);
    Node *sorted = NULL;
    sorted = sort(head);
    print(sorted);
    return 0;
}