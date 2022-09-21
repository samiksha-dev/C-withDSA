// circular linked list is just like a singly linked list only difference is that the last node does not point to null but points to first node

// circularly doubly linked list is same as doubly linked list only difference is that last node points to first node and first node's prev points to last node
// in circulary linked list we do not really need head we can do things with tail
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
            next = NULL;
        }
        cout << "memory is free for node with data" << value << endl;
    }
};

void *insertNode(Node *&tail, int element, int d)
{

    // element woh hai jiske aage hum naya node daal rhe

    // empty list
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    // list is not empty
    else
    {
        Node *curr = tail; // isse hum woh node find krenge jiske aage naya node daalna hai abhi ke liye woh tail hai
        while (curr->data != element)
        {
            curr = curr->next; // tohh isse hum uss position pe pahauch jaenge jaha hume naya node daalna hai
        }
        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
        if (curr->data == tail->data)
        {
            tail = temp;
        }
    }
}
void split(Node *head)
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
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
    }

    cout << "First list";
    Node *head1 = head;
    while (head1 != slow->next)
    {
        cout << head1->data << " ";
        head1 = head1->next;
    }
    cout << endl;
    cout << "Second list";

    Node *head2 = slow->next;
    while (head2 != fast)
    {
        cout << head2->data << " ";
        head2 = head2->next;
    }
}
void print(Node *tail)
{
    Node *temp = tail; // since hum aise check krenge ki jaise hi tail pe dobara aae print krna band kr do
                       // empty list
    if (tail == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    do // yeh islye kia ki agr element ho toh woh ek element to print ho hi
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}
int main()
{
    Node *tail = NULL;
    insertNode(tail, 5, 3); // iss 5 se mtlb nhi hai hu check kr rhe agar empty list hai toh chal rha ya nhi isilye abhi tail=NULL kia hai
    print(tail);
    insertNode(tail, 3, 8); // mtlb 3 ke aage 8 ka node insert kr do
    print(tail);
    insertNode(tail, 8, 7); // mtlb 8 ke aage 7 ka node insert kr do
    print(tail);
    insertNode(tail, 7, 9); // mtlb 3 ke aage 8 ka node insert kr do
    print(tail);
    insertNode(tail, 8, 6); // mtlb 3 ke aage 8 ka node insert kr do
    print(tail);
    // deleteNode(tail, 3);
    split(tail);

    return 0;
}
