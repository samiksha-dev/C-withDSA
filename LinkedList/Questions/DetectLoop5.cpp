#include <iostream>
#include <map>
using namespace std;
// Approach-map ka use krke hum check kr le ki kya woh node visited hai agr hai toh true mark akro aur aage traverse kro
// agar same node pe aa gye toh dekhega are yeh toh already true marked hai iska mtlb loop hai

// space complexity-O(n)

// time complexity-O(n)
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
void print(Node *tail)
{
    Node *temp = tail; // since hum aise check krenge ki jaise hi tail pe dobara aae print krna band kr do
    // empty list
    if (tail == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }

    do
    // yeh islye kia ki agr element ho toh woh ek element to print ho hi
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}
bool detectLoop(Node *head)
{
    if (head == NULL)
    {
        return false;
    }
    map<Node *, bool> visited;
    Node *temp = head;
    while (temp != NULL)
    {
        if (visited[temp] == true) // iska mtlb loop hai
        {
            cout << temp->data << endl; // isse pata chal jaega kaha se loop shuru hua hai
            return true
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}
int main()
{
    Node *tail = NULL;
    insertNode(tail, 5, 3);
    print(tail);
    insertNode(tail, 3, 5);
    print(tail);
    insertNode(tail, 5, 7);
    print(tail);
    insertNode(tail, 7, 9);
    print(tail);

    return 0;
}