#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void postorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->val << " ";
}
int main()
{
    Node *root = new Node(10);
    Node *a = new Node(30);
    Node *b = new Node(20);
    Node *c = new Node(60);
    Node *d = new Node(70);
    Node *e = new Node(40);
    Node *f = new Node(50);

    root->left = a;
    root->right = b;
    a->left = c;
    a->right = f;
    b->left = d;
    b->right = e;

    postorder(root);
    return 0;
}