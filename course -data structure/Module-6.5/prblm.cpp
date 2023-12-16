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
    if (head == NULL || tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    Node *temp = tail;
    tail->next = newNode;
    tail = newNode;
}
void print(Node *n)
{
    if (n == NULL)
        return;
    cout << n->val << " ";
    print(n->next);
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (val != -1)
    {
        cin >> val;
        insert_tail(head, tail, val);
    }
    print(head);

    return 0;
}