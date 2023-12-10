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
        this->prev = NULL;
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

void printr(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
void insert_before_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_after_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
    ///

    // tail->next = newNode;
    // newNode->prev = tail;
    // tail = tail->next;
}

int size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

void insert_at_any_pos(Node *&head, Node *&tail, int pos, int val)
{
    if (pos == 0)
    {
        insert_before_head(head, tail, val);
        return;
    }
    if (pos == size(head))
    {
        insert_after_tail(head, tail, val);
        return;
    }
    Node *temp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    Node *newNode = new Node(val);
    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next->prev = newNode;
    temp->next = newNode;
}

void delete_head(Node *&head)
{
    Node *tmp = head;
    Node *nxt = head->next;
    nxt->prev = head->prev;
    head = nxt;
    delete tmp;
}

void delete_tail(Node *&tail)
{
    Node *tmp = tail;
    Node *prv = tail->prev;
    prv->next = tail->next;
    tail = prv;
    delete tmp;
}
void delete_any(Node *&head, Node *&tail, int pos)
{
    if (pos >= size(head))
    {
        return;
    }
    if (pos == 0)
    {
        delete_head(head);
        return;
    }
    if (pos == (size(head) - 1))
    {
        delete_tail(tail);
        return;
    }
    Node *tmp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *del = tmp->next;
    tmp->next = del->next;
    del->next->prev = tmp;
    delete del;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    // print at the end or add 40 at 3rd index
    insert_at_any_pos(head, tail, 0, 120);
    print(head);
    insert_at_any_pos(head, tail, 1, 180);
    print(head);
    insert_at_any_pos(head, tail, 2, 130);
    print(head);
    insert_at_any_pos(head, tail, 2, 121);
    print(head);

    // delete from any position
    // delete_any(head, tail, 0);
    // print(head);
    // delete_any(head, tail, 1);
    // print(head);
    // delete_any(head, tail, 2);
    // print(head);
    // cout << endl;
    // printr(tail);
    return 0;
}