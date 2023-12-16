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
void insert_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;

    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void insert_head(Node *&head, int val)
{
    Node *nn = new Node(val);
    nn->next = head;
    head = nn;
}

void insert_at_pos(Node *&head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    if (pos > size(head))
    {
        return;
    }
    if (pos == 0)
    {
        insert_head(head, val);
        return;
    }
    if (pos == size(head))
    {
        insert_tail(head, val);
        return;
    }
    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}

void print(Node *n)
{
    Node *tmp = n;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    insert_at_pos(head, 0, 10);
    print(head);
    insert_at_pos(head, 0, 20);
    print(head);
    insert_at_pos(head, 0, 30);
    print(head);
    insert_at_pos(head, 14, 14);
    print(head);

    return 0;
}