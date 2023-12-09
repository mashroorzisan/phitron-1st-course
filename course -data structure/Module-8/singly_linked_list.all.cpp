#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void print(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void delete_node(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next; // 30
    tmp->next = tmp->next->next;
    delete deleteNode;
}
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void insert_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

int size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

void print_recursion(Node *n)
{
    if (n == NULL)
        return;
    cout << n->val << " ";
    print_recursion(n->next);
}

void print_reverse(Node *n)
{
    // base case
    if (n == NULL)
        return;

    print_reverse(n->next);
    cout << n->val << " ";
}

// sort
// for (Node *i = head; i->next != NULL; i = i->next)
//     {
//         for (Node *j = i->next; j != NULL; j = j->next)
//         {
//             if (i->val < j->val)
//             {
//                 swap(i->val, j->val);
//             }
//         }
//     }

//  Node *head = NULL;
//     Node *tail = NULL;
//     int val;
//     while (true)
//     {
//         cin >> val;
//         if (val == -1)
//             break;
//         insert_tail(head, tail, val);
//     }
//     print(head);

int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }
    print(head);
    return 0;
}
