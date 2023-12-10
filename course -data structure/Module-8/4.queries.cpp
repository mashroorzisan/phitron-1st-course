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
void insert_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    if (tail == NULL)
    {
        tail = head;
    }
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

void delete_node(Node *&head, Node *&tail, int pos)
{
    Node *tmp = head;
    // if (head == NULL || head->next == NULL)
    // {
    //     return;
    // }
    // head node
    if (pos == 0)
    {
        head = tmp->next;
        if (head == NULL)
        {
            tail = NULL;
        }
        delete tmp;
        return;
    }

    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }

    // tail node
    // pos == size(head) - 1
    if (tmp->next->next == NULL)
    {
        Node *del = tmp->next;
        tmp->next = tmp->next->next;
        tail = tmp;
        delete del;
        return;
    }

    // middle node
    Node *del = tmp->next;
    tmp->next = tmp->next->next;
    delete del;
}

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
int main()
{

    int q;
    cin >> q;

    Node *head = NULL;
    Node *tail = NULL;

    while (q--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            // insert v at head
            insert_head(head, tail, v);
        }
        else if (x == 1)
        {
            // insert v at tail
            insert_tail(head, tail, v);
            // print(head);
        }
        else if (x == 2)
        {
            // delete vth index
            if (v < size(head))
            {
                delete_node(head, tail, v);
            }
            // print(head);
        }
        print(head);
    }

    return 0;
}
