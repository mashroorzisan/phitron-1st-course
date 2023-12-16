#include <bits/stdc++.h>

using namespace std;
class Node
{
public:
    string s;
    Node *next;
    Node *prev;

    Node(string s)
    {
        this->s = s;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_tail(Node *&head, Node *&tail, string s)
{
    Node *nn = new Node(s);
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

void print(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->s << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
bool find(Node *head, string v)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->s == v)
            return true;
        tmp = tmp->next;
    }
    return false;
}

void visit_func(Node *head, Node *&curr, string v)
{
    Node *tmp = head;
    if (find(head, v))
    {
        while (tmp != NULL)
        {
            if (tmp->s == v)
                break;
            tmp = tmp->next;
        }
        curr = tmp;
        cout << curr->s << endl;
    }
    else
    {
        cout << "Not Available" << endl;
    }
}
void next_func(Node *&curr)
{
    if (curr->next == NULL)
    {
        cout << "Not Available" << endl;
        return;
    }
    curr = curr->next;
    cout << curr->s << endl;
}
void prev_func(Node *&curr)
{
    if (curr->prev == NULL)
    {
        cout << "Not Available" << endl;
        return;
    }
    curr = curr->prev;
    cout << curr->s << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *curr = head;

    while (1)
    {
        string t;
        cin >> t;
        if (t == "end")
            break;
        insert_tail(head, tail, t);
    }

    int q;
    cin >> q;
    while (q--)
    {
        string d;
        cin >> d;
        if (d == "prev")
        {
            prev_func(curr);
        }
        else if (d == "next")
        {
            next_func(curr);
        }
        else
        {
            string v;
            cin >> v;
            visit_func(head, curr, v);
        }
    }
    return 0;
}
