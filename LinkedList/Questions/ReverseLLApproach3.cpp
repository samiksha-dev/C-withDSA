#include <iostream>
using namespace std;

// Time complexity for this sol of reversing O(n)
// Space complexity for this sol of reversing O(n)
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
void insertAtHead(Node *&head, int d)
{
    Node *newNode = new Node(d);
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

// eg. 3 5 7 9
// so hum 3 ke liye kaam kr lenge baaki recursion krke de dega

//  Recursive sol.
Node *reverse(Node *&head)
{
    // base case
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *chotaHead = reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return chotaHead;
}
Node *reverseLl(Node *&head)
{
    return reverse(head);
}
int main()
{
    Node *node1 = new Node(11);
    Node *head = node1;
    insertAtHead(head, 10);
    insertAtHead(head, 9);
    insertAtHead(head, 8);
    insertAtHead(head, 7);
    Node *newhead = NULL;
    newhead = reverseLl(head);
    print(newhead);
    return 0;
}