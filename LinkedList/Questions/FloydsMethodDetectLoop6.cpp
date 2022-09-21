// concept-we will have one slow and one fast slow moves once and fast moves twice at the same time.At any point when
// position of fast and slow are same we say loop is present and if fast==Null no loop

// time complexity-O(n)
// space complexity-O(1)

// it works since har iteration me inke beech ka distance kam hote jaa raha
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
Node *floyddetectloop(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *slow = NULL;
    Node *fast = NULL;
    if (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
        if (slow == fast)
        {
            cout << slow->data; // this is also known as point of intersection// or fast->data // bs pata chl jaega kaunse point pe dono same huye aur isse woh element milenge jo uss loop me present hai
            return slow;        // we can also return fast kyunki concept hi yahi hai ek point pe dono same position pe honge
        }
    }
    return NULL;
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
    if (floyddetectloop(tail) != NULL)
    {
        cout << "Cycle is present" << endl;
    }
    else
    {
        cout << "Cycle is not present";
    }
}