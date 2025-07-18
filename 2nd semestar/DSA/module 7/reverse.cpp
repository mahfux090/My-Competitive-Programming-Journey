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
// Insert at tail
void insert_tail(Node *&head, Node *&tail, int val)
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

// Recursive print in reverse
void print_reverse(Node *node)
{
    if (node == NULL)
        return;
    print_reverse(node->next);
    cout << node->val << " ";
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;

    // Input till -1
    while (cin >> val && val != -1)
    {
        insert_tail(head, tail, val);
    }

    // Recursive reverse print
    print_reverse(head);
    cout << endl;

    return 0;
}
