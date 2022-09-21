// we will be given two LL
// assume first list is 3 2
// second list=2 3 0
// therefore 230+32=252
// insert at head kr doge toh ans ko reverse krne ki zaroorat nhi padegi
// approach-pehle toh hume inhe reverse karna padega since add toh hum right side se krte hai na
// uske baad jo ans aae usko reverse krke head return kr do
// time complexity for reversing if list has different size =O(n) and O(m)
// for adding O(max(M,N))//since poora traverse kr rhe
// therfore total time complexity=O(max(m,n))
// space complexity-O(max(m,n))//since addition ke liye ek list le rhe na
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
Node *reverse(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *chotahead = reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return chotahead;
}

Node *addition(Node *h1, Node *h2)
{
    // assume initial carry to be zero
    // adding carry+h1->data+h2->data
    // sum=sum%10(kuinki jn=b add krte hai toh carry upar bhej dete hai aur last digit sum me rkh lete hai)
    // iss sum ko ek nayi list me daalte jao
    // carry=sum/10;
    int carry = 0;
    Node *ansHead = NULL;
    // Node *ansTail = NULL;
    while (h1 != NULL || h2 != NULL || carry != 0)
    {
        int val1 = 0;
        // maan lo second list nhi hai ya first list lambi hai

        if (h1 != NULL)
        {
            val1 = h1->data;
        }
        int val2 = 0;
        if (h2 != NULL)
        {
            val2 = h2->data;
        }
        int sum = carry + val1 + val2;
        int digit = sum % 10;
        // create a node and insert
        insertAtHead(ansHead, digit);
        carry = sum / 10;
        if (h1 != NULL)
        {
            h1 = h1->next;
        }
        if (h2 != NULL)
        {
            h2 = h2->next;
        }
    }

    return ansHead;
}

Node *add(Node *head1, Node *head2)
{
    // step-1 reverse ll
    head1 = reverse(head1);
    head2 = reverse(head2);
    // add elements of both linked list
    Node *ans = addition(head1, head2);
    // reversing the list or ans obtained
    // ans = reverse(ans);
    return ans;
}
int maine()
{
    Node *node1 = NULL;
    Node *head = node1;
    insertAtHead(head, 5);
    insertAtHead(head, 4);
    insertAtHead(head, 5);
    print(head);
    insertAtHead(head, 4);
    insertAtHead(head, 3);
    print(head);
}