// Approach-we will check from 2nd list ki woh element kya 1st list ke 2 nodes ke beech aa skta hai agar aa jae toh daal do aur saare nodes ko update kar do
// i.e maan lo pehli list me 2 nodes prev and curr and doosri list me temp
// so if prev->data<=temo->data<=curr->data
// aur agar beeech me nhi aa rha toh aage badh jao

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
Node *solve(Node *first, Node *second)
{
    // if only one element is present in first linked list
    if (first->next == NULL)
    {
        first->next = second;
        return first;
    }
    Node *curr1 = first;
    Node *next1 = curr1->next;
    Node *curr2 = second;
    Node *next2 = curr2->next;
    while (next1 != NULL && curr2 != NULL)
    {
        if (curr1->data <= curr2->data && next1->data >= curr2->data)
        {
            // addition
            next2 = curr2->next;
            curr2->next = next1;
            curr1->next = curr2;
            // update pointers
            curr1 = curr2;
            curr2 = next2;
        }
        else
        {
            // curr1 and next1 ko aage badhana padega
            curr1 = next1;
            next1 = next1->next;
            if (next1 == NULL)
            {
                curr1->next = curr2;
                return first;
            }
        }
    }
    return first;
}
Node *sortLinked(Node *head1, Node *head2)
{
    if (head1 == NULL)
    {
        // 1st list is empty
        return head2;
    }
    if (head2 == NULL)
    {
        // 2nd list is empty
        return head1;
    }
    if (head1->data <= head2->data)
    { // isse yeh decide kr rhe ki chota kaunsa hai dono me se taaki aage ka program start kar sake
        return solve(head1, head2);
    }
    else
    {
        return solve(head2, head1);
    }
}
int main()
{
    Node *head1 = NULL;
    insertAtHead(head1, 1);
    insertAtHead(head1, 2);
    insertAtHead(head1, 5);
    print(head1);
    Node *head2 = NULL;
    insertAtHead(head2, 2);
    insertAtHead(head2, 4);
    insertAtHead(head2, 5);
    print(head2);
    Node *sorted = NULL;
    sorted = sortLinked(head1, head2);
    print(sorted);
    return 0;
}