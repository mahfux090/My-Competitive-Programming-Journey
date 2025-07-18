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
void findnum(Node *head, int x)
{
    Node *tem = head;
    int idx = 0;
    while (tem != NULL)
    {
        if (tem->val == x)
        {
            cout << idx << endl;
            return;
        }
        idx++;
        tem = tem->next;
    }
    cout << "-1" << endl;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        int val;
        while (1)
        {
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
        int x;
        cin >> x;
        findnum(head, x);
    }
    return 0;
}