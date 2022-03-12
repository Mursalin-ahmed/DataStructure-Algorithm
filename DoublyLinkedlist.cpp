#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};
void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;

    if (head != NULL)
    {
        head->prev = n;
    }
    head = n;
}
void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}
void deleteAthead(node *&head)
{
    node *todelete = head;
    head = head->next;
    head->prev = NULL;

    delete todelete;
}
void deletetion(node *&head, int pos)
{
    if (pos == 1)
    {
        deleteAthead(head);
        return;
    }
    node *temp = head;
    int count = 1;
    while (temp != NULL && count != pos)
    {
        temp = temp->next;
        count++;
    }
    temp->prev->next = temp->next;
    while (temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }
    delete temp;
}
int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    display(head);
    insertAtHead(head, 4);
    display(head);
    deletetion(head, 4);
    display(head);
    deleteAthead(head);
    display(head);
}