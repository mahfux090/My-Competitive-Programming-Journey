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
    }
    else
    {
        tail->next = newnode;
        tail = newnode;
    }
}
int sizec(Node *head)
{
    Node *tem = head;
    int count = 0;
    while (tem != NULL)
    {
        tem = tem->next;
        count++;
    }
    return count;
}
int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;

    while (1)
    {
        int val;
        cin >> val;
        if (val != -1)
        {
            insert(head1, tail1, val);
        }
        else
        {
            break;
        }
    }
    Node *head2 = NULL;
    Node *tail2 = NULL;

    while (1)
    {
        int val;
        cin >> val;
        if (val != -1)
        {
            insert(head2, tail2, val);
        }
        else
        {
            break;
        }
    }
    int size1 = sizec(head1);
    int size2 = sizec(head2);
    if (size1 != size2)
    {
        cout << "NO";
    }
    else
    {
        Node *tem1 = head1;
        Node *tem2 = head2;
        int flag = 0;
        while (tem1 != NULL && tem2 != NULL)
        {
            if (tem1->val != tem2->val)
            {
                flag = 1;
                break;
            }
            tem1 = tem1->next;
            tem2 = tem2->next;
        }
        if (flag == 0)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    return 0;
}