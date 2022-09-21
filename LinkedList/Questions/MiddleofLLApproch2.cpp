// find middle of linked list // if length is odd for eg. 5 then middle will be 3
// Time complexity -O(n/2)[for cnt<ans since slow fast se aadha chal rha]=O(n)
// Space complexity=O(1)

// for solving we are using ki maan lo ek banda 1 sec me 2 m move kr rha aur dusra banda 1 sec me 1m move kar rha
// toh jb tk pehla banda end tak pahauchega tab tak dusra banda beech tak pahauchega

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
Node *middle(Node *&head)
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
    return slow;
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
    Node *mid = NULL;
    mid = middle(head);
    cout << mid->data;
}
