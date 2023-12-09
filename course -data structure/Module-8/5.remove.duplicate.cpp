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

void delete_node(Node *&forward, Node *&prev, Node *comp)
{
    while (forward != NULL)
    {
        if (comp->val == forward->val)
        {
            prev->next = forward->next;
            delete forward;
            forward = prev->next;
        }
        else
        {
            forward = forward->next;
            prev = prev->next;
        }
    }
}
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

    Node *comp = head;

    while (comp != NULL)
    {
        Node *prev = comp;
        Node *forward = comp->next;
        delete_node(forward, prev, comp);
        comp = comp->next;
    }

    print(head);
    return 0;
}
