// find middle of linked list // if length is odd for eg. 5 then middle will be 3
// Time complexity -O(n)[for finding length]+O(n/2)[for cnt<ans since ans=length/2]=O(n)+O(n)=2O(n)=O(n)

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
void InsertNodeAtHead(Node *&head, int d) // hume copy nhi banani islye &(pass by reference kara)
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
int findLength(Node *head)
{
    Node *temp = head;
    int length = 0;
    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }
    return length;
}

int main()
{
    Node *node1 = new Node(6);
    Node *head = node1;
    InsertNodeAtHead(head, 7);
    InsertNodeAtHead(head, 8);
    InsertNodeAtHead(head, 9);
    InsertNodeAtHead(head, 10);
    InsertNodeAtHead(head, 11);
    InsertNodeAtHead(head, 12);
    print(head);
    int length = findLength(head);
    int ans = length / 2; // agr sirf position bolta toh length/2+1
    int cnt = 0;
    Node *temp = head;
    while (cnt < ans)
    {
        temp = temp->next;
        cnt++;
    }
    cout << temp->data;
}
