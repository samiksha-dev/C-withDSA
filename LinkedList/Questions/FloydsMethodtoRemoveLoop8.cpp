// approach-starting point ke ek node ke pehle waala ka link tod do mtlb usse null kr do
#include <iostream>
#include <map>
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
void insertNode(Node *&tail, int element, int d)
{
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        Node *curr = tail;
        while (curr != NULL)
        {
            curr = curr->next;
        }
        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}
Node *floydDetectLoop(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *slow = NULL;
    Node *fast = NULL;
    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
        if (slow == fast)
        {
            cout << slow->data; // or fast->data // this will give point of intersection
            return slow;        // or  return fast // this will give point of intersection
        }
    }
    return NULL;
}
Node *startingofLoop(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *intersection = floydDetectLoop(head);
    if (intersection == NULL)
    {
        return NULL;
    }
    Node *slow = head;
    while (slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}
void removeLoop(Node *head) // if Node * type ka hota
{
    if (head == NULL)
    {
        return; // if Node * type ka hota toh return NULL
    }
    Node *startingofLoop = startingofLoop(head);
    if (startingofLoop == NULL)
    {
        return; // or return head if Node * type ka hota
    }
    Node *temp = startingofLoop;
    while (temp->next != startingofLoop)
    {
        temp = temp->next;
    }
    temp->next = NULL;
    // return head if Node * type ka hota
}
int main()
{
    Node *tail = NULL;
    insertNode(tail, 8, 9);
    insertNode(tail, 9, 10);
    insertNode(tail, 10, 11);
    insertNode(tail, 11, 12);
    // print(tail);
    Node *start = startingofLoop(tail);
    cout << "loop starts at" << loop->data;
    removeLoop(head);
    print(head);
    // print(tail);
}