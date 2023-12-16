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

void print(Node *head, Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
bool is_palindrome(Node *head, Node *tail)
{
    Node *h = head;
    Node *t = tail;

    if (head == tail || (head->next == NULL && tail->prev == NULL))
    {
        return true;
    }
    while ((h->prev != t) && (h != t))
    {

        if (h->val != t->val)
        {
            return false;
        }
        h = h->next;
        t = t->prev;
    }
    return true;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
            break;
        insert_tail(head, tail, v);
    }
    if (is_palindrome(head, tail))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
