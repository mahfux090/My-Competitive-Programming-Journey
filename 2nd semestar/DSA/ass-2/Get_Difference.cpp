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
    else
    {
        tail->next = newnode;
        tail = newnode;
    }
}
void getdiff(Node *head)
{
    int max = INT_MIN;
    int min = INT_MAX;
    Node *tem = head;
    while (tem != NULL)
    {
        if (tem->val > max)
        {
            max = tem->val;
        }
        if (min > tem->val)
        {
            min = tem->val;
        }
        tem = tem->next;
    }
    int diff = max - min;
    cout << diff << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int x;
    while (1)
    {
        cin >> x;
        if (x != -1)
        {
            insert(head, tail, x);
        }
        else
        {
            break;
        }
    }
    getdiff(head);
    return 0;
}