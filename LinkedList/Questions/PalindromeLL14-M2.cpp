// Approach-Find Middle of Linked list
// Reverse linked list after that middle point
// then compare both halves
// uske baad jo reverse kia tha usse waapas sahi kar do
// Time coplexity=O(n)
// space complexity =O(1)

#include <iostream>
using namespace std;
#include <vector>

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
void insertAtHead(Node *&head, int d) // hume copy nhi banani islye &(pass by reference kara)
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
Node *getMid(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    // if(head->next->next==NULL){
    //     return head->next;
    // }
    Node *fast = head->next;
    Node *slow = head;
    while (fast != NULL)
    {
        // hum fast ko 2 aage badhaenge aur slow ko 1
        fast = fast->next;
        if (fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
    }
    return slow;
}
Node *reverse(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *chotaHead = reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return chotaHead;
}
bool isPalindrome(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return true;
    }
    // step1-find middle
    Node *middle = getMid(head);
    // step2-rverse 2nd portionof linked list
    Node *temp = middle->next;
    // for merging the reverse portion of linked list to first part
    middle->next = reverse(temp);

    // step-3 compare both halves
    Node *head1 = head;
    Node *head2 = middle->next;
    while (head2 != NULL)
    {
        if (head2->data != head1->data)
        {
            return 0;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    // step4-repeat step 2(bs jaisi list aai thi waise krne ke liye)(Optional)
    temp = middle->next;
    middle->next = reverse(temp);

    return 0;
}
int main()
{
    Node *node1 = NULL;
    Node *head = node1;
    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    print(head);
    cout << reverse(head);
}