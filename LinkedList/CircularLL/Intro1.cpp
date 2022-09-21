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

Node *insertNode(Node *tail, int element, int d)
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
    return tail;
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
void deleteNode(Node *&tail, int value)
{
    // emptyList
    if (tail == NULL)
    {
        cout << "List is empty,please check again" << endl;
        return;
    }
    else
    {
        // non-empty
        // assuming value is present in the linked list
        Node *prev = tail;
        Node *curr = prev->next;
        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        // 1 node LL
        if (curr == prev)
        {
            tail = NULL;
        }
        // 2 node LL
        else if (tail == curr)
        {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}
int main()
{
    Node *tail = NULL;
    tail = insertNode(tail, 5, 3); // iss 5 se mtlb nhi hai hu check kr rhe agar empty list hai toh chal rha ya nhi isilye abhi tail=NULL kia hai
    print(tail);
    tail = insertNode(tail, 3, 8); // mtlb 3 ke aage 8 ka node insert kr do
    print(tail);
    tail = insertNode(tail, 8, 7); // mtlb 8 ke aage 7 ka node insert kr do
    print(tail);
    tail = insertNode(tail, 7, 9); // mtlb 3 ke aage 8 ka node insert kr do
    print(tail);
    tail = insertNode(tail, 8, 6); // mtlb 3 ke aage 8 ka node insert kr do
    print(tail);
    // deleteNode(tail, 3);

    return 0;
}
