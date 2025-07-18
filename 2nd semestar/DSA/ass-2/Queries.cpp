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
int sizecount(Node *head)
{
    int idx = 0;
    Node *tem = head;
    while (tem != NULL)
    {
        idx++;
        tem = tem->next;
    }
    return idx;
}
void insert_head(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head = newnode;
}
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}
void delete_pos(Node *&head, Node *&tail, int pos)
{
    int sz = sizecount(head);
    if (sz > pos)
    {
        if (pos == 0)
        {
            Node *deletenode = head;
            head = head->next;
            delete deletenode;
            return;
        }
        else if (pos == sz - 1)
        {
            Node *tem = head;
            for (int i = 1; i < pos; i++)
            {
                tem = tem->next;
            }
            Node *deletenode = tem->next;
            tem->next = tem->next->next;
            delete deletenode;
            tail = tem;
            return;
        }
        Node *tem = head;
        for (int i = 1; i < pos; i++)
        {
            tem = tem->next;
        }
        Node *deletenode = tem->next;
        tem->next = tem->next->next;
        delete deletenode;
    }
}
void printnode(Node *head)
{
    Node *tem = head;
    while (tem != NULL)
    {
        cout << tem->val << " ";
        tem = tem->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int Q;
    cin >> Q;
    while (Q--)
    {
        int x, val;
        cin >> x >> val;
        if (x == 0)
        {
            insert_head(head, tail, val);
        }
        else if (x == 1)
        {
            insert_tail(head, tail, val);
        }
        else if (x == 2)
        {
            delete_pos(head, tail, val);
        }
        printnode(head);
    }
    return 0;
}