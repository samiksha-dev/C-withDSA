// merge linked list using merge sort
// approach-we will divide the LL in two halves left and right
// then we will sort both the halves
// and at the end merge both the sorted linked list
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
    Node *fast = head->next;
    Node *slow = head;
    Node *temp = head;
    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
    }
}
Node *mergeSort(Node *head)
{
    // base case
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *mid = getMid(head);
    Node *left = head;
    Node *right = mid->next;
    mid->next = NULL;
    // recursive call to mergeSort
    left = mergeSort(left);
    right = mergeSort(right);
    Node *ans = merge(left, right);
    return ans;
}
int main()
{
}