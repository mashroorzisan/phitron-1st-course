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

void insert_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
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

    Node *n1 = NULL;
    Node *n2 = NULL;
    int val, val1, len1, len2;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(n1, val);
    }
    while (true)
    {
        cin >> val1;
        if (val1 == -1)
            break;
        insert_tail(n2, val1);
    }
    len1 = size(n1);
    len2 = size(n2);
    bool flag = true;
    Node *i = n1;
    Node *j = n2;
    if (len1 == len2)
    {

        while (i != NULL)
        {
            if (i->val != j->val)
            {
                flag = false;
                break;
            }
            i = i->next;
            j = j->next;
        }
    }
    else
    {
        flag = false;
    }
    (flag) ? cout << "YES" << endl :

           cout << "NO" << endl;
    return 0;
}
