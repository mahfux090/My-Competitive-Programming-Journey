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
        Node* p=q.front();
        q.pop();
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
int count(Node* root)
{
    if(root==NULL) return 0;
    int l=count(root->left);
    int r=count(root->right);
    return l+r+1;
}
int height(Node* root)
{
    if(root==NULL) return 0;
    int l=height(root->left);
    int r=height(root->right);
    int mx=max(l,r)+1;
    return mx;
}
int main()
{
    Node *root =level_order_input();
    int c=count(root);
    int h=height(root);
    int l=1;
    for (int i = 0; i < h; i++)
    {
        l=l*2;
    }
    if(l-1==c)
        cout<<"YES";
    else
        cout<<"NO";
}
