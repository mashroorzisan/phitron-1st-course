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

int main()
{

    int t;
    cin >> t;

    while (t--)
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
        bool found = false;
        int x;
        int i = 0;
        cin >> x;
        Node *temp = head;
        while (temp != NULL)
        {

            if (temp->val == x)
            {
                found = true;
                break;
            }
            i++;
            temp = temp->next;
        }
        (found) ? cout << i << endl : cout << -1 << endl;
    }

    return 0;
}
