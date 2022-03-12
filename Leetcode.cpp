//---------
//Binary_Search
//----------
//For linear search array must be sorted
//How to print all the sub array from an array
//10,20,30,
//10
//10,20,
//10,20,30
//O(n^3)
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cin >> a;
//     int arr[a];
//     for (int i = 0; i < a; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < a; i++)
//     {
//         for (int j = i; j < a; j++)
//         {
//             // for (int k = i; k <= j; k++)
//             // {
//             //     cout << arr[k] << " ";
//             // }
//             // cout << endl;
//             cout << arr[j] << " ";
//         }
//         cout << endl;
//     }
// }

// Liner_search is nothing,
// but finding a key in a arry,
// it's time complexity is O(n)

//----------
//Linked_List
//----------
// #include <iostream>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *next;

//     node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };
// void insertAthead(node *&head, int val)
// {
//     node *n = new node(val);
//     n->next = head;
//     head = n;
// }
// void insertAtTail(node *&head, int val)
// {
//     node *n = new node(val);

//     if (head == NULL)
//     {
//         head = n;
//         return;
//     }
//     node *temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = n;
// }
// bool search(node *head, int val)
// {
//     node *temp = head;
//     while (temp != NULL)
//     {
//         if (temp->data == val)
//         {
//             return true;
//         }
//         temp = temp->next;
//     }
//     return false;
// }
// void display(node *head)
// {
//     node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ->";
//         temp = temp->next;
//     }
//     cout << "NULL" << endl;
// }
// int main()
// {
//     node *head = NULL;
//     insertAtTail(head, 10);
//     insertAtTail(head, 20);
//     insertAtTail(head, 30);
//     insertAthead(head, 50);
//     display(head);
//     cout << search(head, 200) << endl;
// }