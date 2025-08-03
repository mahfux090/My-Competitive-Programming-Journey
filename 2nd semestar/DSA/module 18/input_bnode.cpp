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
Node *level_order_input()
{
    int n;
    cin >> n;
    Node *root;
    if (n == -1)
        root = NULL;
    else
    {
        root = new Node(n);
    }
    queue<Node*> q;
    if(root) q.push(root);
    while (!q.empty())
    {
        //1st 
        Node* p=q.front();
        q.pop();
        //2nd
        int l,r;
        cin>>l>>r;
        Node* myleft;
        Node* myr;
        if(l==-1)
        {myleft=NULL;}
        else{
            myleft=new Node(l);
        } 
        if(r==-1)
            myr=NULL;
        else{
            myr=new Node(r);
        }
        p->left=myleft;
        p->right=myr;
        if(p->left)
            q.push(p->left);
        if(p->right)
            q.push(p->right);
    }
    return root;
}
void level_order(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        if (root == NULL)
        {
            cout << "No Tree";
            return;
        }
        // 1st step
        Node *f = q.front();
        q.pop();
        // 2nd step
        cout << f->val << " ";
        // 3rd step
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}
int main()
{
    Node *root =level_order_input();
    level_order(root);
    return 0;
}