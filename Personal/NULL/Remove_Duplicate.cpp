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
void insert(Node *&head, Node *&tail, int val)
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
void duplicate(Node *&head)
{
    Node *i = head;
    while (i != NULL)
    {
        Node *a = i;
        Node *j = i->next;
        while (j != NULL)
        {
            if (i->val == j->val)
            {
                Node *deletenode = j;
                a->next = j->next;
                j = j->next;
                delete deletenode;
            }
            else
            {
                a = j;
                j = j->next;
            }
        }
        i = i->next;
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

    while (1)
    {
        int val;
        cin >> val;
        if (val != -1)
        {
            insert(head, tail, val);
        }
        else
        {
            break;
        }
    }
    duplicate(head);
    printnode(head);
    return 0;
}