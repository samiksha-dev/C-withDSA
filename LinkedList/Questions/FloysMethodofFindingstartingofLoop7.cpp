// jaise hi point of intersection mila pichle ques se waise hii slow ko waapas head pe le gye aur phir slow aur fast(or point of intersection) ko ek
// ek kadam chalaya jaha dono mile dobara woh starting point hua

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
    // print(tail);
}