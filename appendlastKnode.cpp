#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}
void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void deleteAthead(node *&head)
{
    node *todelete = head;
    head = head->next;

    delete todelete;
}
void deletation(node *&head, int val)
{
    if (head == NULL)
    {
        return;
    }
    if (head->next == NULL)
    {
        deleteAthead(head);
    }
    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node *todelete = temp->next;
    temp->next = temp->next->next;

    delete todelete;
}
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
node *reverse(node *head)
{
    node *prevptr = NULL;
    node *curptr = head;
    node *nexptr;
    while (curptr != NULL)
    {
        nexptr = curptr->next;
        curptr->next = prevptr;

        prevptr = curptr;
        curptr = nexptr;
    }
    return prevptr;
}
node *reverseRecursive(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *newHead = reverseRecursive(head->next);

    head->next->next = head;
    head->next = NULL;

    return newHead;
}

node *reverseK(node *&head, int k)
{
    node *prevptr = NULL;
    node *curprt = head;
    node *nextptr;
    int count = 0;

    while (curprt != 0 && count < k)
    {
        nextptr = curprt->next;
        curprt->next = prevptr;

        prevptr = curprt;
        curprt = nextptr;
        count++;
    }
    if (nextptr != NULL)
    {
        head->next = reverseK(nextptr, k);
    }
    return prevptr;
}
void makeCycle(node *&head, int pos)
{
    node *temp = head;
    node *startNode;
    int count = 1;
    while (temp->next != NULL)
    {
        if (count == pos)
        {
            startNode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startNode;
}
bool detectCycle(node *&head)
{
    node *slow = head;
    node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            return true;
        }
    }
    return false;
}
void removeCycle(node *&head)
{
    node *slow = head;
    node *fast = head;
    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);
    fast = head;

    while (slow->next != fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = NULL;
}
bool search(node *head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}
int length(node *head)
{
    int count = 0;
    node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
node *kappend(node *&head, int k)
{
    node *newHead;
    node *newTail;
    node *tail = head;
    int l = length(head);
    k = k % l;
    int count = 1;
    while (tail->next != NULL)
    {
        if (count == l - k)
        {
            newTail = tail;
        }
        if (count == l - k + 1)
        {
            newHead = tail;
        }
        tail = tail->next;
        count++;
    }
    newTail->next = NULL;
    tail->next = head;

    return newHead;
}
int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 5);
    insertAtTail(head, 15);
    insertAtTail(head, 20);
    insertAtHead(head, 50);
    //cout << search(head, 10) << endl;
    display(head);
    // deletation(head, 20);
    // display(head);
    //deleteAthead(head);
    display(head);
    // node *newhead = reverse(head);
    //display(newhead);
    int k = 2;
    //    node *newHead = reverseK(head, k);
    //    display(newHead);
    //    makeCycle(head, 2);
    //    cout << detectCycle(head) << endl;
    //    removeCycle(head);
    //    cout << detectCycle(head) << endl;
    node *newHead2 = kappend(head, 2);
    display(newHead2);
}
