#include <bits/stdc++.h>

using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_tail(Node *&head, Node *&tail, int v)
{
    Node *nn = new Node(v);
    if (tail == NULL)
    {
        head = nn;
        tail = nn;
        return;
    }
    nn->prev = tail;
    tail->next = nn;
    tail = nn;
}
void insert_head(Node *&head, Node *&tail, int v)
{
    Node *nn = new Node(v);
    if (head == NULL)
    {
        head = nn;
        tail = nn;
        return;
    }
    nn->next = head;
    head->prev = nn;
    head = nn;
}

int size(Node *head)
{
    int cnt = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void printL(Node *head)
{
    Node *tmp = head;
    cout << "L -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void printR(Node *tail)
{
    Node *tmp = tail;
    cout << "R -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

void insert_at_pos(Node *&head, Node *&tail, int x, int v)
{
    if (x > size(head))
    {
        cout << "Invalid" << endl;
        return;
    }
    if (x == 0)
    {
        insert_head(head, tail, v);
        printL(head);
        printR(tail);
        return;
    }
    if (x == size(head))
    {
        insert_tail(head, tail, v);
        printL(head);
        printR(tail);
        return;
    }
    Node *tmp = head;
    for (int i = 0; i < x - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *nn = new Node(v);
    nn->next = tmp->next;
    tmp->next->prev = nn;
    tmp->next = nn;
    nn->prev = tmp;
    printL(head);
    printR(tail);
}

int main()
{
    int t;
    cin >> t;
    Node *head = NULL;
    Node *tail = NULL;
    while (t--)
    {
        int x, v;
        cin >> x >> v;
        insert_at_pos(head, tail, x, v);
    }
    return 0;
}
